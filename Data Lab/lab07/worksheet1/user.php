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
					$title = $_POST["title"];
					$firstname = $_POST["firstname"];
					$lastname = $_POST["lastname"];
					$gender = $_POST["gender"];
					$email = $_POST["email"];
					$username = $_POST["username"];
					$passwd = $_POST["passwd"];
					$cpasswd = $_POST["cpasswd"];
					$usergroup = $_POST["usergroup"];
					$disabled = $_POST["disabled"];
				
					$q="INSERT INTO USER (USER_TITLE,USER_FNAME,USER_LNAME,USER_GENDER,USER_EMAIL,USER_NAME,USER_PASSWD,USER_GROUPID,DISABLE) 
					VALUES ('$title','$firstname','$lastname','$gender','$email','$username','$passwd','$usergroup','$disabled')";
					$result=$mysqli->query($q);
					if(!$result){
						echo "INSERT failed. Error: ".$mysqli->error ;
						break;
					}
			}
			
			include('connect.php');

			if (isset($_GET['id'])) {


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
			
			}
			?>
			
			
			
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
						$q = "SELECT * FROM user";
						if($result = $mysqli->query($q)){
							$count=$result->num_rows;
							
							while($row = $result->fetch_array()){
								echo '<tr>';
								echo '<td>'.$row['USER_TITLE'].'</td>';
								echo '<td>'.$row['USER_FNAME'].' '.$row['USER_LNAME'].'</td>';
								echo '<td>'.$row['USER_EMAIL'].'</td>';
								echo '<td>'.$row['USER_GROUPID'].'</td>';
								echo '<td><input type="checkbox"></td>';
								echo '<td><img src="images/Modify.png" width="24" height="24"></td>';
								echo '<td>';
								echo "<a href='user.php?var=".$row['USER_ID']."'>";
								echo '<img src="images/Delete.png" width="24" height="24"> </a>';
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