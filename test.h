#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>
#include "strFunc.h"

enum testStatus {
    TESTOK = 0,
    TESTERR = -1,
};

int goTest (const char *str);
int goPuts(const char *str);
int goStrlen(const char *str);
int goStrcpy(const char *str);
int goStrncpy(const char *strFrom);
int goStrcat(char *str1, char *str2 );
int goStrncat(char *str1, char *str2);
int gofgetc(char *str1, char *str2);
int goStrdup(const char *str);
int goStrchr(const char *str1);
int goStrcmp(const char *str1, const char *str2);
