#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Sucess)
 */
int main(void)
}
int size1, size2, size3, size4, size5;
size1 = sizeof(char);
size2 = sizeof(int);
size3 = sizeof(long int);
size4 = sizeof(long long int);
size5 = sizeof(float);

printf("Size of a char: %d byte(s)\n", size1);
printf("Size of a int: %d byte(s)\n", size2);
printf("Size of a long int: %d byte(s)\n", size3);
printf("Size of a long long int: %d byte(s)\n", size4);
printf("Size of a float: %d byte(s)\n", size5);

return (0);

}
