// 1. Javascript tutorial for beginners: 
/*console.log('Hello');
console.log('I like pizza!');

window.alert('This is an alert!');
window.alert("I like pizza!")

document.getElementById("myH1").textContent = 'Hello!';
document.getElementById("myP").textContent = 'I like pizza!';
Hello my friend*/

//2. Variables: 
// 1. Declaration let x;
// 2. assingnment x = 100;

/*let age = 25;
let price = 10.99;
let gpa = 2.1;

console.log(typeof gpa);
console.log(`You are ${age} years old`);
console.log(`the price is $${price}`);
console.log(`Your gpa is: ${gpa}`);
*/
/*
let firstName = "American";
let favoriteCountry = "USA";

console.log(typeof firstName);
console.log(`Your name is ${firstName}`);
console.log(`You like ${favoriteCountry}`);
*/
/*
let online = false;
let forsale = true;
let isStudent = true;

console.log(`I'm is online: ${online}`);
console.log(`Is this car for sale: ${forsale}`);
console.log(`Enrolled: ${isStudent}`);*/

/*let fullName = "American man";
let age = 20;
let student = true;

document.getElementById("p1").textContent = fullName;
document.getElementById("p2").textContent = age;
document.getElementById("p3").textContent = student;*/

/*
let fullName = "American man";
let age = 20;
let student = true;

document.getElementById("p1").textContent = `Your name is ${fullName}`;
document.getElementById("p2").textContent = `You are ${age} years old`;
document.getElementById("p3").textContent = `Enrolled: ${student}`;
*/

//3. Arithmetic operators: 
/*
//let students = 31;
//students = students + 1;
//students = students - 1;
//students = students * 2;
//students = students / 2;
//students = students ** 2;
//students = students % 3;

//students += 1;
//students -= 1;
//students *= 2;
//students /= 2;
//students **= 2;
//students %= 2;
//++students;

//console.log(students);

//let result = 1 + 2 * 3 + 4 ** 2;
let result = 12 % 5 + 8 / 2;

console.log(result);
*/


// 4. Accept user input: 
/*
let username = username = window.prompt("What's your username?");
console.log(username);
*/
/*
let username;

document.getElementById("mySubmit").onclick = function(){
    username = document.getElementById("myText").value;
    //console.log(username);
    document.getElementById("myH1").textContent = `Hello ${username}`
}
*/

// 5. Type conversion: 
/*
let x = "pizza";
let y = "pizza";
let z = "pizza";
//let z = "";


x = Number(x);
y = String(y);
z = Boolean(z);

console.log(x, typeof x);
console.log(y, typeof y);
console.log(z, typeof z);
*/

//6. Constants
/*
const pi = 3.14159;
// const pi = 3.14159;
let radius;
let circumference;
//pi = 3.14159;
//radius = window.prompt("Enter the radius of a circle"); 
//radius = Number(radius);

//circumference = 2 * pi * radius;
//console.log(circumference);
document.getElementById("mySubmit").onclick = function(){
    radius = document.getElementById("myText").value;
    radius = Number(radius);
    circumference = 2 * pi * radius;
    document.getElementById("myH3").textContent = circumference + " cm"; 
}
*/

// 7. Countrer program
/*
const decreaseBtn = document.getElementById("decreaseBtn");
const resetBtn = document.getElementById("resetBtn");
const increasebtn = document.getElementById("increaseBtn");
const countLabel = document.getElementById("countLabel");
let count = 0;

increasebtn.onclick = function(){
    count++;
    countLabel.textContent = count;
}
decreaseBtn.onclick = function(){
    count--;
    countLabel.textContent = count;
}
resetBtn.onclick = function(){
    count = 0;
    countLabel.textContent = count;
}
*/

// 8. Math object
/*
let x = 3;
let y = 2;
let z = 1;

//z = Math.round(x);
//z = Math.floor(x);
//z = Math.ceil(x);
//z = Math.trunc(x);
//z = Math.pow(x, y);
//z = Math.sqrt(x);
//z = Math.log(x);
//z = Math.sin(x);
//z = Math.cos(x);
//z = Math.tan(x);
//z = Math.abs(x);
//z = Math.sign(x);
//let max = Math.max(x, y, z);
let min = Math.min(x, y, z);

console.log(min);
*/
