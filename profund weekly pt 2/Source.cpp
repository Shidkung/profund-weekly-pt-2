#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
    int l, i;
    char* begin_ptr, * end_ptr, ch;
    char string[100] ;
    scanf("%s", string);
    printf("Enter a string: %s\n", string);

    l = strlen(string);


    begin_ptr = string;
    end_ptr = string;


    for (i = 0; i < l - 1; i++)
        end_ptr++;

    for (i = 0; i < l / 2; i++) {


        ch = *end_ptr;
        *end_ptr = *begin_ptr;
        *begin_ptr = ch;


        begin_ptr++;
        end_ptr--;

    }
   
    printf("Reverse of the string: %s\n", string);

    return 0;
}