<html>
	<body>
		<h1>PHP Forms</h1>
		<hr>
		<?php
			$vara=$_POST['a'].$_POST['b'];
			echo $vara;
		?>
		<form action="Lab03.php" method="POST">
			a:<input type="text" name="a"/>
			<br>
			b:<input type="text" name="b"/>
			<hr>
			<input type="submit">
		</form>
	
		<form action="Lab03_page2.php" method="POST">
			Gender:
			<input type="radio" name="mygender" value="M">Male
			<input type="radio" name="mygender" value="F">Female
			<input type="radio" name="mygender" value="N">Not sure
			<br>
			Name:<input type="text" size="10" name="myname"/>
			<br>
			Password:<input type="password" size="20" name="mypass"/>
			<br>
			Interest in:
			<input type="checkbox" name="in1" value="Book">Book
			<input type="checkbox" name="in2" value="Movies">Movies
			<input type="checkbox" name="in3" value="Car">Car
			<input type="checkbox" name="in4" value="Mobile">Mobile
			
			<br>
			List Box
			<select name="Foods" >
			<option value="Banana">Banana</option>
			<option value="Apple">Apple</option>
			<option value="Orange">Orange</option>
			<option value="Banana2" SELECTED>Banana2</option>
			<option value="Banana3">Banana3</option>
			</select>
			<br>
			Textarea
			<textarea name="content">
			---Default Value---
			</textarea>
			
			<hr>
			<input type="submit" value="update!"/>
		</form>
	
		
	
	</body>
</html>