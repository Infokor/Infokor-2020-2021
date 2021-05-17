let noClicks = 0;

function onButtonClick() {
    noClicks++;
    const para = document.getElementById("noClicksPara");
    para.innerText = noClicks;
    if (noClicks % 2 == 0) {
        para.hidden = true;
    } else {
        para.hidden = false;
    }
    // window.alert("Nr of clicks so far: " + noClicks);
}