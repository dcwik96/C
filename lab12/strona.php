<?php

	if(!isset($_SESSION['zalogowany']) OR $_SESSION['zalogowany']==false)
		header('Location: panel_logowania.php');

?>



<!DOCTYPE HTML>

<html lang = "pl">

  <head>
    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
    <title>Dynamiczne zakladki</title>
    <link rel="stylesheet" href="style_zakladki.css" type="text/css" />
  </head>

  <body>

    <header>
      <p>Dynamiczne zakladki</p>    
    </header>

    <nav>

<?php

 

for($i = 0; $i <= 2; $i++)
    ${"s".$i} = "";

if(isset($_GET['str']))
  ${"s".$_GET['str']} = "class=\"wybrany\"";
else
  $s0 = "class=\"wybrany\"";


  print("<a href=\"zakladki.php?str=0\" $s0>Strona glowna</a>");
  print("<a href=\"zakladki.php?str=1\" $s1>Podstrona</a>");
  print("<a href=\"zakladki.php?str=2\" $s2>Kontakt</a>"); 

?>

    </nav>

    <section>
     <article>

<?php
    if(isset($_GET['str'])) $str = $_GET['str'];
    else $str = 0;

    switch($str){
      case 0:
        printf("<p>To jest strona glowna</p>");      
        break;
      case 1:
        printf("<p>To jest przykladowa podstrona</p>");
        break;
      case 2:
        printf("<p>Tutaj znajduja sie dane kontaktowe</p>");
        break;
    }

?>
     </article>
   </section>
	 <form action="" method="post">
	 <input type="submit" name="logout" value="LOGOUT">
	 </form>
			<?php
				
				if(isset($_POST['logout']))
				{
					session_unset();
					header('Location: panel_logowania.php');
				}
	
			?>

   <footer><p>Magdalena Godlewska (<a href="mailto:maggod@inf.ug.edu.pl">maggod@inf.ug.edu.pl</a>)</p></footer>

 </body>

</html>