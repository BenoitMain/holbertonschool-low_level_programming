<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# C Programming Fundamentals 💻

## Resources 📚

* [0x0d. Structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/6eb80c79c99f6125450a0dc11b300d46238d1a5a.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230227%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230227T135449Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6d18b1b2f78f3b2b2c7f6a1a3f7b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3)
* [struct (C programming language)](https://en.wikipedia.org/wiki/Struct_(C_programming_language))
* [Documentation: structures](https://github.com/holbertonschool/Betty/wiki/Documentation:-Data-structures)
* [0x0d. Typedef and structures.pdf](https://s3.amazonaws.com/alx-intranet.hbtn.io/uploads/misc/2021/1/c8ff3e6f7202be7fa489a584e41d005504a07c23.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIARDDGGGOUSBVO6H7D%2F20230227%2Fus-east-1%2Fs3%2Faws4_request&X-Amz-Date=20230227T135449Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=6d18b1b2f78f3b2b2c7f6a1a3f7b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3b3)
* [typedef](https://publications.gbdirect.co.uk//c_book/chapter8/typedef.html)
* Programming in C by Stephen Kochan - Chapter 8, Working with Structures p163-189
* [The Lost Art of C Structure Packing (Advanced - not mandatory)](http://www.catb.org/esr/structure-packing/)

## Learning Objectives 🎯

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

### General
* What are structures, when, why and how to use them
* How to use typedef

## Requirements 📜

### General
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* The only C standard library functions allowed are printf, malloc, free and exit.
* Don't forget to push your header file
* All your header files should be include guarded

## Tasks 📝

### 0. Poppy 🐶
Define a new type `struct dog` with the following elements:
- `name`, type = `char *`
- `age`, type = `float` 📊
- `owner`, type = `char *`

[View code](./dog.h) 📄

### 1. A dog is the only thing on earth that loves you more than you love yourself ❤️
Write a function that initializes a variable of type `struct dog`
- Prototype: `void init_dog(struct dog *d, char *name, float age, char *owner);`

[View code](./1-init_dog.c) 💻

### 2. A dog will teach you unconditional love. If you can have that in your life, things won't be too bad 🐾
Write a function that prints a `struct dog`
- Prototype: `void print_dog(struct dog *d);`
- Format: see example in the task 📝
- You are allowed to use the standard library 📚
- If an element of `d` is NULL, print `(nil)` instead of this element. (if `name` is NULL, print `Name: (nil)`)
- If `d` is NULL print nothing.

[View code](./2-print_dog.c) 🖨️

### 3. Outside of a dog, a book is a man's best friend. Inside of a dog it's too dark to read 📖
Define a new type `dog_t` as a new name for the type `struct dog`.

[View code](./dog.h) 📁

### 4. A door is what a dog is perpetually on the wrong side of 🚪
Write a function that creates a new dog.
- Prototype: `dog_t *new_dog(char *name, float age, char *owner);`
- You have to store a copy of `name` and `owner`
- Return `NULL` if the function fails ⚠️

[View code](./4-new_dog.c) 📈

### 5. How many legs does a dog have if you call his tail a leg? Four. Saying that a tail is a leg doesn't make it a leg 🤔
Write a function that frees dogs.
- Prototype: `void free_dog(dog_t *d);`

[View code](./5-free_dog.c) 🚮


