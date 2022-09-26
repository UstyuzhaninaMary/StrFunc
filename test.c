#include "test.h"

int goTest (const char *str) {

    assert(str != NULL);

    char str1[] = "AAAf";
    char str2[] = "AAAc";
    char testStr0[100];
    char testStr1[100];
    
    //myStrcpy(testStr0, str);
    // goPuts(str);
    // goStrlen(str);
    // goStrcpy(str);
    // goStrncpy(str);
    //goStrcat(testStr0, str1);
    //goStrncat(testStr0, str1);
    //gofgetc(testStr0, testStr1);
    //goStrdup(str);
    //goStrchr(testStr0);       //have problem!!!
    goStrcmp(str1, str2);

    return OK;
}

int goPuts(const char *str) {

    assert(str != NULL);
    printf("StdFunc puts():\n");
    puts(str);
    printf("My func puts():\n");
    myPuts(str);
    printf("\n");

    return OK;
}

int goStrlen(const char *str) {

    assert(str != NULL);
    printf("StdFunc strlen():\n");
    printf("%lu \n",strlen(str));
    printf("My func strlen():\n");
    printf("%lu \n", myStrlen(str));
    printf("\n");

    return OK;;
}

int goStrcpy(const char *strFrom) {
    
    assert(strFrom != NULL);
    char chgStr1[100];
    char chgStr2[100];

    printf("StrFromBeforeChange:\n");
    myPuts(strFrom);
    
    strcpy(chgStr1, strFrom);
    myStrcpy(chgStr2, strFrom);

    printf("After strcpy:\n");
    puts(chgStr1);
    printf("After myStrcpy:\n");
    puts(chgStr2);
    printf("\n");

    return OK;
}

int goStrncpy(const char *strFrom) {

    assert(strFrom != NULL);

    
    char chgStr1[100] = {"fghjkldfghjkdfghjkldfghjk"};
    char chgStr2[100] = {"fghjkldfghjkdfghjkldfghjk"};
    int lenCpy = 10;

    printf("StrFromBeforeChange:\n");
    myPuts(strFrom);
    
    strncpy(chgStr1, strFrom, lenCpy);
    myStrncpy(chgStr2, strFrom, lenCpy);

    printf("After strncpy():\n");
    puts(chgStr1);
    printf("After myStrncpy():\n");
    puts(chgStr2);
    printf("\n");

    return OK;
}

int goStrcat(char *str1, char *str2 ) {

    assert(str1 != NULL);
    assert(str2 != NULL);
    printf("First str. Before strcat():\n");
    myPuts(str1);
    printf("Second str. Befire strcat():\n");
    myPuts(str2);
    
    char s1[100];
    char s2[100];
    myStrcpy(s1, str1);
    myStrcpy(s2, str2);
    
    strcat(s1, s2);
    myStrcat(str1, str2);

    printf("After strcat():\n");
    puts(s1);
    printf("After myStrcat():\n");
    puts(str1);
    printf("\n");

    return OK;
}

int goStrncat(char *str1, char *str2 ) {

    assert(str1 != NULL);
    assert(str2 != NULL);
    int lenCat = 10;

    printf("First str. Before strcat():\n");
    myPuts(str1);
    printf("Second str. Befire strcat():\n");
    myPuts(str2);

    char s1[100];
    char s2[100];
    myStrcpy(s1, str1);
    myStrcpy(s2, str2);
    
    strncat(s1, s2, lenCat);
    myStrncat(str1, str2, lenCat);

    printf("After strcat():\n");
    puts(s1);
    printf("After myStrcat():\n");
    puts(str1);
    printf("\n");

    return OK;
}

int gofgetc(char *str1, char *str2) {

    assert(str1 != NULL);
    assert(str2 != NULL);

    int size = 50;
    int gofgetc(char *str1, char *str2);

    FILE *fp1;
    if ((fp1 = fopen("test.txt", "r")) == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    FILE *fp2;
    if ((fp2 = fopen("test.txt", "r")) == NULL) {
        printf("Cannot open file.\n");
        return 1;
    }

    fgets(str1, size, fp1);
    myFgets(str2, size, fp2);

    printf("After fgets():\n");
    puts(str1);
    printf("After myFgets():\n");
    puts(str2);
    printf("\n");

    fclose(fp1);
    fclose(fp2);

    return 0;
}

int goStrdup(const char *str) {

    assert(str != NULL);

    int lenCat = 10;

    printf("Before strdup():\n");
    myPuts(str);

    char *strD1 = strdup(str);
    char *strD2 = myStrdup(str);

    printf("After strdup():\n");
    puts(strD1);
    printf("After myStrdup():\n");
    puts(strD2);
    printf("\n");

    free(strD1);
    free(strD2);

    return OK;
}

int goStrchr(const char *str) {   ////have some problem

    assert(str != NULL);
    char ch = 'e';
    char *retCh1 = NULL;
    const char *retCh2 = NULL;
 
    printf("Строка: %s, cимвол: %c \n", str, ch);
    printf("-------\n");

    retCh1 = strchr(str, ch);
    retCh2 = myStrchr(str, ch);

    printf("Str from that symbol after strchr(): \n ");
    myPuts(retCh1);

    printf("Str from that symbol after myStrchr(): \n");
    myPuts(retCh2);


    return OK;
}

int goStrcmp(const char *str1, const char *str2) {

    assert(str1 != NULL);
    assert(str2 != NULL);

    printf("First str: %s \n", str1);
    printf("Second str: %s \n", str2);

    printf("Result of strcmp(): %d \n", strcmp(str1, str2));
    printf("Result of myStrcmp(): %d \n", myStrcmp(str1, str2));

    return OK;
}