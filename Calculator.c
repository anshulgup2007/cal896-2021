#include<stdio.h>
#include<conio.h>
main()
{
    system("cls");
    float num1, num2, result;
    char op;
    int i;
    for(i = 0; i++< 100;)
    {
        printf("\n\nEnter the first number: ");
        scanf("%f", &num1);

        printf("\nEnter the operation: ");
        fflush(stdin);
        scanf("%c", &op);

        printf("\nEnter the second number: ");
        scanf("%f", &num2);

        switch(op)
        {
        case '+':
        result = num1 + num2;
        printf("%f", result);
        break;

        case '-':
        result = num1 - num2;
        printf("%f", result);
        break;

        case '*':
        result = num1 + num2;
        printf("%f", result);
        break;

        case '/':
        result = num1 / num2;
        printf("%f", result);
        break;
        }
        getch();
    }

    return 0;
}
