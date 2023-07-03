#ifndef MAIN_HEADER
#define MAIN_HEADER

char *_memset(char *s, char b, unsigned int n);
char *_memmcpy(char *dest, char *src, unsigned int i);
int _putchar(char c);
char *_strchr(char *s, char c);
unsigned int _strspn(char *s, char *accept);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
void peint_chessboard(char (*a)[8]);

#endif
