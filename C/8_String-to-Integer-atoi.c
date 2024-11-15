#include <limits.h>

int isDigit(char l)
{
    if (l >= '0' && l <= '9')
        return (1);
    return (0);
}

/*
 * Returns -1 if is more than INT_MIN
 * 1 if more INT_MAX & 0 if is OK
 */
int isSafeOp(int sum, int next, int sign)
{
    sum = sum * sign;
    if (sum > 0)
    {
        if (sum > INT_MAX / 10 || sum * 10 >= INT_MAX - next)
            return 1;
    }
    else if (sum < 0)
    {
        if (sum < INT_MIN / 10 || sum * 10 <= INT_MIN + next)
            return -1;
    }
    return 0;
}

int myAtoi(char* s) 
{
    int n;
    int sign;
    int digit;

    sign = 1;
    n = 0;
    while (*s == ' ')
        s++;
    if (*s == '-')
    {
        sign = - sign;
        s++;
    }
    else if (*s == '+')
        s++;
    while (isDigit(*s) == 1)
    {
        digit = *s - '0';
        if (isSafeOp(n, digit, sign) == 1)
            return (INT_MAX);
        else if (isSafeOp(n, digit, sign) == -1)
            return (INT_MIN);
        n = n * 10 + digit;
        s++;
    }
    return (n * sign);
}