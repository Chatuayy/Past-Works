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
			<!--Form -->
			
			<h2>Login</h2>
			<form action="checklogin.php" method="POST">
				
				<label>Username</label>
				<input type="text" name="username">
				
				<label>Password</label>
				<input type="password" name="passwd">
				<div class="center">
					<input type="submit" value="Login" name="login">					
					<input type="reset" >			
					<a href="forgot.php">Forget password ? </a>
				</div>
				
			</form>
		</div> <!-- end div_content -->
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
	</div>
	
</div>
</body>
</html>


