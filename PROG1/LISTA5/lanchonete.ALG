Algoritmo "semnome"
//  
//  
// Descri��o   : Aqui voc� descreve o que o programa faz! (fun��o)
// Autor(a)    : Nome do(a) aluno(a)
// Data atual  : 24/03/2019
Var
// Se��o de Declara��es das vari�veis 
cod,qtd,opc:inteiro
total:real


Inicio
// Se��o de Comandos, procedimento, fun��es, operadores, etc... 
rrepita
  escreva("ESCOLHA UMA OP��O, SENDO 1 PARA 'ADD' 2 PARA 'CLOSE':")
  leia(opc)
 se (opc=1) entao
      escreva("DIGITE COD :")
      leia(cod)
      escreva("DIGITE QUANTIDADE:")
      leia(qtd)


     escolha cod
      caso 101
       total<-total+(qtd*5)
      caso 102
        total<total+(qtd*6)
      caso 103
        total<-total+(qtd*8.50)
      caso 104
        total<-total+(qtd*6.00)
     fimescolha
     
     escolha cod
       caso 200
         total<-total+(qtd*2)
       caso 201
         total<-total+(qtd*7)
       caso 203
         total<-total+(qtd*2.50)
       caso 204
         total<-total+(qtd*3.50)
      fimescolha
      
     escolha cod
        caso 300
          total<-total+total(qtd*3)
        caso 301
          total<-total+total(qtd*3.50)
     fimescolha
     
     escolha cod
       caso 400
         total<-total+(qtd*11)
       caso 401
         total<-total+ (qtd*10)
        caso 403
          total<-total+(qtd*7.50)
     fimescolha
     
   senao
     se(opc<>2)entao
       escreval("COD INV�LIDO")

 fimse
fimse
ate(opc=2)
escreva("TOTAL A PAGAR ",total)
Fimalgoritmo