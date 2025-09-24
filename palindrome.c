#include <stdio.h>
int main() {
    char str[100];
    int i, j, flag = 1, length = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
 
    while (str[length] != '\0' && str[length] != '\n') 
    {
        length++;
    }
    j = length - 1;
    for (i = 0; i < j; i++, j--) 
    {
        if (str[i] != str[j]) 
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
 
}