#include <stdio.h>

void portScanForLoop();
void portScanWhileLoop();

int main()
{
    int choice;
    do
    {
        printf("\n==============================================\n");
        printf("   Cybersecurity Nested Loops Demonstration\n");
        printf("==============================================\n");
        printf("1. Simulated Network Scan (FOR Loops)\n");
        printf("2. Simulated Network Scan (WHILE Loops)\n");
        printf("3. Exit\n");
        printf("----------------------------------------------\n");
        printf("Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            portScanForLoop();
            break;
        case 2:
            portScanWhileLoop();
            break;
        case 3:
            printf("\nExiting...\n");
            break;
        default:
            printf("\nInvalid selection.\n");
        }
    } while (choice != 3);
    return 0;
}

void portScanForLoop()
{
    int host, port;
    printf("\n==============================================\n");
    printf("FOR Loop Demonstration\n");
    printf("Simulated Network Port Scanner\n");
    printf("==============================================\n");
    for (host = 1; host <= 3; host++)
    {
        printf("\nScanning Host: 192.168.1.%d\n", host);
        for (port = 20; port <= 25; port++)
        {
            printf("   Checking Port %d ... ", port);

            if (port == 22 || port == 25)
                printf("OPEN\n");
            else
                printf("closed\n");
        }
    }
}
void portScanWhileLoop()
{
    int host = 1;
    int port;
    printf("\n==============================================\n");
    printf("WHILE Loop Demonstration\n");
    printf("Simulated Network Port Scanner\n");
    printf("==============================================\n");

    while (host <= 3)
    {
        printf("\nScanning Host: 192.168.1.%d\n", host);
        port = 20;
        while (port <= 25)
        {
            printf("   Checking Port %d ... ", port);
            if (port == 22 || port == 25)
                printf("OPEN\n");
            else
                printf("closed\n");
            port++;
        }
        host++;
    }
}