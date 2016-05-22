<?php
	session_start();
	if(isset($_SESSION['zalogowany']) AND $_SESSION['zalogowany']==true)
		header('Location: strona.php');
?>

<!DOCTYPE HTML>
<html lang="pl">
<head>
	<meta charset="utf-8" />
	<title> Panel logowania </title>
	<meta name="description" content="Zaloguj sie!" />
	<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />


	
</head>



<body>
		<h1> Panel Logowania:</h1>
		<form action="" method="post">
		<table border="1" cellpadding="20" cellspacing="1">
			<tr>
			<td>
				Username <input type="text" size="25" name="login"/> <br> </br>
				Password <input type="password" size="25" name="haslo"/> <br>
				<br><input type="submit" name="login" value="LOGIN">
			</td>
			<tr>
		</table>
				
		</form>
		
	<?php
	
	if(isset($_POST['login']) AND isset($_POST['haslo']))
	{
		$_SESSION['user']=$_POST['login'];
		$_SESSION['pass']=$_POST['haslo'];
		$_SESSION['zalogowany']=false;
		
		if($_SESSION['user']=='admin' AND $_SESSION['pass']=='haslo')
			$_SESSION['zalogowany']=true;
		
		if($_SESSION['zalogowany']==false)
			echo "Niepoprawne dane";
	}
	?>
		
		
</body>
</html>