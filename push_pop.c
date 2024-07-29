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
