let colorIndex = 0;

function onSemaphoreChange() {
    colorIndex = (colorIndex + 1) % 3;
    let semaphroeDiv = document.getElementById("semaphoreDiv");
    switch (colorIndex) {
        case 0:
            semaphroeDiv.style.backgroundColor = "red";
            break;
        case 1:
            semaphroeDiv.style.backgroundColor = "yellow";
            break;
        case 2:
            semaphroeDiv.style.backgroundColor = "green";
            break;
    }
}