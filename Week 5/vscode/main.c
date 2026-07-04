#include <stdio.h>

void nestedForDemo();
void nestedWhileDemo();

int main()
{
    int choice;

    do
    {
        printf("\n=========================================\n");
        printf("    Nested Loops Demonstration in C\n");
        printf("=========================================\n");
        printf("1. Nested FOR Loops\n");
        printf("2. Nested WHILE Loops\n");
        printf("3. Exit\n");
        printf("-----------------------------------------\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            nestedForDemo();
            break;

        case 2:
            nestedWhileDemo();
            break;

        case 3:
            printf("\nProgram terminated.\n");
            break;

        default:
            printf("\nInvalid choice.\n");
        }

    } while (choice != 3);

    return 0;
}

//--------------------------------------------------

void nestedForDemo()
{
    int row, col;

    printf("\n====================================\n");
    printf("Nested FOR Loop Example 1\n");
    printf("Multiplication Table (5 x 5)\n");
    printf("====================================\n\n");

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= 5; col++)
        {
            printf("%4d", row * col);
        }
        printf("\n");
    }

    printf("\n====================================\n");
    printf("Nested FOR Loop Example 2\n");
    printf("Triangle Pattern\n");
    printf("====================================\n\n");

    for (row = 1; row <= 5; row++)
    {
        for (col = 1; col <= row; col++)
        {
            printf("* ");
        }
        printf("\n");
    }
}

//--------------------------------------------------

void nestedWhileDemo()
{
    int row, col;

    printf("\n====================================\n");
    printf("Nested WHILE Loop Example 1\n");
    printf("Multiplication Table (5 x 5)\n");
    printf("====================================\n\n");

    row = 1;

    while (row <= 5)
    {
        col = 1;

        while (col <= 5)
        {
            printf("%4d", row * col);
            col++;
        }

        printf("\n");
        row++;
    }

    printf("\n====================================\n");
    printf("Nested WHILE Loop Example 2\n");
    printf("Number Pattern\n");
    printf("====================================\n\n");

    row = 1;

    while (row <= 5)
    {
        col = 1;

        while (col <= row)
        {
            printf("%d ", col);
            col++;
        }

        printf("\n");
        row++;
    }
}