#include <stdio.h>
#include <math.h>

int main()
{
    char alphabet;
    printf("Enter The Alphabet: ");
    scanf("%c", &alphabet);

    switch(alphabet)
    {
        case 'A':
            printf("This Alphabet is Vowel");
            break;
        case 'E':
            printf("This Alphabet is Vowel");
            break;
        case 'I':
            printf("This Alphabet is Vowel");
            break;
        case 'O':
            printf("This Alphabet is Vowel");
            break;
        case 'U':
            printf("This Alphabet is Vowel");
            break;
        case 'a':
            printf("This Alphabet is Vowel");
            break;
        case 'e':
            printf("This Alphabet is Vowel");
            break;
        case 'i':
            printf("This Alphabet is Vowel");
            break;
        case 'o':
            printf("This Alphabet is Vowel");
            break;
        case 'u':
            printf("This Alphabet is Vowel");
            break;
        default:
            printf("This Alphabet is Consonant");
    }
    return 0;
}
