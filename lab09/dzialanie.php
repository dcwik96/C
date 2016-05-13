<!doctype html>
<html>
	<head>
		<title>Kalkulator</title>
	</head>
	
	<body>
		Wynik:
		<?php
			$arg1=$_REQUEST['arg1'];
			$arg2=$_REQUEST['arg2'];
			$znak=$_REQUEST['op'];
			
			if($znak=="+")
				$wynik=$arg1+$arg2;
			elseif ($znak == "-") 
				$wynik = $arg1 - $arg2; 
			elseif($znak == "*") 
				$wynik = $arg1 * $arg2; 
			elseif($znak == "/") 
				$wynik = $arg1 / $arg2;
			
			print("$arg1 $znak $arg2 = $wynik");
		?>
	</body>
</html>