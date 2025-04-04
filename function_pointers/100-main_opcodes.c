#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int i, num_bytes;
    unsigned char *main_ptr = (unsigned char *)main;

    if (argc != 2)
    {
        printf("Error\n");
        exit(1);
    }

    num_bytes = atoi(argv[1]);

    if (num_bytes < 0)
    {
        printf("Error\n");
        exit(2);
    }

    for (i = 0; i < num_bytes; i++)
    {
        printf("%02x", main_ptr[i]);
        if (i < num_bytes - 1)
            printf(" ");
    }
    printf("\n");

    return 0;
}
