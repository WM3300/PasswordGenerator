#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
#ifdef _WIN32

#include <windows.h>

#elif __linux__
#include <unistd.h>
#else
#error "OS not supported!"
#endif

int main(int argc, char* argv[])
{
    srand((unsigned)time(NULL));
    //Generates 12 random letters
    char string[13];
    for (char i = 0; i < 12; i++)
    {
        string[i] = rand() % 26 + 65 + rand() % 2 * 32;
    }
    //Generates 6 random symbols
    char symbol[7];
    for (char k = 0; k < 6; k++)
    {
        symbol[k] = rand() % (33-47) + 33;
    }
    //Generates 9 random numbers
    int number = rand();
    //Clears previous lines
    system("clear");
    //Prints generated password
    printf("Your generated password is: ");
    printf("%s%d%s\n", string, number, symbol);
    //Waits 1 second
    sleep(1);
    return 0;
}
