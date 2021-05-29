<?php 
    require_once 'db/PurchaseDao.php';

    $dao = new PurchaseDao();

    function get($name, $errorMessage) {
        if(isset($_POST[$name]) && $_POST[$name] != '') {
            return $_POST[$name];
        } else {
            header("Location: jegyek.php".'?error='.$errorMessage, TRUE, 302);
            die();
        }
    }

    // print_r($_POST);

    $purchase = new Purchase();
    $purchase->customerFirstName = get('firstName', 'Hiányos keresztnév');
    $purchase->customerLastName = get('lastName', 'Hiányos vezetéknév');
    $purchase->noTickets = get('no_tickets', 'Add meg a vásárolandó jegyek számát');
    $purchase->time = time();

    $purchase = $dao->create($purchase);

    // print_r($purchase);
    header("Location: sikeres_vasarlas.php", TRUE, 302);
?>