#include <stdio.h>

const char *load_mem(void);
const char *load_cpu(void);

int main(void)
{
    printf("BOOT:%s|%s:END\n", load_mem(), load_cpu());

    return 0;
}

const char *load_mem(void)
{
    return "MEM_OK";
}

const char *load_cpu(void)
{
    return "CPU_OK";
}