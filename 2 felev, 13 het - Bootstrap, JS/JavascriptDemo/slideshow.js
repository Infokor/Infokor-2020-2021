let imgIndex = 0;
const imgPaths = ["img/flower1.jpg", "img/flower2.jpg", "img/flower3.jpg", "img/flower4.jpg", "img/flower5.jpg"];

function slideShowBalra() {
    imgIndex += imgPaths.length;
    imgIndex--;
    imgIndex = imgIndex % imgPaths.length;
    document.getElementById('imgContainer').src = imgPaths[imgIndex];
}

function slideShowJobbra() {
    imgIndex++;
    imgIndex = imgIndex % imgPaths.length;
    document.getElementById('imgContainer').src = imgPaths[imgIndex];
}