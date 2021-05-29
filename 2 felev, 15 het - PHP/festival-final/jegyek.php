<?php

$error = null;

if(isset($_GET['error']) && $_GET['error'] != '') {
    $error = $_GET['error'];
    // to avoid injections of such: http://localhost/festival/jegyek.php?error=<script>alert('meghackeltelek');</script>
    $error = filter_var($error, FILTER_SANITIZE_STRING);
}

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <title>Jazz Fesztivál | Jegyek</title>
    <?php require 'templates/head.php' ?>
</head>
<body>
    <?php require 'templates/menu.php' ?>

    <div class="container-fluid">
        <h1>Jegyvásárlás</h1>
        <hr>

        <div class="container">
            <form action="buy.php" method="POST">
                <?php if($error): ?>
                    <div class="alert alert-danger">
                     <strong><?= $error ?></strong>
                    </div>
                <?php endif?>
                <div class="form-group">
                    <label for="firstName">Keresztnév</label>
                    <input type="text" class="form-control" id="firstName" placeholder="Keresztnév" required name="firstName">
                </div>
                <div class="form-group">
                    <label for="lastName">Vezetéknév</label>
                    <input type="text" class="form-control" id="lastName" placeholder="Vezetéknév" required name="lastName">
                </div>
                <div class="form-group">
                    <label for="no_tickets">Jegyek száma</label>
                    <input type="number" class="form-control" id="no_tickets" value="1" min="1" max="10" required name="no_tickets">
                </div>
                <button type="submit" class="btn btn-primary">Küldés</button>
            </form>
        </div>
    </div>    
</body>
</html>