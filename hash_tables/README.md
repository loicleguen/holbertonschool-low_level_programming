# File I/O in C 🔧


---

## 📝 Description

This project explores low-level file input/output operations in C using system calls such as `open`, `read`, `write`, and `close`. The objective is to understand file descriptors, permissions, and how to interact with the filesystem directly — without relying on higher-level libraries like `stdio.h`.

---

## 📚 Resources

- [File descriptors](https://www.geeksforgeeks.org/file-descriptors-in-c-c-with-examples/)
- [Linux System Calls: open, read, write](https://www.geeksforgeeks.org/input-output-system-calls-c-create-open-close-read-write/)
- [C Programming in Linux Tutorial](https://www.youtube.com/watch?v=V7WvT9Z3XF0)

**man pages:**  
`open`, `read`, `write`, `close`, `dprintf`

---

## 🎯 Learning Objectives

- Understand system calls vs functions
- File creation, reading, writing, and appending
- Proper error handling with exit codes
- File permissions (`rw-------`, `rw-rw-r--`)
- Buffering and minimizing system calls
- Use of symbolic constants (`STDIN_FILENO`, `O_RDONLY`, etc.)

---

## ✅ Requirements

- Use **GCC** with flags: `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Follow **Betty** style
- No more than 5 functions per file
- Use only: `malloc`, `free`, `exit`, `open`, `read`, `write`, `close`, `_putchar`
- No use of `printf`, `puts`, `calloc`, `realloc`, or global variables
- Push your own `main.h` (include-guarded)

---

## 📂 File Structure

file_io/
- ├── 0-read_textfile.c
- ├── 1-create_file.c
- ├── 2-append_text_to_file.c
- ├── 3-cp.c
- ├── main.h
- └── README.md


---

## 🧪 Tasks & Progress

0. Tread lightly, she is near ✅

Reads a text file and prints it to POSIX stdout.

```c
ssize_t read_textfile(const char *filename, size_t letters);

1. Under the snow ✅
Creates a file with permission rw-------.

c
Copier le code
int create_file(const char *filename, char *text_content);

2. Speak gently, she can hear ✅
Appends text to the end of a file (only if the file exists).

c
Copier le code
int append_text_to_file(const char *filename, char *text_content);

3. cp 🔄 (Score: 14/15)
Replicates the cp command using system calls and proper error handling.

bash
Copier le code
Usage: cp file_from file_to
Handles all expected error codes:

97: Wrong number of args

98: Can't read from file

99: Can't write to file

100: Can't close file descriptor

🛠 Compilation

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 <main.c> <task>.c -o <output>

Example:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-main.c 0-read_textfile.c -o read


⚠️ Exit Codes (for cp.c)
Code	Description
97	Incorrect argument count
98	Can't read from file
99	Can't write to file
100	Can't close file

