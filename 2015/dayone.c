#include <stdio.h>
#include <stdlib.h>
#define BLOCK_SIZE 1024

int main(void) {
  char *line = NULL;
  size_t len = 0;
  int counter = 0;

  FILE *f;
  char c;

  f = fopen("text.txt", "r");
  if (f == NULL) {
    perror("error:");
    return (1);
  }

  while ((c = fgetc(f)) != EOF) {
    if (c == '(') {
      ++counter;
    } else if (c == ')') {
      --counter;
    } else {
      continue;
    }
  }
  printf("santa is at %d\n", counter);

  return (0);
  /** printf("Enter the map directions\n");
   if (getline(&line, &len, stdin) == -1)
     perror("Error reading the stream input");
 **/

  /**  while (*line != '\0') {
      if (*line == '(') {
        printf("Santa is at floor ++: %d\n", counter);
        ++counter;
      } else if (*line == ')') {
        printf("Santa is at floor --: %d\n", counter);
        --counter;
      } else {
        printf("Our culprit\n");
      }
      line++;
    }
    printf("Santa is at floor: %d\n", counter);
    return (0);
    **/
}
