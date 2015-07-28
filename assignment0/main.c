/*********************
 * Author Sam Jones jonesamu
 * Date: 06/26/2015
 * Assignment0: Loops through 1-20 and prints fizz, buzz or fizzbuzz
 * depending on conditions
 *********************/

#include <stdio.h>

int main(int argc, const char * argv[]) {
    
    printf("Let's Fizz and Buzz!\n");
    
    int i;
    
    for (i = 1; i < 21; i++)
    {
        if (i % 3 == 0 && i % 5 == 0)
        {
            printf("Fizz Buzz\n");
        }
        else if (i % 3 == 0)
        {
            printf("Fizz\n");
        }
        else if (i % 5 == 0)
        {
            printf("Buzz\n");
        }
        else
        {
            printf("%d \n", i);
        }
    }
    
    return 0;
}
