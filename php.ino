<?php
    

// Connect to MySQL
    
include("dbconnect.php");
    

// Prepare the SQL statement
    
mysql_query  ("INSERT INTO energie.kWh_meter (Aantal_kWh ,Pulsen_minuut, Watt) VALUES ('".$_GET["pulseTime"]."', '".$_GET["Wh"]."', '".$_GET["curWatts"]."')");    
    


?>
