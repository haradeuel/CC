Algoritmo "semnome"
// Disciplina   : [Linguagem e L�gica de Programa��o]
// Professor   : Antonio Carlos Nicolodi 
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/02/2019
Var
// Se��o de Declara��es das vari�veis 
time,prest,taxa,valor:real

Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
leia(valor,taxa,time)
prest <-valor + (valor * (taxa / 100) * time)
escreva("VALOR DE PRESTA��O:",prest)

Fimalgoritmo