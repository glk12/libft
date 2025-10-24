#include <stdio.h>
#include <string.h>
#include "libft.h"
int main() {
    const char *text = "Hello, world!";
    const char *result = ft_strnstr(text, "world", 10);
    
    if (result)
        printf("Found: %s\n", result);
    else
        printf("Not found\n");

    return 0;
}
