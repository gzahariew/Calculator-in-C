#include <stdio.h>

int main() {
    
    char operator;
    double num1;
    double num2;
    double result;


    printf("\nChoose an operator(+ - / *)\n");
    scanf("%c", &operator);

    printf("\nChoose a first number\n ");
    scanf("%lf", &num1);

    printf("\nChoose a second number\n ");
    scanf("%lf", &num2);

    switch (operator)
    {
    case '+' :
        result = num1 + num2;
        printf("\nresult: %lf\n", result);
        break;
    case '-' :
        result = num1 - num2;
        printf("\nresult: %lf\n", result);
        break;
    case '*' :
        result = num1 * num2;
        printf("\nresult: %lf\n", result);
        break;
    case '/' :
        result = num1 / num2;
        printf("\nresult: %0.01lf\n", result);
        break;                
    
    default:
       printf("\nThis is not a valid operator\n");
       break;
    }



    return 0;
}