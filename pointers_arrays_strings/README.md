iC - Pointers, arrays and strings

0. 98 Battery st.
mandatory
Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.

Prototype: void reset_to_98(int *n);
julien@ubuntu:~/$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/$ ./0-98 
n=402
n=98
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 0-reset_to_98.c
  
0/7 pts
1. Don't swap horses in crossing a stream
mandatory
Write a function that swaps the values of two integers.

Prototype: void swap_int(int *a, int *b);
julien@ubuntu:~/$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/$
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 1-swap.c
  
0/7 pts
2. This report, by its very length, defends itself against the risk of being read
mandatory
Write a function that returns the length of a string.

Prototype: int _strlen(char *s);
FYI: The standard library provides a similar function: strlen. Run man strlen to learn more.

julien@ubuntu:~/$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/$ ./2-strlen 
16
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 2-strlen.c
  
0/7 pts
3. I do not fear computers. I fear the lack of them
mandatory
Write a function that prints a string, followed by a new line, to stdout.

Prototype: void _puts(char *str);
FYI: The standard library provides a similar function: puts. Run man puts to learn more.

julien@ubuntu:~/$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/$ 

Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 3-puts.c
  
0/7 pts
4. I can only go one way. I've not got a reverse gear
mandatory
Write a function that prints a string, in reverse, followed by a new line.

Prototype: void print_rev(char *s);
julien@ubuntu:~/$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 4-print_rev.c
  
0/7 pts
5. A good engineer thinks in reverse and asks himself about the stylistic consequences of the components and systems he proposes
mandatory
Write a function that reverses a string.

Prototype: void rev_string(char *s);
julien@ubuntu:~/$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[10] = "My School";

    printf("%s\n", s);
    rev_string(s);
    printf("%s\n", s);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-rev_string.c -o 5-rev_string
julien@ubuntu:~/$ ./5-rev_string 
My School
loohcS yM
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 5-rev_string.c
  
0/7 pts
6. Half the lies they tell about me aren't true
mandatory
Write a function that prints every other character of a string, starting with the first character, followed by a new line.

Prototype: void puts2(char *str);
julien@ubuntu:~/$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/$ ./6-puts2 
02468
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 6-puts2.c
  
0/7 pts
7. Winning is only half of it. Having fun is the other half
mandatory
Write a function that prints half of a string, followed by a new line.

Prototype: void puts_half(char *str);
The function should print the second half of the string
If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string + 1) / 2
julien@ubuntu:~/$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/$ ./7-puts_half 
56789
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 7-puts_half.c
  
0/7 pts
8. Arrays are not pointers
mandatory
Write a function that prints n elements of an array of integers, followed by a new line.

Prototype: void print_array(int *a, int n);
where n is the number of elements of the array to be printed
Numbers must be separated by comma, followed by a space
The numbers should be displayed in the same order as they are stored in the array
You are allowed to use printf
julien@ubuntu:~/$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/$
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 8-print_array.c
  
0/7 pts
9. strcpy
mandatory
Prototype: char *_strcpy(char *dest, char *src);
Write a function that copies the string pointed to by src, including the terminating null byte (\0), to the buffer pointed to by dest.

Return value: the pointer to dest
FYI: The standard library provides a similar function: strcpy. Run man strcpy to learn more.

julien@ubuntu:~/$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 9-strcpy.c
  
0/8 pts
10. Great leaders are willing to sacrifice the numbers to save the people. Poor leaders sacrifice the people to save the numbers
mandatory
Write a function that convert a string to an integer.

Prototype: int _atoi(char *s);
The number in the string can be preceded by an infinite number of characters
You need to take into account all the - and + signs before the number
If there are no numbers in the string, the function must return 0
You are not allowed to use long
You are not allowed to declare new variables of “type” array
You are not allowed to hard-code special values
We will use the -fsanitize=signed-integer-overflow gcc flag to compile your code.
FYI: The standard library provides a similar function: atoi. Run man atoi to learn more.

julien@ubuntu:~/$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/$ 
Repo:

GitHub repository: holbertonschool-low_level_programming
Directory: pointers_arrays_strings
File: 100-atoi.c
  
0/19 pts


