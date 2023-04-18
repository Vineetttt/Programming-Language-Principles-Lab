/*Implement a Program to take the string from the user, 
Find the number of occurrences of Mumbai in the string and replace Mumbai with Delhi.*/

var str = prompt("Enter a string: ");
var result = str.replace(/Mumbai/g,"Delhi");
console.log(result)