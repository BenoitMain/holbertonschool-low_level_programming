<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

---

# 🔧 File I/O System Calls in C

## 📚 Resources

Read or watch:
- 📖 [File descriptors](https://en.wikipedia.org/wiki/File_descriptor)
- 📖 [How to Use the I/O System Calls Open, Close, Read and Write](https://www.gnu.org/software/libc/manual/html_node/I_002fO-Overview.html)
- 🎥 [C Programming in Linux Tutorial - open() read() write() Functions](https://www.youtube.com/watch?v=KFxx3hsn4bM)

📌 **Man pages:**
- `man 2 open`
- `man 2 close`
- `man 2 read`
- `man 2 write`
- `man 3 dprintf`

---

## 🎯 Learning Objectives
By the end of this project, you will be able to explain:

### 📌 General
✅ How to find reliable online resources 📡
✅ How to create, open, close, read, and write files 📂
✅ What file descriptors are and their role 🏷️
✅ The three standard file descriptors:
   - **stdin** (Standard Input) → `STDIN_FILENO`
   - **stdout** (Standard Output) → `STDOUT_FILENO`
   - **stderr** (Standard Error) → `STDERR_FILENO`
✅ How to use system calls: `open`, `close`, `read`, `write` ⚙️
✅ Meaning and usage of flags: `O_RDONLY`, `O_WRONLY`, `O_RDWR` 🚩
✅ File permissions and setting them with `open()` 🔑
✅ Understanding system calls vs functions 🤔

---

## 📜 Requirements

### 🔹 General
- 📝 **Allowed editors:** `vi`, `vim`, `emacs`
- 🚀 **Compilation:**
  ```bash
  gcc -Wall -Werror -Wextra -pedantic -std=gnu89
  ```
- 📌 **Code Style:** Must follow the Betty coding style (`betty-style.pl`, `betty-doc.pl`)
- ❌ **No global variables allowed**
- ⚠️ **Limit:** Maximum 5 functions per file
- ✅ **Allowed standard library functions:** `malloc`, `free`, `exit`
- 🚫 **Forbidden functions:** `printf`, `puts`, `calloc`, `realloc`
- 🛠 **Allowed system calls:** `read`, `write`, `open`, `close`
- ✅ You may use `_putchar`
- 🛑 Do not push `_putchar.c` (we will use our own version)

### 🔹 Headers
- 📌 All function prototypes should be declared in `main.h`
- 🛑 **Include guards required** in header files

### 🔹 Additional Tips
🔹 Always prefer symbolic constants (POSIX) over numbers! Example:
✅ `read(STDIN_FILENO, ...)`
❌ `read(0, ...)`

---

