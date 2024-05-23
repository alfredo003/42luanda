#include "get_next_line.h"

int main(void)
{
    int     fd;
    char    *line;

    // Open a file
    fd = open("example.txt", O_RDONLY);
    if (fd < 0)
    {
        perror("Error opening file");
        return (1);
    }

    // Read lines from the file until EOF
    while ((line = get_next_line(fd)) != NULL)
    {
        printf("%s\n", line);
        free(line); // Free the memory allocated by get_next_line
    }

    // Close the file
    close(fd);

    return (0);
}

