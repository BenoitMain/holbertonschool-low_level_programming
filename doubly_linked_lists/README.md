<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

---

# 📚 Doubly Linked List Project

## 📖 Resources
### Read or watch:
- [What is a Doubly Linked List](https://en.wikipedia.org/wiki/Doubly_linked_list)

## 🎯 Learning Objectives
At the end of this project, you should be able to explain to anyone, **without the help of Google**:

### 🔹 General
- What is a **doubly linked list**
- How to **use doubly linked lists**
- How to **find the right source of information** independently

## 📌 Requirements
### 🔧 General
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be interpreted/compiled on **Ubuntu 20.04 LTS** using `python3` (version `3.8.5`)
- All your files should **end with a new line**
- A `README.md` file at the root of the project folder is **mandatory**
- Your code should follow the **Betty style** (checked using `betty-style.pl` and `betty-doc.pl`)
- **No global variables** allowed
- **Maximum 5 functions per file**
- Allowed C standard library functions: `malloc`, `free`, `printf`, and `exit`
- The `main.c` files shown in examples are for testing purposes but are **not mandatory** to push to the repo
- The prototypes of all functions should be in a header file named **`lists.h`**
- **All header files should be include-guarded**

## 📌 More Info
### 📜 Data Structure
```c
/**
 * struct dlistint_s - doubly linked list
 * @n: integer
 * @prev: points to the previous node
 * @next: points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
```

