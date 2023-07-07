#ifndef __MAIN_H__
#define __MAIN_H__

#include <stdlib.h>

void *malloc_checked(unsigned int b);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);
int *array_range(int min, int max);
int _putchar(char c);

char *_memset(char *s, char b, unsigned int n);
char *_strcat(char *dest, char *src);
int _strlen(char *s);
char *_strncat(char *dest, char *src, int n);

#endif
