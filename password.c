#include <stdio.h>

int main()
{
    int password = 1234;   // fixed password
    int input;
    int attempts = 3;

    while (attempts > 0)
    {
        printf("Enter password: ");
        scanf("%d", &input);

        if (input == password)
        {
            printf("✅ Access Granted! Login Successful.\n");
            break;
        }
        else
        {
            attempts--;
            printf("❌ Wrong password. Attempts left: %d\n", attempts);
        }
    }

    if (attempts == 0)
    {
        printf("🔒 System Locked! Too many wrong attempts.\n");
    }

    return 0;
}