#include <stdio.h>
#include <assert.h>
#include <stdlib.h>

enum StrFuncStatus {
    OK = 0,
    ERROR = -1,
};

int myPuts(const char *str);
unsigned long myStrlen(const char *str);
char *myStrcpy(char *cpyTo, const char *cpyFrom);
char *myStrncpy(char *strFrom, const char *strTo, unsigned long lenCpy);
char *myStrcat(char *str1, char *str2);
char *myStrncat(char *str1, char *str2, unsigned long lenCat);
char *myFgets(char *str, int size, FILE *stream);
char *myStrdup(const char *str);
const char *myStrchr(const char *str1, int ch);
int myStrcmp(const char *str1, const char *str2);
