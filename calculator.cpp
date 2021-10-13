#include "calculator.h"
/*
comment
Tribunskaya Karolina
IV-93
AK Lab1
14.10.2021
*/
int Calculator::Add (double a, double b)
{
<<<<<<< HEAD
    return a + b;
=======
	return a + b + 0.5;
>>>>>>> 4ad40a3 (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
