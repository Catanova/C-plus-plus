#include <stdio.h>
 
int main()
{
  char character;
 
  printf("Input a character\n");
  scanf("%c", &character);
 
  switch(character)
  {
    case 'Y':
    case 'y':
    case 'a':
    case 'A':
    case 'e':
    case 'E':
    case 'i':
    case 'I':
    case 'o':
    case 'O':
    case 'u':
    case 'U':
      printf("%c is a vowel.\n", character);
      break;
    default:
      printf("%c is not a vowel.\n", character);
  }              
 
  return 0;
}