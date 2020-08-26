#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
  int MAX_LEN = 256; // already defined in question
  char c;            // decalaration of char input
  char str[MAX_LEN]; // char array to get string input
  char sen[MAX_LEN]; // char array to get sentence input

  scanf("%c", &c);         // to character input as first input is of char type
  scanf("%s ", str);       // string is input using %s
  scanf("%[^\n]%*c", sen); // all given in question

  // now you can get it

  printf("%c\n", c);
  printf("%s\n", str);
  printf("%s\n", sen); // print statements
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */
  return 0;
}