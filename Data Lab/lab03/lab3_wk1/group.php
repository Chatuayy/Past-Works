<!DOCTYPE html>
<html>
<head>
<title>ITS331 Sample</title>
<link rel="stylesheet" href="default.css">
</head>

<body>
	<?php
	$groupcode="";
		if(isset($_POST['groupcode']))
			$groupcode=$_POST['groupcode'];
		
	$groupname="";
		if(isset($_POST['groupname']))
			$groupname=$_POST['groupname'];
	$remark="";
		if(isset($_POST['groupname']))
			$groupname=$_POST['groupname'];
	$url="";
		if(isset($_POST['url']))
			$url=$_POST['url'];
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
			<h2>User Group</h2>			
			<table>
                <col width="10%">
                <col width="20%">
                <col width="30%">
                <col width="30%">
                <col width="5%">
                <col width="5%">

                <tr>
                    <th>Group Code</th> 
                    <th>Group Name</th>
                    <th>Remark</th>
                    <th>URL</th>
                    <th>Edit</th>
                    <th>Del</th>
                </tr>
                 <tr>
                    <td><?php echo$groupcode;?></td> 
                    <td><?php echo$groupname;?></td>
                    <td><?php echo$_POST['remark'];?></td>
                    <td><?php echo$url;?></td>
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


