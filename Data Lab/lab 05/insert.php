<?php	
	//#1//127.0.0.1//server
	//#2//username //can see in the priviledge of phpmyadmin
	//#3//password
	//#4//databasename
	
	//create connection
	$sqlconn = new mysqli('localhost', 'root', '','lab05');
	
	if($sqlconn->connect_errno){
		echo $sqlconn->connect_errno.":".$sqlconn->connect_error;
	}
	
	
	if(isset($_POST['in_fname']))
	{
		$in_fname=$_POST['in_fname'];
		$in_lname=$_POST['in_lname'];
		$in_age=$_POST['in_age'];
		
		var_dump ($in_fname);
		var_dump ($in_lname);
		var_dump ($in_age);
		
		
		if(strlen($in_fname)>0 && strlen($in_lname)>0 && strlen($in_age)>0)
		{
			$q='insert into employee_data(f_name,l_name,age) value('
			.'"'. $in_fname.'",'
			.'"'. $in_lname.'",'
			.'"'. $in_age.'"'
			
			.')';
			echo "<hr>".$q;
			if(!$sqlconn->query($q))
			{
				echo "INSERT FAIL!!!".$sqlconn->error;
			}
			else
			{
				header("location: lab05.php");//automatic redirect page
				exit(0);
			}
		}
		
	}
?>




<html>
	<body>
		<h1>Add new employee</h1>
		<hr>
		
		<form action="insert.php" method ="POST">
		First Name <input type="text" name="in_fname"><br>
		Last Name <input type="text" name="in_lname"><br>
		Age <input type="text" name="in_age"><br>
		<hr>
		<input type="submit" value="Add this user">
		</form>
		
		<hr>
		<a href="lab05.php">GO BACK</a>
		
		
	</body>
</html>

<?php
	//close connection
	$sqlconn->close();
?>