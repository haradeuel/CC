Algoritmo "semnome"
// Disciplina   : [Linguagem e Lógica de Programação]
// Professor   : Antonio Carlos Nicolodi 
// Descrição   : Aqui você descreve o que o programa faz! (função)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 28/02/2019
Var
// Seção de Declarações das variáveis 
time,prest,taxa,valor:real

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc... 
leia(valor,taxa,time)
prest <-valor + (valor * (taxa / 100) * time)
escreva("VALOR DE PRESTAÇÃO:",prest)

Fimalgoritmo