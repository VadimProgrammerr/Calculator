#include <stdio.h>
#include <funcs.h>
int main() {
    char operation;
    float num1, num2, result;

    printf("Vvedite operatsiu (+, -, *, /): ");
    scanf(" %c", &operation);

    printf("Vvedite dva chisla: ");
    scanf("%f %f", &num1, &num2);

    switch(operation) {
        case '+':
            result=MySum(num1,num2);
            printf("Result %.2f",result);
            break;
        case '-':
            result=MySub(num1,num2);
            printf("Result %.2f",result);
            break;
        case '*':
            result=MyMul(num1,num2);
            printf("Result %.2f",result);
            break;
        case '/':
            if (num2 != 0) {
                result=MyDiv(num1,num2);
                printf("Result %.2f",result);
            } else {
                printf("Error: delenie na 0");
            }
            break;
        default:
            printf("Nepravilnaya operatsia");
    }

    return 0;
}
