#ifndef Functions_h
#define Functions_h
int max(int x, int y)
{
    if (x > y){
        return x;
    }
    else{
        return y;
    }
}
int even(int number)
{
    int test;
    test = number % 2;
    if (test == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}
int sum(int number)
{
    int overall = 0;
    if (number > 0)
    {
        return false;
    }
    else{
        for(int x= 0; x < number + 1 ;x++)
        {
            overall += x;
        }
        return overall;
        }
    }
    

#endif