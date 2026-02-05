#include <stdio.h>
#include <string.h>

int main() {
    char s[200];
    gets(s);

    if (strncmp(s, "//", 2) == 0 || 
       (strncmp(s, "/*", 2) == 0 && strstr(s, "*/")))
        printf("Comment");
    else
        printf("Not a Comment");

    return 0;
}

