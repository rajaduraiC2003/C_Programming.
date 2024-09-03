#include <ctype.h>
#include <stdio.h>
 
int main()
{
    int j = 0;
    char str[] = "iam raju\n";
    char ch;
 
    while (str[j]) {
        ch = str[j];
        putchar(toupper(ch));
        j++;
    }
 
    return 0;
}
