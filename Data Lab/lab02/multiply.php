<html>
	<head>
		<title>Multiplication Table</title>
	</head>
	<body>
		<?php
			echo '<table style="text-align:center;" border="1">';
				echo "<tr>";
					echo "<th>x</th>";
					
						for($i=1;$i<=12;$i++){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>1</th>";
					
						for($i=1;$i<=12;$i++){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>2</th>";
					
						for($i=2;$i<=24;$i+=2){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>3</th>";
					
						for($i=3;$i<=36;$i+=3){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>4</th>";
					
						for($i=4;$i<=48;$i+=4){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>5</th>";
					
						for($i=5;$i<=60;$i+=5){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>6</th>";
					
						for($i=6;$i<=72;$i+=6){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>7</th>";
					
						for($i=7;$i<=84;$i+=7){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>8</th>";
					
						for($i=8;$i<=96;$i+=8){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>9</th>";
					
						for($i=9;$i<=108;$i+=9){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>10</th>";
					
						for($i=10;$i<=120;$i+=10){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>11</th>";
					
						for($i=11;$i<=132;$i+=11){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
				echo "<tr>";
					echo "<th>12</th>";
					
						for($i=12;$i<=144;$i+=12){
							echo"<th>". $i ."</th>";
						}
					
				echo "</tr>";
			echo "</table>";
			
		?>
		
		
	</body>
</html>
				