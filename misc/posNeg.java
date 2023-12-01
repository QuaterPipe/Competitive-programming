public boolean posNeg(int a, int b, boolean negative)
{
    if (!negative)
    {
        return a * b < 0;
    }
    else
    {
        return (a < 0 && b < 0);
    }
}