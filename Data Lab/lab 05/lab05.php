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
	

?>




<html>
	<body>
		<h1>Database Connection</h1>
		<hr>
		
		<?php
			$q = 'show tables;';
			$result = $sqlconn->query($q);
			if($result)
			{
				while($row = $result->fetch_array())
				{
					echo '<br>'.$row[0];
				}
			}
			
			$q = 'select*from employee_data';
			if($res = $sqlconn->query($q)){
				echo '<table border="1">';
				while($row = $res->fetch_array()){
					echo '<tr>';
					for ($i=0;$i<9;$i++){
						echo'<td>';
						echo $row[$i];
						echo'</td>';
					}
						
					echo '</tr>';
					
				}
				echo '</table>';
			}
		?>
		
		
		
		<?php
			$q = 'show tables;';
			$result = $sqlconn->query($q);
			if($result)
			{
				while($row = $result->fetch_array())
				{
					echo '<br>'.$row[0];
				}
			}
			
			$q = 'select*from employee_data order by age desc';
			if($res = $sqlconn->query($q)){
				echo '<table border="1">';
				while($row = $res->fetch_array()){
					echo '<tr>';
					for ($i=0;$i<9;$i++){
						echo'<td>';
						echo $row[$i];
						echo'</td>';
					}
						
					echo '</tr>';
					
				}
				echo '<table>';
			}
		?>
		
		
		<?php
			$q = 'show tables;';
			$result = $sqlconn->query($q);
			if($result)
			{
				while($row = $result->fetch_array())
				{
					echo '<br>'.$row[0];
				}
			}
			
			
			$colname = array("a","b","c","d","e","f","g","h","i");
			
			$q = 'select*from employee_data order by age desc';
			if($res = $sqlconn->query($q)){
				echo '<table border="1">';
				
					echo '<tr>';
					for ($i=0;$i<count($colname);$i++){
						echo'<th>';
						echo $colname[$i];
						echo'</th>';
					}
						
					echo '</tr>';
					while($row = $res->fetch_array()){
					echo '<tr>';
					for ($i=0;$i<9;$i++){
						echo'<td>';
						echo $row[$i];
						echo'</td>';
					}
						
					echo '</tr>';
					
				
				
					}
				echo '</table>';
			}
		?>
		
		
		<?php
			$q = 'show tables;';
			$result = $sqlconn->query($q);
			if($result)
			{
				while($row = $result->fetch_array())
				{
					echo '<br>'.$row[0];
				}
			}
			
			
			$colname = array("a","b","c","d","e","f","g","h","i");
			
			$q = 'select*from employee_data order by age desc';
			if($res = $sqlconn->query($q)){
				echo '<table border="1">';
				
					echo '<tr>';
					for ($i=0;$i<count($colname);$i++){
						echo'<th>';
						echo $colname[$i];
						echo'</th>';
					}
						
					echo '</tr>';
					while($row = $res->fetch_array()){
					echo '<tr>';
					for ($i=0;$i<9;$i++){
						echo'<td>';
						echo '<a href="detail.php?id='.$row['emp_id'].'">'.$row[$i].'</a>';
						echo'</td>';
					}
						
					echo '</tr>';
					
				
				
					}
				echo '</table>';
			}
		?>
		
		
		
		
		<?php
			$q = 'show tables;';
			$result = $sqlconn->query($q);
			if($result)
			{
				while($row = $result->fetch_array())
				{
					echo '<br>'.$row[0];
				}
			}
			?>
			
			
			<hr>
			<a href="insert.php">Add new employee</a>
			<hr>
			
			
			
			<?php
			$colname = array("a","b","c","d","e","f","g","h","i");
			
			$q = 'select*from employee_data order by age desc';
			if($res = $sqlconn->query($q)){
				echo '<table border="1">';
				
					echo '<tr>';
					for ($i=0;$i<count($colname);$i++){
						echo'<th>';
						echo $colname[$i];
						echo'</th>';
					}
						
					echo '</tr>';
					while($row = $res->fetch_array()){
					echo '<tr>';
					for ($i=0;$i<9;$i++){
						echo'<td>';
						echo '<a href="detail.php?id='.$row['emp_id'].'">'.$row[$i].'</a>';
						echo'</td>';
					}
						
					echo '</tr>';
					
				
				
					}
				echo '</table>';
			}
		?>
	</body>
</html>

<?php
	//close connection
	$sqlconn->close();
?>