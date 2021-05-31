function calculateSum() {
    let a = parseInt(document.getElementById("aNumberInput").value, 10);
    let b = document.getElementById("bNumberInput").valueAsNumber;
    document.getElementById("sumInput").value = a + b;
}