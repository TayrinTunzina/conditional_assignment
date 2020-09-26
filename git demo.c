#include <stdio.h>

int main() {
    int ch;
    scanf("%c", &ch);

//    if(ch == 'a')
//        printf("Vowel\n");
//    else if(ch == 'e')
//        printf("Vowel\n");
//    else if(ch == 'i')
//        printf("Vowel\n");
//    else if(ch == 'o')
//        printf("Vowel\n");
//    else if(ch == 'u')
//        printf("Vowel\n");
//    else
//        printf("Consonant\n");

//     if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
//        printf("Vowel\n");
//     else
//        printf("Consonant\n");



    switch(ch) {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vowel\n");
        break;
    default:
        printf("Consonant\n");
    }

    return 0;
}
