#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<string.h>
int top=-1,i,l,pos=-1;
char infix[100],postfix[100],symbol,stack[100],item;

int prec(char c)
{
    int r=0;
    if(c=='+' || c=='-')
    {
        r=1;
    }
    if(c=='*' || c=='/')
    {
        r=2;
    }
    if(c=='^')
    {
        r=3;
    }
    return 0;
}

void push (char c)
{
    if (top==99)
    {
        printf("\n overflow");
    }
    else
    {
        stack[++top]=c;
    }
}

char pop()
{
    char r;
    if(top==-1)
    {
        printf("\n underflow");
    }
    else
    {
        r=stack[top--];
    }
    return r;
}

void infix2postfix()
{
    push('(');
    l=strlen(infix);
    infix[l]=')';
    for(i=0;i<strlen(infix);i++)
    {
        symbol=infix[i];
        switch(symbol)
        {
            case '(':
            {
                push(symbol);
                break;
            }
            case '^':
            case '*':
            case '/':
            case '+':
            case '-':
        }
        while (prec(stack[top])>=prec(symbol))
        {
            item=pop();
            postfix[++pos]=item;
        }
        push(symbol);
        break;
    }
    case ')':
    {
        while((item=pop())!='(')
        {
            postfix[++pos]=item;
        }
        break;
    }
    default:
    {
        postfix[++pos]=symbol;
        break;
    }
}

int main()
{
    printf("enter any infix:");
    gets(infix);
    infix2postfix();
    printf("\npostfix for given infix is:");
    puts(postfix);
}
