<?php
	//Odczytywanie z pliku ilosci klikniec
	function showclick()
	{
		
		$file=@fopen("zliczanie.txt","r+");
		fscanf($file,"%d",$count);
		rewind($file);
		fclose($file);
		echo $count;
		
	}
	
	//Dodawanie kolejnego klikniecia, zapisanie do pliku
	function addclick()
	{
		
		$file=@fopen("zliczanie.txt","r+");
		fscanf($file,"%d",$count);
		$count++;
		rewind($file);
		fputs($file,$count);
		fclose($file);
		
	}

?>

<!DOCTYPE HTML>
<html lang="pl">
	<head>
		<meta charset="utf-8" />
		<meta http-equiv="X-UA-Compatible" content="IE=edge,chrome=1" />
		<title>Klikanie</title>
	</head>

	<body>
		
		<form action="" method="post">
			<input type="submit" value="Kliknij albo wpier***" name="hit">
			
			<?php
				$plik = 'zliczanie.txt';
				//Sprawdzenie czy juz klikniete dzisiaj
				if (isset($_POST["hit"]) AND isset($_COOKIE["cookie"]))
				{
					showclick();
					echo "\r\nJuz dzisiaj kliknales!";
				}
				//Ustawienie ciasteczka
				else (isset($_POST["hit"]))
				{
					setcookie("cookie", $_POST["hit"], time() + 86400, "/");   
					addclick();
					showclick();
				}
			?>
		</form>


	</body>
</html>










