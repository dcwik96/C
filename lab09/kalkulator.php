<!doctype html>
<html land="pl">
	<head>
		<title>Kalkulator</title>
		<meta charset="utf-8">
	</head>
	
	<body>
		<form action="dzialanie.php">
		<table>
			<tr>
				<th style="background-color:yellow">
					pierwszy arg:<br>
					<input type="text" name="arg1" size="8">
				</th>
				<td style="background-color: yellow;">&nbsp;&nbsp;</td>
				<td style="background-color: yellow;">
					<input name="op" type="radio" value="+"> <b>+</b><br>
					<input name="op" type="radio" value="-"> <b>-</b><br>
					<input name="op" type="radio" value="*"> <b>*</b><br>
					<input name="op" type="radio" value="/"> <b>/</b>
				</td>
				<th style="background-color:yellow">
					drugi arg:<br>
					<input name="arg2" type="text" size="8">
				</th>
				<th style="background-color:yellow">
					<input type="submit" value="==">
				</th>
			</tr>
		</table>
		</form>
	</body>
</html>