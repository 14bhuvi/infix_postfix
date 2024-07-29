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
