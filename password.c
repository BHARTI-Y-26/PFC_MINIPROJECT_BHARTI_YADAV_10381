#include <stdio.h>
//Bharti Yadav
//ERP-10381
//Project title : Password Lock System
//Topic Name : Login attempts
int main()
{
    int password = 1234;   
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
//Output:
//Enter password: 2345
//❌ Wrong password. Attempts left: 2
//Enter password: 5678
//❌ Wrong password. Attempts left: 1
//Enter password: 1234
//✅ Access Granted! Login Successful.
