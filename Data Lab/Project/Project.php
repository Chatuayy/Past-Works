<html>
	<head>
		<title>Project</title>
	</head>
	
	<body>
		<?php
		
		?>
		<table style="text-align:center;" border="1">
			<tr>
				<th></th><th>09:00-10:20</th><th>10:40-12:00</th><th>13:00-14:20</th><th>14:20-16:00</th>
			</tr>
			<tr>
				<td>Monday</td>
				<td colspan="1">Boxing</td>
				<td colspan="1"></td>
				<td colspan="1"></td>
				<td colspan="1"></td>
			</tr>
			<tr>
				<td>Tuesday</td>
				<td colspan="1"></td>
				<td colspan="1">Swimming</td>
				<td colspan="1"></td>
				<td colspan="1"></td>
			</tr>
			<tr>
				<td>Wednesday</td>
				<td colspan="1">Boxing</td>
				<td colspan="1"></td>
				<td colspan="1"></td>
				<td colspan="1">Dancing</td>
			</tr>
			<tr>
				<td>Thursday</td>
				<td colspan="1"></td>
				<td colspan="1">Yoga</td>
				<td colspan="1"></td>
				<td colspan="1"></td>
				
			</tr>
			<tr>
				<td>Friday</td>
				<td colspan="1">Boxing</td>
				<td colspan="1"></td>
				<td colspan="1">Karate</td>
				<td colspan="1"></td>
			</tr>
			
			
			
			
			
			<FORM action="Project2.php" method="POST">
			<table style="text-align:center;" border="1">
			<tr>
				<th></th><th>09:00-10:20</th><th>10:40-12:00</th><th>13:00-14:20</th><th>14:20-16:00</th>
			</tr>
			<tr>
				<td>Monday</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="BOXING" name="boxingM">BOXING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="SWIMMING" name="swimmingM">SWIMMING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="KARATE" name="karateM">KARATE</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="YOGA" name="yogaM">YOGA</td>
			</tr>
			<tr>
				<td>Tuesday</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="YOGA" name="yogaT">YOGA</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="SWIMMING" name="swimmingT">SWIMMING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="DANCING" name="dancingT">DANCING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="BOXING" name="boxingT">BOXING</td>
			</tr>
			<tr>
				<td>Wednesday</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="BOXING" name="boxingW">BOXING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="DANCING" name="dancingW1">DANCING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="SWIMMING" name="swimmingW">SWIMMING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="DANCING" name="dancingW2">DANCING</td>
			</tr>
			<tr>
				<td>Thursday</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="DANCING" name="dancingTH">DANCING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="YOGA" name="yogaTH">YOGA</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="BOXING" name="boxingTH">BOXING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="KARATE" name="karateTH">KARATE</td>
				
			</tr>
			<tr>
				<td>Friday</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="BOXING"  name="boxingF">BOXING</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="YOGA" name="yogaF">YOGA</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="KARATE" name="karateF">KARATE</td>
				<td colspan="1"><INPUT TYPE="checkbox" size=30 VALUE="SWIMMING" name="swimmingF">SWIMMING</td>
			</tr>
			
			<br>
			<br>
			<br>
			<br>
			
			
		</table>
		<br>
		<INPUT TYPE="submit" size=30 value="Create Events">
		</form>
	</body>
</html>