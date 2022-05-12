var a=prompt("Qual o a da sua equação?")
var b=prompt("Qual o b da sua equação?")
var c=prompt("Qual o c da sua equação?")

var delta=(b*b - 4 * a * c)
var raiz=Math.sqrt(delta)
div=2*a

x1=-b+raiz
x2=-b-raiz

x1r=x1/div
x2r=x2/div

document.write ("O x1 da sua equação é: " , x1r , " e o x2 é " , x2r)