#include <stdio.h>
int main() {
    char str[100];
    int i, Count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
     for(i = 0; str[i] != '\0'; i++) {
    if(str[i] == ' ' || str[i] == '\n' || str[i] == '\t') {
            Count++; }
    }
    if(i > 0 && str[i-1] != ' ' && str[i-1] != '\n' && str[i-1] != '\t') {
        Count++; } 
    printf("Total number of words: %d\n", Count);
    return 0;
}