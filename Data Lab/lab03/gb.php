<html>
	<body>
	<?php
	$newvalue="";
	if(isset($_POST['rg']))
		$newvalue=$_POST['rg'];
	
	
	$oldval="";
	if(isset($_POST['oldval']))
		$oldval=$_POST['oldval'];
	
	echo "OLD = ".$oldval;
	echo "NEW = ".$newvalue;
	
	$currentval=$oldval.$newvalue;
	echo "CURRENT = ".$currentval;
	?>
	<form action="gb.php" method="POST">
	<input type="hidden" name="oldval" value="<?php $currentval;?>">
	<input type="radio" name="rg" value="r">Red
	<input type="radio" name="rg" value="g">Green
	<hr>
	<input type="submit">
	</form>
	<table><tr>
	<?php
	for ($i=0; $i<strlen($currentval);$i++){
		if($currentval[$i]=='r')
			echo '<td bgcolor="red"'.$i.'</td>';
		else if($currentval[$i]=='g')
			echo '<td bgcolor="green"'.$i.'</td>';
	}
	?>
	</tr></table>
	</body>
</html>