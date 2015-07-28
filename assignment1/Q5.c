/* CS261- Assignment 1 - Q.5*/
/* Name: Sam Jones
 * Date: 7/1/2015
 * Solution description:
 */
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

const int MAX_LETTERS = 1000;

void sticky(char* word){
     /*Convert to sticky caps*/
     for(int i = 0; i < MAX_LETTERS; i++)
     {
         if(word[i] == '\0')
             return;

         if(i % 2)
             word[i] = tolower(word[i]);
         else
             word[i] = toupper(word[i]);
     }

}

int main(){
    /*Read word from the keyboard using scanf*/

    printf("Please enter a string: ");

    char buffer[MAX_LETTERS];
    scanf("%s", buffer);
    /*Call sticky*/
    sticky(buffer);
    /*Print the new word*/
    printf("%s\n", buffer);
    
    return 0;
}
