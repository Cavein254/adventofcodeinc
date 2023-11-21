#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *line = NULL;
  size_t len = 0;
  int counter = 0;

  printf("Enter the map directions\n");
  if (getline(&line, &len, stdin) == -1)
    perror("Error reading the stream input");

  while (*line != '\0') {
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
}
