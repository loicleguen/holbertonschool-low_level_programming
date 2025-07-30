# 📂 Singly Linked Lists

![Project Badge](https://img.shields.io/badge/Progress-55.81%25-blue)  
**C - Singly Linked Lists**  
**Level:** Novice  
**Author:** Julien Barbier  
**Weight:** 1  

> Your score will be updated as you progress.

---

## 📝 Description

This project introduces singly linked lists in the C programming language. It emphasizes understanding when and why to use linked lists instead of arrays, and how to implement and manage them using dynamic memory allocation.

---

## 📚 Resources

**Read or watch:**
- [Linked Lists - GeeksForGeeks](https://www.geeksforgeeks.org/data-structures/linked-list/)
- Google
- YouTube

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain (without using Google):

- When and why to use linked lists vs arrays
- How to build and use singly linked lists

---

## 📌 Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- Compilation: Ubuntu 20.04 LTS with `gcc` and options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No global variables
- No more than 5 functions per file
- Only allowed C standard functions: `malloc`, `free`, `exit`
- `printf` only allowed in specific tasks
- Use of `_putchar` is allowed (do not push `_putchar.c`)
- Use **Betty** style (`betty-style.pl`, `betty-doc.pl`)
- All files must end with a new line
- A `README.md` is required
- All prototypes must be declared in `lists.h`
- Header files must be include guarded

---

## 🧱 Data Structure

```c
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

🗂️ Repository Info
GitHub Repository: holbertonschool-low_level_programming

Directory: singly_linked_lists


