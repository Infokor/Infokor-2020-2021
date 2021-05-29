# Jazz Fesztivál - PHP és Adatbázis

Két mappa található: 
- a `festival-starter` mappa tartalmazza a kiinduló projektet
- a `festival-final` mappa tartalmazza a végleges projektet

A `festival.sql` file a `festival` adatbázis adattábláit létrehozó script.

## Tennivalók

**phpMyAdmin**
- Hozd létre a `festival` adatbázist
- Futtasd a `festival.sql` script-et hogy létrehozzad az adattáblákat

**model/Purchase.php**
- define model

**jegyek.php**
- set input "name" attributes
- set form method
- set form action

**buy.php**
- verify and get POST parameters
    - in case of error redirect to `jegyek.php` with the error parameter set
- instantiate model
- set model attributes
- instantiate PurchaseDao
- persist model with DAO
- redirect to "sikeres_vasarlas.php"

**jegyek.php** megint
- verify, sanitize and save "error" query parameter (GET)
- show error message if exists

