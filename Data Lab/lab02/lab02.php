<html>
	<head>
		<title>Basic PHP</title>
	</head>
	<body>
		<?php
			echo "<h1>Hello,World</h1>";
			echo "10 + 20 = ";
			echo 10+20;
			echo "<br>";
		?>
		<?php
			$x = 10;
			$y = 'Hello';
			$z = $x.$y;
			echo $z;
			echo "<br>";
		?>
		<?php
			$name = 'John';
			$age = 20;
			$txt = "His name is $name. He is \"{$age}\" years old.";
			echo $txt;
			echo $name;
			echo "<br>";
		?>
		<?php
			$str = "SIIT, TU";
			echo $str[0].$str[1].$str[2].$str[3].$str[strlen($str)-1];
			echo "<br>";
		?>
		<?php
			$arr =array('foo'=>'bar',12=>true);
			
			$arr[]=20;
			$arr['Hello'] = 'World';
			$arr[] = "PHP";
			
			print_r($arr);
			echo "<br>";
			
			unset($arr[13]);
			print_r($arr);
			echo "<br>";
		?>
		<?php
			$ar = array('a',2,'b','c', 10);
			for($i = 0; $i < count($ar); ++$i){
				echo $ar[$i] . '<br>';
			}
			echo "<br>";
		?>
		<?php $a = 10; 
		 if ($a == 10){
			echo"<p>The condition is true.</p>";
		} else {
			echo"<p>The condition is false.</p>";
		 }
		
		 $a = 10;
		 if ($a > 10){
			echo"<p>The condition is true.</p>";
		 }
		else{
			echo"<p>The condition is false.</p>";
		}
			
		 ?>
		 <?php
			$mycontent = fopen("content.txt","r'");
			
			while(!feof($mycontent)){
				echo fgets($mycontent);
			}
		?>
		

		<?php	
			echo '<table border="1">';
			$i = 1;
			while($i <= 10){
				echo "<tr><td> ". $i." </td><td>". str_repeat("*",$i)."</td></tr>";
				$i++;
			}
			echo "</table>";
		?>
		<?php
			echo '<table border = "1">';
			for($i=1;$i<=10;$i++){
				echo "<tr><td>".$i."</td><td>".str_repeat("*",$i)."</td></tr>";
			}
			echo "</table>";
		?>
	</body>
</html>