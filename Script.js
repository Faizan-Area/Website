var menuIcon = document.querySelector(".menu-icon");
var sidebar = document.querySelector(".small-sidebar");
var large = document.querySelector(".container");
var input = document.querySelector(".input");
var displaycomment = document.querySelector(".button");

menuIcon.onclick = function() {
    sidebar.classList.toggle("sidebar");
    large.classList.toggle("large-container");
}
input.onclick = function() {
    displaycomment.classList.toggle("button-show");
}