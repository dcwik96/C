<?php
	

	session_start();
	
	if(isset($_POST['jeszczeraz']))
		session_unset();
	
	if(!isset($_SESSION['losowa']))
		$_SESSION['losowa']=rand(1,10);
	
	if(!isset($_SESSION['ilosc']))
		$_SESSION['ilosc'] = 0;
	
	
?>

<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title> Zgadnij liczbe </title>
	<meta name="description" content="Only the luckiest win!" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
	
</head>

<body>

<h1>
Zgadnij liczbe od 1 do 10 </br>
Gracz <?php print($_SESSION['ilosc'] + 1) ?>
</h1>
	<form action="gra.php" method="post">
		<table>
			<tr>
			<td>
				<input type="text" name="<?php echo "odpowiedz" . $_SESSION['ilosc']; ?>"> 
				<input type="submit" name="zatwierdz" value="ZGADNIJ!">
			<td>
			</tr>
		</table>



</body>
</html>