#include <stdio.h>

int main(){

    float number1, number2, result;
    char operator;


    printf("\nEnter The First Digit ");
    scanf("%f",&number1);
    
    printf("\nEnter Operator ");
    scanf(" %c",&operator);

    printf("\nEnter The Second Digit ");
    scanf("%f",&number2);

    switch(operator)
    {
        case '+':
        printf("\nResult = %2f\n",number1 + number2);
        break;
         case '-':
        printf("\nResult = %2f\n",number1 - number2);
        break;
         case '*':
        printf("\nResult = %2f\n",number1 * number2);
        break;
         case '/':
        printf("\nResult = %2f\n",number1 / number2);
        break;
        default:
        printf("\nInvalid Input");
        

    }

    return 0;
}