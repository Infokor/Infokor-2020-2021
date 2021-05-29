<?php
$menuItems = [['index.php', 'Főoldal'], ['program.php', 'Program'], ['jegyek.php', 'Jegyek'], ['fellépők.php', 'Fellépők']];
$scriptName = basename($_SERVER['SCRIPT_NAME']);
?>

<!-- https://getbootstrap.com/docs/4.0/components/navbar/ -->
<nav class="navbar navbar-expand-lg navbar-dark bg-primary sticky-top">
    <a class="navbar-brand" href="index.php">Jazz Fesztivál</a>
    <button class="navbar-toggler" type="button" data-toggle="collapse" data-target="#navbarSupportedContent" aria-controls="navbarSupportedContent" aria-expanded="false" aria-label="Toggle navigation">
        <span class="navbar-toggler-icon"></span>
    </button>
    
    <div class="collapse navbar-collapse" id="navbarSupportedContent">
        <ul class="navbar-nav mr-auto">
            <?php foreach($menuItems as [$script, $name]) {
                $isActive = $scriptName == $script;
            ?>

            <li class="nav-item <?php if($isActive){echo 'active'; } ?>">
                <a class="nav-link" href="<?= $script ?>"><?= $name ?></a>
            </li>

            <?php } ?>
            </ul>
            <ul class="navbar-nav">
            <li class="nav-item">
                <a class="btn btn-outline-light" href="login.php">Bejelentkezés</a>
            </li>
        </ul>
    </div>
</nav>