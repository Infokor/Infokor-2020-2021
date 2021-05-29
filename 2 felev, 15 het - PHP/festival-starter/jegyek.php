<?php
/* TODO:
- set input "name" attributes
- set form method
- set form action

- verify, sanitize and save "error" query parameter (GET)
- show error message if exists
*/
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
            <form>
                    <div class="alert alert-danger d-none">
                     <strong>error</strong>
                    </div>
                <div class="form-group">
                    <label for="firstName">Keresztnév</label>
                    <input type="text" class="form-control" id="firstName" placeholder="Keresztnév" required>
                </div>
                <div class="form-group">
                    <label for="lastName">Vezetéknév</label>
                    <input type="text" class="form-control" id="lastName" placeholder="Vezetéknév" required>
                </div>
                <div class="form-group">
                    <label for="no_tickets">Jegyek száma</label>
                    <input type="number" class="form-control" id="no_tickets" value="1" min="1" max="10" required>
                </div>
                <button type="submit" class="btn btn-primary">Küldés</button>
            </form>
        </div>
    </div>    
</body>
</html>