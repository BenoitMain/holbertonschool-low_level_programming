<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

<div align="center"><img src="https://s3.eu-west-3.amazonaws.com/hbtn.intranet.project.files/holbertonschool-low_level_programming/229/giphy-3.gif"></div><br>

---

# Linked Lists Project

Welcome to the **Linked Lists Project**! This repository is dedicated to mastering the concepts of linked lists in C programming. Below, you'll find all the necessary information, requirements, and learning objectives for this project.

---

## 📚 Resources

Make sure to check out the following resources to deepen your understanding:

- [Linked Lists (Concept Overview)](https://www.google.com)
- [Google](https://www.google.com)
- [YouTube Tutorials](https://www.youtube.com)

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain the following concepts **without relying on Google**:

### General
- **When and why** to use linked lists instead of arrays.
- How to **build and use** linked lists effectively.

---

## ✅ Requirements

### General
- Use **vi**, **vim**, or **emacs** as your code editor.
- All files will be compiled on **Ubuntu 20.04 LTS** using:
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89
```
- All files must:
- End with a new line.
- Follow the **Betty coding style** (checked with `betty-style.pl` and `betty-doc.pl`).
- **Global variables are not allowed.**
- Limit each file to a maximum of **5 functions**.
- Only allowed C standard library functions:
- `malloc`
- `free`
- `exit`
- Functions like `printf`, `puts`, `calloc`, `realloc`, etc., are **forbidden**.
- You may use `_putchar` (no need to push `_putchar.c`).

### Compilation Rules
- Example `main.c` files are provided for testing but should not be pushed to the repository.
- The prototypes of all functions (including `_putchar`) must be in a header file named `lists.h`.
- All header files must be **include guarded**.

---

## 🛠️ Data Structure

Please use the following structure for this project:
```bash
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;
```
