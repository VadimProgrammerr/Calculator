#include <stdio.h>
int main() {
    char operation;

    printf("Vvedite operatsiu (+, -, *, /): ");
    scanf(" %c", &operation);

    switch(operation) {
        case '+':
            printf("V razrabotke");
            break;
        case '-':
            printf("V razrabotke");
            break;
        case '*':
            printf("V razrabotke");
            break;
        case '/':
            printf("V razrabotke");
            break;
        default:
            printf("Nepravilnaya operatsia");
    }

    return 0;
}
