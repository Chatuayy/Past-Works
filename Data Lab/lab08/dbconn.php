<?php
	$conn = new mysqli('localhost','root','','myshop');
	if($conn->connect_errno)
	{
		echo "Connect Failed!";
	}
?>