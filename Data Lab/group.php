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
			<?php
					require_once('connect.php'); 
				if(isset($_POST['submit'])) {
					$groupcode = $_POST['groupcode'];
					$groupname = $_POST['groupname'];
					$remark = $_POST['remark'];
					$url = $_POST['url'];

					$q="INSERT INTO USERGROUP(USERGROUP_CODE,USERGROUP_NAME,USERGROUP_REMARK,USERGROUP_URL) VALUES ('$groupcode','$groupname','$remark','$url');";
					$result=$mysqli->query($q);
					if(!$result){
						echo "INSERT failed. Error: ".$mysqli->error ;
						break;
					}
			}
			
			
			include('connect.php');

			if (isset($_GET['id'])) 
{

				$var1 = $mysqli->real_escape_string($_GET['id']);
				$q = "DELETE from USER WHERE USER_ID=" . $var1;
				if ($mysqli->query($q))
				{
					header("Location: user.php");
				}
				else
				{
				
					echo "ERROR delete record!!";
				}
			
	
	//echo ($_POST['p_id']);
	//echo ($_POST['conf']);
}
			?>
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
						$q = "SELECT * FROM usergroup";
						$c = "SELECT COUNT(*) FROM usergroup";
						
						if($result = $mysqli->query($q)){
							$count=$result->num_rows;
							
							while($row = $result->fetch_array()){
								echo '<tr>';
								echo '<td>'.$row['USERGROUP_CODE'].'</td>';
								echo '<td>'.$row['USERGROUP_NAME'].'</td>';
								echo '<td>'.$row['USERGROUP_REMARK'].'</td>';
								echo '<td>'.$row['USERGROUP_URL'].'</td>';
								echo '<td><img src="images/Modify.png" width="24" height="24"></td>';
								echo '<td>';
								echo "<a href='user.php?var=".$row['USERGROUP_CODE']."'>";
								echo '<td><img src="images/Delete.png" width="24" height="24"></td>';
								echo "</td>";
								echo '</tr>';
								
							}
							
							
							echo '<tr>';
							echo '<td colspan="7">Total '.$count.' record(s)</td>';
							echo '</tr>';
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


