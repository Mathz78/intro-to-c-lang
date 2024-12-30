#include <stdio.h>
#include <stdlib.h>

// int main()
// {
//     printf("Hello world!\n");
//     return 0;
// }


// Even though we're declaring the method return type as char, the compiler doesn't break when returning int;
// That's because of "type promotion" or "type coercion"
// GPT Explanation: The reason your code compiles with no errors is because of implicit type conversion 
// (also known as "type promotion" or "type coercion") in C, specifically with the return type of main.
int main()
{
    int test = 0;
    printf("Hello world!\n");
    printf("Testing returning a value of a different type than the method's declared return type.\n");
    return 0;
}
