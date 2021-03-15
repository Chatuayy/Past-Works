<?php
//create connection
$sqlconn = new mysqli('localhost','root','','staff');

//check connection
if ($sqlconn->connect_errno) {
	echo $sqlconn->connect_errno ." : ". $sqlconn->connect_error;
}

if (isset($_POST['groupcode']))
{
	$in_code = $_POST['groupcode'];
	$in_name = $_POST['groupname'];
	$in_remark = $_POST['remark'];
	$in_url = $_POST['url'];
	if (strlen($in_code) > 0 && strlen($in_name) > 0 && strlen($in_remark) > 0 && strlen($in_url) > 0)
	{
		$q = 'insert into usergroup(usergroup_code,usergroup_name,usergroup_remark,usergroup_url) '
		. ' value(' 
		. '"' . $in_code . '", ' 
		. '"' . $in_name . '", ' 
		. '"' . $in_remark . '", ' 
		. '"' . $in_url . '"' 
		. ')';
		echo $q;
		if ($sqlconn->query($q))
		{
			header("location: group.php");
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
				<?php
				$q = "select * from usergroup order by usergroup_id;";
				if ($res = $sqlconn->query($q))
				{
					while($row = $res->fetch_array())
					{
				?>
                 <tr>
                    <td><?php echo $row['usergroup_code']; ?></td> 
                    <td><?php echo $row['usergroup_name']; ?></td>
                    <td><?php echo $row['usergroup_remark']; ?></td>
                    <td><?php echo $row['usergroup_url']; ?></td>
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
<?php
//close connection
//$sqlconn->close();
?>


