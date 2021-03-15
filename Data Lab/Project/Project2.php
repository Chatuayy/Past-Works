<html>
	<head>
		<title>ProjectPage2</title>
	</head>
	
	<body>
		<?php
			$boxingM="";
			if(isset($_POST['boxingM'])) $boxingM=$_POST['boxingM'];
			
			$boxingT="";
			if(isset($_POST['boxingT'])) $boxingT=$_POST['boxingT'];
			
			$boxingW="";
			if(isset($_POST['boxingW'])) $boxingW=$_POST['boxingW'];
			
			$boxingTH="";
			if(isset($_POST['boxingTH'])) $boxingTH=$_POST['boxingTH'];
			
			$boxingF="";
			if(isset($_POST['boxingF'])) $boxingF=$_POST['boxingF'];
			
			
			$swimmingM="";
			if(isset($_POST['swimmingM'])) $swimmingM=$_POST['swimmingM'];
			
			$swimmingT="";
			if(isset($_POST['swimmingT'])) $swimmingT=$_POST['swimmingT'];
			
			$swimmingW="";
			if(isset($_POST['swimmingW'])) $swimmingW=$_POST['swimmingW'];
			
			$swimmingF="";
			if(isset($_POST['swimmingF'])) $swimmingF=$_POST['swimmingF'];
			
			
			$karateM="";
			if(isset($_POST['karateM'])) $karateM=$_POST['karateM'];
			
			$karateTH="";
			if(isset($_POST['karateTH'])) $karateTH=$_POST['karateTH'];
			
			$karateF="";
			if(isset($_POST['karateF'])) $karateF=$_POST['karateF'];
			
			
			$yogaM="";
			if(isset($_POST['yogaM'])) $yogaM=$_POST['yogaM'];
			
			$yogaT="";
			if(isset($_POST['yogaT'])) $yogaT=$_POST['yogaT'];
			
			$yogaTH="";
			if(isset($_POST['yogaTH'])) $yogaTH=$_POST['yogaTH'];
			
			$yogaF="";
			if(isset($_POST['yogaF'])) $yogaF=$_POST['yogaF'];
			
			
			$dancingT="";
			if(isset($_POST['dancingT'])) $dancingT=$_POST['dancingT'];
			
			$dancingW1="";
			if(isset($_POST['dancingW1'])) $dancingW1=$_POST['dancingW1'];
			
			$dancingW2="";
			if(isset($_POST['dancingW2'])) $dancingW2=$_POST['dancingW2'];
			
			$dancingTH="";
			if(isset($_POST['dancingTH'])) $dancingTH=$_POST['dancingTH'];
		?>
		
		
		<h1>My schedule</h1>
		
		
		<table style="text-align:center;" border="1">
			<tr>
				<th></th><th>09:00-10:20</th><th>10:40-12:00</th><th>13:00-14:20</th><th>14:20-16:00</th>
			</tr>
			<tr>
				<td>Monday</td>
				<td colspan="1"><b><?php echo $boxingM;?></b></td>
				<td colspan="1"><b><?php echo $swimmingM;?></b></td>
				<td colspan="1"><b><?php echo $karateM;?></b></td>
				<td colspan="1"><b><?php echo $yogaM;?></b></td>
			</tr>
			<tr>
				<td>Tuesday</td>
				<td colspan="1"><b><?php echo $yogaT;?></b></td>
				<td colspan="1"><b><?php echo $swimmingT;?></b></td>
				<td colspan="1"><b><?php echo $dancingT;?></b></td>
				<td colspan="1"><b><?php echo $boxingT;?></b></td>
			</tr>
			<tr>
				<td>Wednesday</td>
				<td colspan="1"><b><?php echo $boxingW;?></b></td>
				<td colspan="1"><b><?php echo $dancingW1;?></b></td>
				<td colspan="1"><b><?php echo $swimmingW;?></b></td>
				<td colspan="1"><b><?php echo $dancingW2;?></b></td>
			</tr>
			<tr>
				<td>Thursday</td>
				<td colspan="1"><b><?php echo $dancingTH;?></b></td>
				<td colspan="1"><b><?php echo $yogaTH;?></b></td>
				<td colspan="1"><b><?php echo $boxingTH;?></b></td>
				<td colspan="1"><b><?php echo $karateTH;?></b></td>
				
			</tr>
			<tr>
				<td>Friday</td>
				<td colspan="1"><b><?php echo $boxingF;?></b></td>
				<td colspan="1"><b><?php echo $yogaF;?></b></td>
				<td colspan="1"><b><?php echo $karateF;?></b></td>
				<td colspan="1"><b><?php echo $swimmingF;?></b></td>
			</tr>
		

	</body>
</html>