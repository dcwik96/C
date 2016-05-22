<?php
	session_start();
	
	if(isset($_POST['odpowiedz0']) AND $_SESSION['ilosc']<1)
	{
		$_SESSION['odpowiedz0']=$_POST['odpowiedz0'];
		$_SESSION['ilosc'] = $_SESSION['ilosc'] + 1;
		unset ($_POST['odpowiedz']);
		header('Location: zad3.php');
		
		
	}
	
	if(isset($_POST['odpowiedz1']) AND $_SESSION['ilosc'] == 1)
	{
		
		$_SESSION['odpowiedz1']=$_POST['odpowiedz1'];
	
		
		if(isset($_SESSION['odpowiedz0']))
		{
			if($_SESSION['odpowiedz0']>0 AND $_SESSION['odpowiedz0']<11)
			{
				
				
				if($_SESSION['odpowiedz0']==$_SESSION['losowa'] AND $_SESSION['odpowiedz1']>$_SESSION['losowa'])
				{
					echo "GRACZ 1 trafił, niestety gracz 2 podał za dużą liczbę";
					unset($_SESSION['losowa']);
				}
				if($_SESSION['odpowiedz0']==$_SESSION['losowa'] AND $_SESSION['odpowiedz1']<$_SESSION['losowa'])
				{
					echo "GRACZ 1 trafił, niestety gracz 2 podał za małą liczbę";
					unset($_SESSION['losowa']);
				}
				if($_SESSION['odpowiedz0']==$_SESSION['losowa'] AND $_SESSION['odpowiedz1']==$_SESSION['losowa'])
				{
					echo "GRACZ 1 trafił, GRACZ 2 również trafił !!!";
					unset($_SESSION['losowa']);
				}
				
				if($_SESSION['odpowiedz0']>$_SESSION['losowa'] AND $_SESSION['odpowiedz1']==$_SESSION['losowa'])
				{
					echo "GRACZ 2 trafił, niestety gracz 1 podał za dużą liczbę";
					unset($_SESSION['losowa']);
				}
				if($_SESSION['odpowiedz0']<$_SESSION['losowa'] AND $_SESSION['odpowiedz1']==$_SESSION['losowa'])
				{
					echo "GRACZ 2 trafił, niestety gracz 1 podał za małą liczbę";
					unset($_SESSION['losowa']);
				}
				
				if($_SESSION['odpowiedz0']>$_SESSION['losowa'] AND $_SESSION['odpowiedz1']<$_SESSION['losowa'])
				{
					echo "gracz 1 podał za dużą, a gracz 2 podał za małą liczbę";
				}
				if($_SESSION['odpowiedz0']<$_SESSION['losowa'] AND $_SESSION['odpowiedz1']>$_SESSION['losowa'])
				{
					echo "gracz 1 podał za małą, a gracz 2 podał za dużą liczbę";
				}
				
				if($_SESSION['odpowiedz0']>$_SESSION['losowa'] AND $_SESSION['odpowiedz1']>$_SESSION['losowa'])
				{
					echo "gracz 1 podał za dużą, a gracz 2 podał za dużą liczbę";
				}
				if($_SESSION['odpowiedz0']<$_SESSION['losowa'] AND $_SESSION['odpowiedz1']<$_SESSION['losowa'])
				{
					echo "gracz 1 podał za małą, a gracz 2 podał za małą liczbę";
				}
				
				
			}
			else echo "Podałeś liczbę nie z przedziału 1-10 ... ";

		}
		session_unset();
	}
	
?>

	<form action="zad3.php" method="post">
		<table>
			<tr>
			<td>
				<input type="submit" name="jeszczeraz" value="OD NOWA!">
				<input type="submit" name="kolejnarunda" value="KOLEJNA RUNDA!">
			<td>
			</tr>
		</table>
	</form>

	