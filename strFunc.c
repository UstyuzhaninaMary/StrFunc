#include "strFunc.h"

int myPuts(const char * str) {

    assert(str != NULL);

    int i = 0;
    char InpCh = str[i];

    while (InpCh != '\0') {

        putchar(InpCh);
        InpCh = str[++i];
    }
    putchar('\n');

    return OK;
}

unsigned long myStrlen(const char *str) {

    assert(str != NULL);

    unsigned long number = 0;

    while (str[number] != '\0') {
        
        number++;
    }

    return number;
}

char *myStrcpy(char *strTo, const char *strFrom) {

    assert(strFrom != NULL);
    assert(strTo != NULL);

    int i = 0;
    while (strFrom[i] != '\0') {

        strTo[i] = strFrom[i];
        i++;
    }
    
    strTo[i] = '\0';

    return strTo;    
}

char *myStrncpy(char *strTo, const char *strFrom, unsigned long lenCpy) {

    assert(strFrom != NULL);
    assert(strTo != NULL);

    int i = 0;
    while ((strFrom[i] != '\0') && (i < lenCpy)) {

        strTo[i] = strFrom[i];
        i++;
    }

    if(strFrom[i] == '\0') {

        strTo[i] = '\0';
    }

    return strTo;    
}

char *myStrcat(char *str1, char *str2) {

    assert(str1 != NULL);
    assert(str2 != NULL);

    // printf("---------\n");
    // myPuts(str1);
    // myPuts(str2);

    int x = 0;
    int y = 0;

    while (str1[x] != '\0'){
        
        x++;
    }
    while (str2[y] != '\0') {
        
        str1[x] = str2[y];
        y++;
        x++;
    }
    
    str1[x] = '\0';
    
    // printf("---------\n");
    // myPuts(str1);
    // printf("---------\n");

    return str1;
}

char *myStrncat(char *str1, char *str2, unsigned long lenCat) {
    
    assert(str1 != NULL);
    assert(str2 != NULL);

    int x = 0;
    int y = 0;

    while (str1[x] != '\0'){
        
        x++;
    }
    while ((str2[y] != '\0') && (y < lenCat)) {
        
        str1[x] = str2[y];
        y++;
        x++;
    }
    
    str1[x] = '\0';
    
    // printf("---------\n");
    // myPuts(str1);
    // printf("---------\n");

    return str1;
}

char *myFgets(char *str, int size, FILE *stream) {
    
    int i = 0;
    char total;
    
    while((total = getc(stream)) && (i < (size - 1)) && (total != EOF)) {
        
        str[i] = total;
        i++;
    }

    str[i] = '\0';

    return str;
}

char *myStrdup(const char *str) {

    char *newStr = malloc(myStrlen(str));
    myStrcpy(newStr, str);

    return newStr;
}

char *myStrchr(const char *str1, int ch) {

    assert(str1 != NULL);
    
    int i;

    while ((str1[i] != ch) && (i < myStrlen(str1) - 1)) {
        i++;
    }
    if(str1[i] == ch) {
        return &str1[i];
    }
    return NULL;
}

int myStrcmp(const char *str1, const char *str2) {
    
    assert(str1 != NULL);
    assert(str2 != NULL);

    int i;
    char ch1;
    char ch2;
    
    for(i = 0; ((ch1 = str1[i]) != '\0') &&
               ((ch2 = str2[i]) != '\0'); i++) {
        
        if(ch1 != ch2) {
            return (ch1 - ch2);
        }
    }

    return str1[i] - str2[i];
}