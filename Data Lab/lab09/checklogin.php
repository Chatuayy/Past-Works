<?php
session_start();
require_once("helper.php") ;

if (isset($_POST['login']))
{
	$u_user = $_POST['username'];
	$u_pass = $_POST['passwd'];
	
	$q = "SELECT * FROM user ".
	" WHERE USER_NAME='".$u_user."' AND USER_PASSWD='".$u_pass."' ";
	//echo $q;
	require_once('connect.php');
	
	if ($res = $mysqli->query($q))
	{
		$row = $res->fetch_array();
		if (
				isset($row['USER_ID']) &&
				isset($row['USER_TITLE']) &&
				isset($row['USER_FNAME']) &&
				isset($row['USER_LNAME']) &&
				isset($row['USER_GENDER']) &&
				isset($row['USER_EMAIL']) &&
				isset($row['USER_NAME']) &&
				isset($row['USER_PASSWD']) &&
				isset($row['USER_GROUPID']) &&
				isset($row['DISABLE'])
			)
			{
				//var_dump($row);
				$_SESSION['v_groupid'] = $row['USER_GROUPID'];
				$_SESSION['welcome'] = 'Yes';
				//print_r($_SESSION);
				//echo "a";
				
			}
		else
			{
				echo "Wrong PASSWORD";
			}
	}
	else
	{
		//header("Location: checklogin.php");
		print_r($_SESSION);
		echo "b";
	}
}	
?>

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
			<li><a href="login.php">Login</a></li>
			<li><a href="user.php">User Profile</a></li>
			<li><a href="add_user.php">Add User</a></li>
			<li><a href="group.php">User Group</a></li>
			<li><a href="add_group.php">Add User Group</a></li>
			<li><a href="logout.php">Logout</a></li>
		</ul>		
	</div>
	
	<div id="div_main">
		<div id="div_left">
			
		</div>

		<div id="div_content" class="form">
			<!--%%%%% Main block %%%%-->
			<?php 
				if (isset($_SESSION['welcome']) && $_SESSION['welcome']="Yes")
				{
					echo "welcome!";
				}
				
			?>
		</div> <!-- end div_content -->
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
	</div>
	
</div>
</body>
</html>