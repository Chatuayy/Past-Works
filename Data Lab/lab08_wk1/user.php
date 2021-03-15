<?php
//create connection
$sqlconn = new mysqli('localhost','root','','staff');

//check connection
if ($sqlconn->connect_errno) {
	echo $sqlconn->connect_errno ." : ". $sqlconn->connect_error;
}

if (isset($_POST['title']))
{
	$in_title = $_POST['title'];
	$in_fname = $_POST['firstname'];
	$in_lname = $_POST['lastname'];
	$in_email = $_POST['email'];
	$in_usergroup = $_POST['usergroup'];
	$in_disable = $_POST['disabled'];
	if (strlen($in_title) > 0 && strlen($in_fname) > 0 && strlen($in_lname) > 0 && strlen($in_email) > 0 && strlen($in_usergroup) > 0 && strlen($in_disable) > 0)
	{
		$q = 'insert into user(user_title,user_fname,user_lname,user_email,user_groupid,disable) '
		. ' value(' 
		. '"' . $in_title . '", ' 
		. '"' . $in_fname . '", ' 
		. '"' . $in_lname . '", ' 
		. '"' . $in_email . '", ' 
		. '"' . $in_usergroup . '", ' 
		. '"' . $in_disable . '"' 
		. ')';
		echo $q;
		if ($sqlconn->query($q))
		{
			header("location: user.php");
		}
	}
}

?>





<!DOCTYPE html>
<html>
<head>
<title>ITS331 Sample</title>
<link rel="stylesheet" href="default.css">
</head>

<body>

<div id="wrapper"> 
	<div id="div_header">
		ITS331 System 
	</div>
	<div id="div_subhead">
		<ul id="menu">
			<li><a href="user.php">User Profile</a></li>
			<li><a href="add_user.php">Add User</a></li>
			<li><a href="group.php">User Group</a></li>
			<li><a href="add_group.html">Add User Group</a></li>
		</ul>		
	</div>
	<div id="div_main">
		<div id="div_left">
				
		</div>
		<div id="div_content" class="usergroup">
			<!--%%%%% Main block %%%%-->
			
			<h2>User Profile</h2>
			<table>
                <col width="15%">
                <col width="30%">
                <col width="30%">
                <col width="20%">
                <col width="5%">

                <tr>
                    <th>Title</th> 
                    <th>Name</th>
                    <th>Email</th>
                    <th>User Group</th>
                    <th>Disabled</th>
                    <th>Edit</th>
                    <th>Del</th>
                </tr>
				<?php
				$q = "select * from user order by user_id;";
				if ($res = $sqlconn->query($q))
				{
					while($row = $res->fetch_array())
					{
				?>
                 <tr>
                    <td><?php echo $row['user_title']; ?></td> 
                    <td><?php echo $row['user_fname']."".$row['user_lname']; ?></td>
                    <td><?php echo $row['user_email']; ?></td>
                    <td><?php echo $row['user_groupid']; ?></td>
                    <td><input type='checkbox' <?php if($row['disable'] =="1") echo "CHECKED"?>></td>
                    <td><img src="images/Modify.png" width="24" height="24"></td>
                    <td><img src="images/Delete.png" width="24" height="24"></td>
                </tr>  
				<?php 
					}
				}
				?>
            </table>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>


