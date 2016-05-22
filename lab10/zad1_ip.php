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
		fputs($file,$count,$_POST['ip']);
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
				if (isset($_POST["hit"]) AND isset($ip))
				{
					showclick();
					echo "\r\nJuz dzisiaj kliknales!";
				}
				
				elseif (isset($_POST["hit"]))
				{
					$_POST['ip']=$_SERVER['REMOTE_ADDR'];  
					addclick();
					showclick();
				}
			?>
		</form>


	</body>
</html>










