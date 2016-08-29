#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top=-1;
int operatorstack[100];
int stackempty()
{
  printf("warning :stackempty\nrequested operation cannot be preformed\n");
  return -100000;//assumming the results are never of this order could be changed according our will;
}
void stackfull()
{
  fprintf(stderr,"error no further use of stack is possible\n");
  exit(EXIT_FAILURE);
}
typedef enum{lparen,rparen,plus,minus,times,divide,mod,eos,operand} precedence;
int  pop()
{
  if(top==-1)
  stackempty();
  return operatorstack[top--];
}
void push(int result)
{
operatorstack[++top]=result;
}

precedence getoken(char symbol,int n,char *ragh )
{
  symbol=ragh[n++];
  switch (symbol) {
    case '(': return lparen;
    case ')': return rparen;
    case '+': return plus;
    case '-': return minus;
    case '/': return divide;
    case '*': return times;
    case '%': return mod;
    case ' ': return eos;
    default :return operand;

  }
}
int eval(char *ragh)
{
  top=-1;
  precedence token;
  char symbol;
  int n=0,op1,op2;
  token=getoken(symbol,n,ragh);
  while(token!=eos)
  {
    if(token==operand)
    push(symbol-'0');
    else
    {
      op2=pop();
      op1=pop();
      switch(token)
      {
        case plus:
        push(op2+op1);
        case minus:
        push(op2-op1);
        case divide:
        push(op2/op1);
        case mod:
        push(op2%op1);
      }
    }
    getoken(symbol,n,ragh);
  }
  return pop();
}
int main()
{
  char ragh[100];
  printf("enter the postfix string which is to be evaluated\n ");
  scanf("%s",&ragh[0]);
  printf("\nentered string is\n%s",&ragh[0]);
  int result=eval(ragh);
}
