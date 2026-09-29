#include <stdio.h>
#include <string.h>

int main(void)
{
    char hostname[] = "fedora  \0", name[] = "Daniil   \0", group[] = "IS-642  \0";
    int len1 = strlen(name), len2 = strlen(hostname) + strlen(group);

    printf("%s{%d}\n", name, len1);
    printf("%s%s{%d}\n", group, hostname, len2);

    return 0;
}