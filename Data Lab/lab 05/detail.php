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
	
	$emp_id=$_GET['id'];
	$q="select * from employee_data where  emp_id=".$emp_id.";";
	if($res=$sqlconn->query($q))
	{
		while($row = $res->fetch_array())
		{
			var_dump($row);
			$userinfo=$row;
		}
	}
?>




<html>
	<body>
		<h1>Detail of <u><?php echo $userinfo['f_name']; ?></u></h1>
		<hr>
		First Name:<?php echo $userinfo['f_name']; ?><br>
		Last Name:<?php echo $userinfo['l_name']; ?><br>
		Age:<?php echo $userinfo['age']; ?><br>
		
		
		<a href="lab05.php">GO BACK</a>
		
		
	</body>
</html>

<?php
	//close connection
	$sqlconn->close();
?>