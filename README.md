<div align="center"><img src="https://github.com/ksyv/holbertonschool-web_front_end/blob/main/baniere_holberton.png"></div>

# C Programming Fundamentals 💻

## Resources 📚

* [Everything you need to know to start with C.pdf](https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2021/1/d801279f75de6a982a55d752dfd3632909f720f0.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20250217%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20250217T074554Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=50d9eeba18c994d43b68262b3ba9e8a227f138ce1666b2f9a04e5e2385ac559e) (You do not have to learn everything in there yet, but make sure you read it entirely first) 📄
* [Dennis Ritchie](https://intranet.hbtn.io/rltoken/z_bMXWzGREPdNusi75hIaA) 👨‍💻
* ["C" Programming Language: Brian Kernighan](https://intranet.hbtn.io/rltoken/ALlxQP48pUddRMMOU9IYrw) 📚
* [Why C Programming Is Awesome](https://intranet.hbtn.io/rltoken/jeQhdiiq4EemF-jlzBCHKw) 🌟
* [Learning to program in C part 1](https://intranet.hbtn.io/rltoken/y-sbT9uSCGF6ml1ZPOvyJg) 🎬
* [Learning to program in C part 2](https://intranet.hbtn.io/rltoken/r3mDdJIpJHmu4TdJBV95gQ) 🎬
* [Understanding C program Compilation Process](https://intranet.hbtn.io/rltoken/tjRducuDVR9ftHsOFxdYmw) 🛠️
* [Betty Coding Style](https://intranet.hbtn.io/rltoken/GG06ebtkejkhoyCOjx1S6w) 💅
* [Linus Torvalds on C vs. C++](https://intranet.hbtn.io/rltoken/fXapDTlCYs_KsVAJhxfz6A) 💬

## man or help:

* `gcc` 🛠️
* `printf (3)` 🖨️
* `puts` 📝
* `putchar` 🔤

## Learning Objectives 🎯

At the end of this project, you are expected to be able to explain to anyone, without the help of Google:

* **General**
    * Why C programming is awesome 🌟
    * Who invented C 👨‍💻
    * Who are Dennis Ritchie, Brian Kernighan, and Linus Torvalds 👨‍💻
    * What happens when you type `gcc main.c` 🛠️
    * What is an entry point 🚪
    * What is `main` 🔑
    * How to print text using `printf`, `puts`, and `putchar` 🖨️
    * How to get the size of a specific type using the unary operator `sizeof` 📏
    * How to compile using `gcc` 🛠️
    * What is the default program name when compiling with `gcc` 📦
    * What is the official C coding style and how to check your code with `betty-style` 💅
    * How to find the right header to include in your source code when using a standard library function 📂
    * How does the `main` function influence the return value of the program 🔄

## Requirements 📜

* **C**
    * Allowed editors: `vi`, `vim`, `emacs` ✏️
    * All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89` 🛠️
    * All your files should end with a new line 📄
    * A `README.md` file at the root of the repo, containing a description of the repository 📜
    * A `README.md` file, at the root of the folder of this project, containing a description of the project 📜
    * There should be no errors and no warnings during compilation ✅
    * You are not allowed to use `system` ❌
    * Your code should use the Betty style. It will be checked using `betty-style.pl` and `betty-doc.pl` 💅

* **Shell Scripts**
    * Allowed editors: `vi`, `vim`, `emacs` ✏️
    * All your scripts will be tested on Ubuntu 20.04 LTS 🛠️
    * All your scripts should be exactly two lines long (`$ wc -l file` should print 2) 📜
    * All your files should end with a new line 📄
    * The first line of all your files should be exactly `#!/bin/bash` 📜

## More Info 📌

* **Betty linter**

    To run the Betty linter just with command `betty <filename>`:

    1. Go to the [Betty repository](Link to Betty repo - Replace with actual link) 🔗
    2. Clone the repo to your local machine 💻
    3. `cd` into the Betty directory 📁
    4. Install the linter with `sudo ./install.sh` 🛠️
    5. `emacs` or `vi` a new file called `betty`, and copy the script below:

    ```bash
    #!/bin/bash
    # Simply a wrapper script to keep you from having to use betty-style
    # and betty-doc separately on every item.
    # Originally by Tim Britton (@wintermanc3r), multiargument added by
    # Larry Madeo (@hillmonkey)

    BIN_PATH="/usr/local/bin"
    BETTY_STYLE="betty-style"
    BETTY_DOC="betty-doc"

    if [ "\$#" = "0" ]; then
        echo "No arguments passed."
        exit 1
    fi

    for argument in "\$@" ; do
        echo -e "\n========== $argument =========="
        ${BIN_PATH}/\${BETTY_STYLE} "$argument"
        ${BIN_PATH}/\${BETTY_DOC} "\$argument"
    done
    ```

    6. Once saved, exit file and change permissions to apply to all users with `chmod a+x betty` 🔒
    7. Move the `betty` file into `/bin/` directory or somewhere else in your `$PATH` with `sudo mv betty /bin/` 📁
    8. You can now type `betty <filename>` to run the Betty linter! 💅

## Manual QA Review 🔍

It is your responsibility to request a review for your blog from a peer before the project’s deadline. If no peers have been reviewed, you should request a review from a TA or staff member.
