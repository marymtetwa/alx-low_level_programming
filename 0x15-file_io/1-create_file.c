#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include "main.h"

/**
 * create_file - This Creates a file.
 * @filename: A pointer to the name of the file to create.
 * @text_content: A pointer to a string that is to write to the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */

int create_file(const char *filename, char *text_content) {
    if (filename == NULL) {
        return -1;
    }

    int fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

    if (fd == -1) {
        return -1;
    }

    if (text_content != NULL) {
        ssize_t written = write(fd, text_content, strlen(text_content));

        if (written == -1) {
            close(fd);
            return -1;
        }
    }

    close(fd);

    return 1;
}
