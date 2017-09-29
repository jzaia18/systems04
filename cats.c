// Jake Zaia
// Systems Level Programming
// Period 10
// 2017-09-28

#include <stdio.h>
#include <string.h>

int main() {
  char s1[] = "Hi";
  char s2[] = "lls";

  printf("s1: \"%s\"\n", s1);
  printf("s2: \"%s\"\n", s2);
  
  printf("\nstrcat() concatenates 2 strings, the 2nd onto the 1st\n\n");

  printf("strcat(s1, s2): %s\n", strcat(s1, s2));
  
  printf("\nstrcat() modifies the 1st string, so now:\n\n");
  
  printf("s1: \"%s\"\n", s1);
  printf("s2: \"%s\"\n", s2);

  char s3[] = "He";
  char s4[] = "llo";

  printf("\n~~~~~~~~~~~~~~~~~~~~~~~~\n\n");
  
  printf("s3: \"%s\"\n", s3);
  printf("s4: \"%s\"\n", s4);
  
  printf("\nstrncat() takes a 3rd argument, specifying how many characters to append\n\n");

  printf("strncat(s3, s4, 0): %s\n", strncat(s3, s4, 0));

  printf("s3: \"%s\"\n", s3);
  printf("s4: \"%s\"\n", s4);
  
  printf("strncat(s3, s4, 2): %s\n", strncat(s3, s4, 2));
  
  printf("s3: \"%s\"\n", s3);
  printf("s4: \"%s\"\n", s4);
  
  return 0;
}
