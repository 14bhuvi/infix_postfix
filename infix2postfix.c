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
