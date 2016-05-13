<!doctype html>
<html land="pl">
	<head>
		<meta charset="utf-8"/>
		<title>Lista osob chetnych na impreze</title>
	</head>
	
	<body>
		<div style="float:left; vertical-align:top; background-color:red">
			
			<h3>Chetni:</h3>
			
			<?php
			if(isset($_SESSION['indeks']))
				for($i=1; $i<=$_SESSION['indeks']; $i++)
				{
					print('$i');
					print('. ');
					print('$_SESSION');
					print('<br>');
				}
			?>
			
		</div>
		
		<div style="float:right; vertical-align:top; background-color:yellow">
			
			<h3>Zapisz sie!</h3>
			
			<form action="zapis.php">
				<input type="text" name="nowy">
				<input type="hidden" name="ile" value="<?php if(isset($_SESSION['indeks'])) echo $_SESSION['indeks']; else echo '0';?>">
				<input type="submit" value="ZAPISZ">
			</form>
			
		</div>
		
	</body>
</html>