#include <stdio.h>

int main() {
    char c, d;
    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\t' || c == '\n')
            continue;
        if (c == '/') {
            d = getchar();
            if (d == '/') { while (getchar() != '\n'); }
            else if (d == '*') {
                while ((c = getchar()) != EOF)
                    if (c == '*' && getchar() == '/') break;
            } else {
                putchar(c); putchar(d);
            }
        } else
            putchar(c);
    }
    return 0;
}

