<?php
    include_once("polaczenie.php");
    $idz = isset($_GET['idz'])?$_GET['idz']:header(header: "Location:index.php");
    
    //Test kontrolny czy dostaje po "gecie": -> echo("IDZ: {$_GET['idz']} $idz");
    $zapytanie_usun = $polaczenie->query(query: "delete from zakupy where idz=$idz");
    if($zapytanie_usun){    
    echo("Usunieto rekord o IDZ = $idz");
    }

    echo("<br><a href='index.php'>Powrot do strony glownej</a>");
    $polaczenie->close();
?>
