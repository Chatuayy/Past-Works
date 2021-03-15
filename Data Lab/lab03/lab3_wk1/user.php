<!DOCTYPE html>
<html>
<head>
<title>ITS331 Sample</title>
<link rel="stylesheet" href="default.css">
</head>

<body>
	<?php
		$title="";
		if(isset($_POST['title']))
			$title=$_POST['title'];
			if($title=='Mr.') $title="Mr.";
			else if($title=='Mrs.') $title="Mrs.";
			else if($title=='Ms.') $title="Ms.";
		
		$firstname="";
		if(isset($_POST['firstname']))
			$firstname=$_POST['firstname'];
		$lastname="";
		if(isset($_POST['lastname']))
			$lastname=$_POST['lastname'];
		
		$email="";
		if(isset($_POST['email']))
			$email=$_POST['email'];
		
		$disabled="";
		if(isset($_POST['disabled']))
			$disabled=$_POST['disabled'];

	?>

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
                 <tr>
                    <td><?php echo$title;?></td> 
                    <td><?php echo$firstname." ".$lastname?></td>
                    <td><?php echo$email?></td>
                    <td><?php echo$_POST['usergroup'];?></td>
					
                    <td><input type='checkbox' <?php if($disabled=="1") echo "CHECKED"?>></td>
                    <td><img src="images/Modify.png" width="24" height="24"></td>
                    <td><img src="images/Delete.png" width="24" height="24"></td>
                </tr>      
            </table>
		</div> <!-- end div_content -->
		
	</div> <!-- end div_main -->
	
	<div id="div_footer">  
		
	</div>

</div>
</body>
</html>

