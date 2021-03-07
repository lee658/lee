#include <stdio.h>

int main(void)
{
    int a = 0;
    a = printf("%d\n", 0);
    printf("hello world");
    
    printf("hello world'");
    a = printf("%d\\n\n", a);
    
    printf("a\\b\\c\\\n");
    printf("1\t2\t3\n");
    printf("1\t2\t3\n\b");
    return 0;
}

