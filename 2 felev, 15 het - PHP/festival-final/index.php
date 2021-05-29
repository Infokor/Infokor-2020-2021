<!DOCTYPE html>
<html lang="en">
<head>
   <title>Jazz Fesztivál | Főoldal</title>
    <?php require 'templates/head.php'; ?>
 </head>
<body>
  <?php require 'templates/menu.php'; ?>

  <div class="container">

<h1 class="display-4">Jazz Fesztivál Kolozsváron</h1>
<h2>A zene összehoz bennünket!</h2>
<p>Találkozzunk <i>augusztus 10-én</i>, a <b>Sétatéren!</b></p>

<!-- https://getbootstrap.com/docs/4.0/components/buttons/ -->
<button class="btn btn-info" data-toggle="modal" data-target="#exampleModal" >Press Me!</button>

</div>

<!-- https://getbootstrap.com/docs/4.0/components/list-group/ -->
<div class="jumbotron text-center">
      <h3>Amire számíthatsz</h3>
      <ul class="list-group">
          <li class="list-group-item list-group-item-info">Minőségi zene</li>
          <li class="list-group-item list-group-item-info">Hajnalig tartó bulik</li>
          <li class="list-group-item list-group-item-info">Vidám társaság</li>
      </ul>
</div>



<div class="container align-items-center">
    <h3>Galéria</h3>
    <div class="row">
      <div class="col-md-8">
    <!-- https://getbootstrap.com/docs/4.0/components/carousel/ -->
      <div id="carouselExampleIndicators" class="carousel slide" data-ride="carousel">
          <ol class="carousel-indicators">
            <li data-target="#carouselExampleIndicators" data-slide-to="0" class="active"></li>
            <li data-target="#carouselExampleIndicators" data-slide-to="1"></li>
            <!-- <li data-target="#carouselExampleIndicators" data-slide-to="2"></li> -->
          </ol>
          <div class="carousel-inner">
            <div class="carousel-item active">
              <img class="d-block w-100" src="img/park.jpg" alt="Emberek a parkban">
              <!-- <img class="d-block w-100" src="..." alt="First slide"> -->
              <div class="carousel-caption d-none d-md-block">
                <h5>Emberek a parkban</h5>
              </div>
            </div>
            <div class="carousel-item">
              <!-- <img class="d-block w-100" src="..." alt="Second slide"> -->
              <img class="d-block w-100" src="http://jazzacrosseurope.com/assets/images/b/Foto_jazz%20in%20the%20park-497aa35b.jpg" alt="Bulizó emberek egy fesztiválon">
              <div class="carousel-caption d-none d-md-block">
                <h5>Bulizó emberek egy fesztiválon</h5>
              </div>
            </div>
            <!-- <div class="carousel-item">
              <img class="d-block w-100" src="..." alt="Third slide">
            </div> -->
          </div>
          <a class="carousel-control-prev" href="#carouselExampleIndicators" role="button" data-slide="prev">
            <span class="carousel-control-prev-icon" aria-hidden="true"></span>
            <span class="sr-only">Previous</span>
          </a>
          <a class="carousel-control-next" href="#carouselExampleIndicators" role="button" data-slide="next">
            <span class="carousel-control-next-icon" aria-hidden="true"></span>
            <span class="sr-only">Next</span>
          </a>
        </div>
      </div>
    </div> 
</div>


<div class="container">
    <h3>A jegyvásárlás lépései</h3>
    <ol>
        <li>Regisztrálj</li>
        <li>Navigálj a jegyvásárlás oldalra</li>
        <li>Válaszd ki a neked tetsző jegyet</li>
        <li>Válaszd ki, hány jegyet szeretnél</li>
        <li>Kattints a "Checkout" gombra</li>
        <li>Fizesd ki az összeget</li>
        <li>Emailben megkapod a jegyet, egy egyedi QR-kóddal, amit majd fel kell mutatnod belépéskor</li>
        <li>Kész is!</li>
    </ol>
</div>

<div class="container">
    <h3>Kapcsolat</h3>
    <a href="https://www.facebook.com/bori.fazakas.9">Itt</a> felveheted a szervezőkkel a kapcsolatot.
</div>


<!-- https://getbootstrap.com/docs/4.0/components/modal/ -->
<div class="modal fade" id="exampleModal" tabindex="-1" role="dialog" aria-labelledby="exampleModalLabel" aria-hidden="true">
  <div class="modal-dialog" role="document">
    <div class="modal-content">
      <div class="modal-header">
        <h5 class="modal-title" id="exampleModalLabel">Szia</h5>
        <button type="button" class="close" data-dismiss="modal" aria-label="Close">
          <span aria-hidden="true">&times;</span>
        </button>
      </div>
      <div class="modal-body">
        Szia, jövendőbeli fesztiválozó!
      </div>
      <div class="modal-footer">
        <button type="button" class="btn btn-primary" data-dismiss="modal">Szia</button>
      </div>
    </div>
  </div>
</div>
</body>
</html>