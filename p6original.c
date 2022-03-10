// 6. Write a program to find the index of a substring of a string.
// void input_string(char *a);
// int str_reverse(char *string, char *substring);
// void output(char *string, char *substring, int index);
// input:
// helloworldhello
// world
// output:
// The index of world in helloworldhello is 5

#include <stdio.h>
#include <string.h>

void input_string(char *string, char *sub_string)
{
    printf("Enter the a string:\n");
    scanf("%s",string);
    printf("Enter the sub-string:\n");
    scanf("%s",sub_string);
}

int index_of_substring(char *string, char *sub_string)
{
    char *c;
    c= strstr(string,sub_string);
    int e,f,g;
    e = strlen(string);
    f = strlen(c);
    g = e-f;
    return g;
    
}
void output(char *string , char *sub_string, int g)
{
    if(g)
    {
     printf("index of sub-string in string is : %d \n",g);  
    }
}
int main()
{
    char string[25],sub_string[25];
    input_string(string,sub_string);
    int g=index_of_substring(string,sub_string);
    output(string,sub_string,g);
    return 0;
}