# 📂 Doubly Linked Lists

![Project Badge](https://img.shields.io/badge/Progress-88.78%25-blue)  
**C - Doubly Linked Lists**  
**Level:** Amateur  
**Author:** Julien Barbier  
**Weight:** 1  

> Your score will be updated as you progress.

---

## 📝 Description

This project focuses on understanding and implementing **doubly linked lists** in C. It covers a wide range of fundamental operations including adding, deleting, and retrieving nodes, as well as memory management and list traversal.

---

## 📚 Resources

**Read or watch:**
- [What is a Doubly Linked List](https://www.geeksforgeeks.org/doubly-linked-list/)

---

## 🎯 Learning Objectives

By the end of this project, you should be able to explain (without using Google):

- What is a doubly linked list
- How to use doubly linked lists
- How to look for the right sources of information independently

---

## 📌 Requirements

### General

- Allowed editors: `vi`, `vim`, `emacs`
- Ubuntu 20.04 LTS, compiled with `gcc` using `-Wall -Werror -Wextra -pedantic -std=gnu89`
- No use of global variables
- Maximum of 5 functions per file
- Only allowed standard library functions: `malloc`, `free`, `printf`, `exit`
- Use **Betty** style (`betty-style.pl`, `betty-doc.pl`)
- All files must end with a new line
- `README.md` is mandatory
- All function prototypes must be in a header file named `lists.h`
- Header files must be guarded

---

## 🧱 Data Structure

```c
/**
 * struct dlistint_s - doubly linked list
 * @n: Integer
 * @prev: Points to the previous node
 * @next: Points to the next node
 *
 * Description: doubly linked list node structure
 */
typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;
✅ Tasks
0. Print list
Function: size_t print_dlistint(const dlistint_t *h);

Description: Print all elements of a dlistint_t list.

File: 0-print_dlistint.c

1. List length
Function: size_t dlistint_len(const dlistint_t *h);

Description: Return the number of elements in the list.

File: 1-dlistint_len.c

2. Add node
Function: dlistint_t *add_dnodeint(dlistint_t **head, const int n);

Description: Add a new node at the beginning of the list.

File: 2-add_dnodeint.c

3. Add node at the end
Function: dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);

Description: Add a new node at the end of the list.

File: 3-add_dnodeint_end.c

4. Free list
Function: void free_dlistint(dlistint_t *head);

Description: Free a dlistint_t list.

File: 4-free_dlistint.c

5. Get node at index
Function: dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);

Description: Return the nth node of a dlistint_t linked list.

File: 5-get_dnodeint.c

6. Sum list
Function: int sum_dlistint(dlistint_t *head);

Description: Return the sum of all data (n) of a dlistint_t list.

File: 6-sum_dlistint.c

7. Insert at index
Function: dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

Description: Insert a new node at a given position.

File: 7-insert_dnodeint.c

8. Delete at index
Function: int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);

Description: Delete the node at a given index.

File: 8-delete_dnodeint.c

🗂️ Repository Info
GitHub repository: holbertonschool-low_level_programming

Directory: doubly_linked_lists

