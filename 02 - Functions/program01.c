#include <stdio.h>

// Function declaration
// If the function definition is under the main function, the function should be declared before the main func;
int sumNumbers(int numA, int numB);

// If the function is definition is above the main function, there's no need to declare the function;
void printUsername(char username[])
{
    printf("The username is: %s\n", username);
}

int main()
{
    int firstNumber = 10;
    int secondNumber = 22;
    char username[] = "Matheus";

    printf("The sum of the numbers %i and %i is: %i\n", firstNumber, secondNumber, sumNumbers(firstNumber, secondNumber));
    printUsername(username);

    return 0;
}

int sumNumbers(int numA, int numB)
{
    return numA + numB;
}