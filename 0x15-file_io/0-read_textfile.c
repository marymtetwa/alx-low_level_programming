#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * read_textfile- Read text file print to STDOUT.
 * @filename: text file that is being read
 * @letters: number of letters to be read
 * Return: w- the actual number of bytes read and printed
 * 0 when function fails or filename is NULL.
 */


ssize_t read_textfile(const char *filename, size_t letters) {
  if (filename == NULL) {
    return 0;
  }

  FILE *file = fopen(filename, "r");
  if (file == NULL) {
    return 0;
  }

  char buffer[letters];
  ssize_t bytes_read = fread(buffer, sizeof(char), letters, file);
  if (bytes_read <= 0) {
    fclose(file);
    return 0;
  }

  ssize_t bytes_written = fwrite(buffer, sizeof(char), bytes_read, stdout);
  fclose(file);

  if (bytes_written != bytes_read) {
    return 0;
  }

  return bytes_read;
}
