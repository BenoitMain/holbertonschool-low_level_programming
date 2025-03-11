<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# 0x0C. C - More malloc, free 💻

## Général 📚

*   Comment utiliser la fonction `exit` 🚪
*   Que sont les fonctions `calloc` et `realloc` de la bibliothèque standard et comment les utiliser 🛠️

## Ressources 🌟

*   [Do I cast the result of malloc?](https://intranet.hbtn.io/rltoken/xRakq81EUvl-3QG_3QUC8A) ❓

## Introduction aux fichiers 📂

### 0-malloc_checked.c

*   Fonction qui alloue de la mémoire en utilisant `malloc`. 📦

    ```
    julien@ubuntu:~/0x0b. more malloc, free$ cat 0-main.c
    #include "holberton.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <limits.h>

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *c;
        int *i;
        float *f;
        double *d;

        c = malloc_checked(sizeof(char) * 1024);
        printf("%p\n", (void *)c);
        i = malloc_checked(sizeof(int) * 402);
        printf("%p\n", (void *)i);
        f = malloc_checked(sizeof(float) * 100000000);
        printf("%p\n", (void *)f);
        d = malloc_checked(INT_MAX);
        printf("%p\n", (void *)d);
        free(c);
        free(i);
        free(f);
        free(d);
        return (0);
    }
    julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 0-main.c 0-malloc_checked.c -o a
    julien@ubuntu:~/0x0b. more malloc, free$ ./a
    0x1e39010
    0x1e39830
    0x7f31f6c19010
    julien@ubuntu:~/0x0b. more malloc, free$ echo $?
    98
    julien@ubuntu:~/0x0b. more malloc, free$
    ```

### 1-string_nconcat.c

*   Fonction qui concatène deux chaînes de caractères. 📝

    ```
    julien@ubuntu:~/0x0b. more malloc, free$ cat 1-main.c
    #include "holberton.h"
    #include <stdio.h>
    #include <stdlib.h>

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *concat;

        concat = string_nconcat("Holberton ", "School !!!", 6);
        printf("%s\n", concat);
        free(concat);
        return (0);
    }
    julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 1-main.c 1-string_nconcat.c -o b
    julien@ubuntu:~/0x0b. more malloc, free$ ./b
    Holberton School
    julien@ubuntu:~/0x0b. more malloc, free$
    ```

### 2-calloc.c

*   Fonction qui alloue de la mémoire pour un tableau, en utilisant `malloc`. 🧰

    *   FYI La bibliothèque standard fournit une fonction `calloc` différente. Exécutez `man calloc` pour en savoir plus. 📖

    ```
    julien@ubuntu:~/0x0b. more malloc, free$ cat 2-main.c
    #include "holberton.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    /**
     * simple_print_buffer - prints buffer in hexa
     * @buffer: the address of memory to print
     * @size: the size of the memory to print
     *
     * Return: Nothing.
     */
    void simple_print_buffer(char *buffer, unsigned int size)
    {
        unsigned int i;

        i = 0;
        while (i < size)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", buffer[i]);
            i++;
        }
        printf("\n");
    }

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        char *a;

        a = _calloc(98, sizeof(char));
        strcpy(a, "Holberton");
        strcpy(a + 9, " School! :)\n");
        a = '!';
        simple_print_buffer(a, 98);
        free(a);
        return (0);
    }
    julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 2-main.c 2-calloc.c -o c
    julien@ubuntu:~/0x0b. more malloc, free$ ./c
    0x48 0x6f 0x6c 0x62 0x65 0x72 0x74 0x6f 0x6e 0x20
    0x53 0x63 0x68 0x6f 0x6f 0x6c 0x21 0x20 0x3a 0x29
    0x0a 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
    0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x21
    julien@ubuntu:~/0x0b. more malloc, free$
    ```

### 3-array_range.c

*   Fonction qui crée un tableau d'entiers. 📊

    ```
    julien@ubuntu:~/0x0b. more malloc, free$ cat 3-main.c
    #include "holberton.h"
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>

    /**
     * simple_print_buffer - prints buffer in hexa
     * @buffer: the address of memory to print
     * @size: the size of the memory to print
     *
     * Return: Nothing.
     */
    void simple_print_buffer(int *buffer, unsigned int size)
    {
        unsigned int i;

        i = 0;
        while (i < size)
        {
            if (i % 10)
            {
                printf(" ");
            }
            if (!(i % 10) && i)
            {
                printf("\n");
            }
            printf("0x%02x", buffer[i]);
            i++;
        }
        printf("\n");
    }

    /**
     * main - check the code for Holberton School students.
     *
     * Return: Always 0.
     */
    int main(void)
    {
        int *a;

        a = array_range(0, 10);
        simple_print_buffer(a, 11);
        free(a);
        return (0);
    }
    julien@ubuntu:~/0x0b. more malloc, free$ gcc -Wall -pedantic -Werror -Wextra 3-main.c 3-array_range.c -o d
    julien@ubuntu:~/0x0b. more malloc, free$ ./d
    0x00 0x01 0x02 0x03 0x04 0x05 0x06 0x07 0x08 0x09
    0x0a
    julien@ubuntu:~/0x0b. more malloc, free$
    ```
