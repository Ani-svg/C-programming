#include <stdio.h>
 
int main() {
    char s[100];
    int i = 0;
   
    printf("Enter a phrase: ");
    fgets(s, sizeof(s), stdin);
   
    while(s[i] != '\0') {
        if(s[i] >= 'a' && s[i] <= 'z') {
            s[i] = s[i] - 32;  
        }
        else if(s[i] >= 'A' && s[i] <= 'Z') {
            s[i] = s[i] + 32;  
        }
        i++;
    }
   
    printf("Changed: %s", s);
   
    return 0;