<?php
if(isset($_POST['up']))
{
	//var_dump($_POST);
	$v1 = trim($_POST['p_name']);
	$v2 = trim($_POST['p_price']);
	$v3 = trim($_POST['p_stock']);
	$vid = trim($_POST['p_id']);
	
	$q = "UPDATE product SET " .
	"p_name = '".$v1."', " .
	"p_price = '".$v2."', " .
	"p_stock = '".$v3."' " .
	" WHERE id = '".$vid."' ";
	
	//echo $q;
	
	include('dbconn.php');
	if($res = $conn->query($q))
	{
		header("Location: lab8.php");
	}
	else
	{
		echo "UPDATE Failed!";
	}
}
else if(isset($_GET['eid']))
{
	include('dbconn.php');
	$pro_id = $_GET['eid'];
	
	$q = "SELECT * FROM product WHERE id = '".$pro_id."'";
	if ($res = $conn->query($q))
	{
		$row = $res->fetch_array();
		var_dump($row);
?>
<form action="edit_page.php" method="POST">
<input type="hidden" name="p_id" 
value="<?php echo $row['id']; ?>">

Name: <input type="text" name="p_name" 
value="<?php echo $row['p_name']; ?>">
<br>
Price: <input type="text" name="p_price" 
value="<?php echo $row['p_price']; ?>">
<br>
Quantity: <input type="text" name="p_stock" 
value="<?php echo $row['p_stock']; ?>">
<hr>
<input type="submit" name="up" value="UPDATE">
&nbsp;&nbsp;
<input type="reset" value="RESET">
<hr>
<a href="lab8.php">Cancel (Go Back)</a>
</form>
<?php
	}
}

?>
