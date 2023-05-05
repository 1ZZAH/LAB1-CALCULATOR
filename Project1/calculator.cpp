#include "calculator.h"


calculator::calculator(int n1, int n2)
{
    a = n1;
    b = n2;
}


int calculator::addition()
{
    return a + b;
}


int calculator::subtraction()
{
    return a - b;
}

 int calculator::division()
{
    return a / b;
}


int calculator::multiple()
{
    return a * b;
}
