//Write a C program to find out whether a character is Vowel or Constant using Switch statement 
#include <stdio.h>

int main(){
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
        printf("%c is vowel",ch);
        break;
    
    default:
    printf("%c is constant",ch);
        break;
    }
    return 0;
}