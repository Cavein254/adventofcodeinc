#include <stdio.h>
#include <stdlib.h>

int main(void) {
  char *line = NULL;
  size_t len = 0;

  printf("Enter the map directions\n");
  if (getline(&line, &len, stdin) == -1)
    perror("Error reading the stream input");

  while (*line != '\0') {
    if ((*line != ')') || (*line != '(')) {
      perror("Not a valid map\n");
      return (1);
    }
    line++;
  }

  return (0);
}
