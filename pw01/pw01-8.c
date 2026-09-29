#include <stdio.h>

char pulse(void);
int main(void)
{
    printf("%c\n", pulse());
    printf("%c%c\n", pulse(), pulse());
    printf("%c%c%c\n", pulse(), pulse(), pulse());

    return 0;
}

char pulse(void)
{
    return '@';
}