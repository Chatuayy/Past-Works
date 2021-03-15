<html>
	<head>
		<title>Rows</title>
	<body>
	<?php
		$numrows = $_GET['rows'];
		echo '<table border ="1">';
		for($i=0;$i<$numrows;$i++){
			$color = array("#FF0000","#FFF000","#00FFFF");
			if ($i%3 == 0)
				$a = $color[0];
			elseif ($i%3 == 1)
				$a = $color[1];
			elseif ($i%3 == 2)
				$a = $color[2];
			echo'<tr><td bgcolor = "'.$a.'">';
			echo " ".$i." ";
			echo '</td></tr>';
		}
		echo"</table>";
	?>
	</body>
	</head>
</html>
