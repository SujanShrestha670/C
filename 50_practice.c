#include <stdio.h>
#include <ctype.h>

int main(void) {

  char alpha;
  printf("Enter a alphabet : ");
  scanf("%c", &alpha);

  alpha = tolower(alpha);

  switch(alpha) {

    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
      printf("The alphabet %c is vowel\n", alpha);
      break;
    default:
      printf("The alphabet %c is consonant\n", alpha);

  }

  return 0;
}
