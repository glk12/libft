#include "libft.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

#define GREEN "\033[0;32m"
#define RED "\033[0;31m"
#define BLUE "\033[0;34m"
#define YELLOW "\033[0;33m"
#define RESET "\033[0m"

// Funções auxiliares para testes
void del_content(void *content)
{
    free(content);
}

void *duplicate_content(void *content)
{
    return strdup((char *)content);
}

void print_content(void *content)
{
    printf("%s ", (char *)content);
}

void to_uppercase(void *content)
{
    char *str = (char *)content;
    while (*str)
    {
        if (*str >= 'a' && *str <= 'z')
            *str = *str - 32;
        str++;
    }
}

// ============ TESTES PARTE 1 ============

void test_ft_isalpha(void)
{
    printf(BLUE "Teste ft_isalpha: " RESET);
    if (ft_isalpha('a') && ft_isalpha('Z') && !ft_isalpha('1') && !ft_isalpha('@'))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_isdigit(void)
{
    printf(BLUE "Teste ft_isdigit: " RESET);
    if (ft_isdigit('0') && ft_isdigit('9') && !ft_isdigit('a') && !ft_isdigit('@'))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_isalnum(void)
{
    printf(BLUE "Teste ft_isalnum: " RESET);
    if (ft_isalnum('a') && ft_isalnum('5') && !ft_isalnum('@') && !ft_isalnum(' '))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_isascii(void)
{
    printf(BLUE "Teste ft_isascii: " RESET);
    if (ft_isascii(0) && ft_isascii(127) && !ft_isascii(128) && !ft_isascii(-1))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_isprint(void)
{
    printf(BLUE "Teste ft_isprint: " RESET);
    if (ft_isprint(' ') && ft_isprint('~') && !ft_isprint('\t') && !ft_isprint(127))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strlen(void)
{
    printf(BLUE "Teste ft_strlen: " RESET);
    if (ft_strlen("Hello") == 5 && ft_strlen("") == 0 && ft_strlen("42") == 2)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_toupper(void)
{
    printf(BLUE "Teste ft_toupper: " RESET);
    if (ft_toupper('a') == 'A' && ft_toupper('Z') == 'Z' && ft_toupper('1') == '1')
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_tolower(void)
{
    printf(BLUE "Teste ft_tolower: " RESET);
    if (ft_tolower('A') == 'a' && ft_tolower('z') == 'z' && ft_tolower('1') == '1')
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strchr(void)
{
    printf(BLUE "Teste ft_strchr: " RESET);
    char *str = "Hello World";
    if (ft_strchr(str, 'W') == str + 6 && ft_strchr(str, 'x') == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strrchr(void)
{
    printf(BLUE "Teste ft_strrchr: " RESET);
    char *str = "Hello World";
    if (ft_strrchr(str, 'l') == str + 9 && ft_strrchr(str, 'x') == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strncmp(void)
{
    printf(BLUE "Teste ft_strncmp: " RESET);
    if (ft_strncmp("Hello", "Hello", 5) == 0 && ft_strncmp("Hello", "Help", 3) == 0 && ft_strncmp("Hello", "Help", 4) != 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strnstr(void)
{
    printf(BLUE "Teste ft_strnstr: " RESET);
    char *str = "Hello World";
    if (ft_strnstr(str, "World", 11) == str + 6 && ft_strnstr(str, "World", 5) == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_atoi(void)
{
    printf(BLUE "Teste ft_atoi: " RESET);
    if (ft_atoi("42") == 42 && ft_atoi("-42") == -42 && ft_atoi("  123") == 123)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

// ============ TESTES MEMÓRIA ============

void test_ft_memset(void)
{
    printf(BLUE "Teste ft_memset: " RESET);
    char buffer[10];
    ft_memset(buffer, 'A', 5);
    if (buffer[0] == 'A' && buffer[4] == 'A')
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_bzero(void)
{
    printf(BLUE "Teste ft_bzero: " RESET);
    char buffer[10] = "Hello";
    ft_bzero(buffer, 3);
    if (buffer[0] == 0 && buffer[2] == 0 && buffer[3] == 'l')
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_memcpy(void)
{
    printf(BLUE "Teste ft_memcpy: " RESET);
    char src[] = "Hello";
    char dest[10];
    ft_memcpy(dest, src, 5);
    if (strncmp(dest, "Hello", 5) == 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_memmove(void)
{
    printf(BLUE "Teste ft_memmove: " RESET);
    char buffer[] = "Hello World";
    ft_memmove(buffer + 2, buffer, 5);
    if (strncmp(buffer + 2, "Hello", 5) == 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_memchr(void)
{
    printf(BLUE "Teste ft_memchr: " RESET);
    char buffer[] = "Hello";
    if (ft_memchr(buffer, 'l', 5) == buffer + 2 && ft_memchr(buffer, 'x', 5) == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_memcmp(void)
{
    printf(BLUE "Teste ft_memcmp: " RESET);
    if (ft_memcmp("Hello", "Hello", 5) == 0 && ft_memcmp("Hello", "Help", 4) != 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

// ============ TESTES STRING ============

void test_ft_strlcpy(void)
{
    printf(BLUE "Teste ft_strlcpy: " RESET);
    char dest[10];
    size_t len = ft_strlcpy(dest, "Hello", 10);
    if (len == 5 && strcmp(dest, "Hello") == 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strlcat(void)
{
    printf(BLUE "Teste ft_strlcat: " RESET);
    char dest[20] = "Hello ";
    size_t len = ft_strlcat(dest, "World", 20);
    if (len == 11 && strcmp(dest, "Hello World") == 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_calloc(void)
{
    printf(BLUE "Teste ft_calloc: " RESET);
    char *ptr = (char *)ft_calloc(5, sizeof(char));
    if (ptr && ptr[0] == 0 && ptr[4] == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(ptr);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strdup(void)
{
    printf(BLUE "Teste ft_strdup: " RESET);
    char *dup = ft_strdup("Hello");
    if (dup && strcmp(dup, "Hello") == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(dup);
    }
    else
        printf(RED "KO\n" RESET);
}

// ============ TESTES PARTE 2 ============

void test_ft_substr(void)
{
    printf(BLUE "Teste ft_substr: " RESET);
    char *sub = ft_substr("Hello World", 6, 5);
    if (sub && strcmp(sub, "World") == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(sub);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strjoin(void)
{
    printf(BLUE "Teste ft_strjoin: " RESET);
    char *joined = ft_strjoin("Hello ", "World");
    if (joined && strcmp(joined, "Hello World") == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(joined);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_ft_strtrim(void)
{
    printf(BLUE "Teste ft_strtrim: " RESET);
    char *trimmed = ft_strtrim("  Hello  ", " ");
    if (trimmed && strcmp(trimmed, "Hello") == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(trimmed);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_ft_split(void)
{
    printf(BLUE "Teste ft_split: " RESET);
    char **split = ft_split("Hello,World,42", ',');
    if (split && split[0] && strcmp(split[0], "Hello") == 0 && split[1] && strcmp(split[1], "World") == 0)
    {
        printf(GREEN "OK\n" RESET);
        for (int i = 0; split[i]; i++)
            free(split[i]);
        free(split);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_ft_itoa(void)
{
    printf(BLUE "Teste ft_itoa: " RESET);
    char *str = ft_itoa(42);
    char *str2 = ft_itoa(-42);
    if (str && strcmp(str, "42") == 0 && str2 && strcmp(str2, "-42") == 0)
    {
        printf(GREEN "OK\n" RESET);
        free(str);
        free(str2);
    }
    else
        printf(RED "KO\n" RESET);
}

char test_mapi_func(unsigned int i, char c)
{
    return c + i;
}

void test_ft_strmapi(void)
{
    printf(BLUE "Teste ft_strmapi: " RESET);
    char *result = ft_strmapi("abc", test_mapi_func);
    if (result && result[0] == 'a' && result[1] == 'c' && result[2] == 'e')
    {
        printf(GREEN "OK\n" RESET);
        free(result);
    }
    else
        printf(RED "KO\n" RESET);
}

void test_striteri_func(unsigned int i, char *c)
{
    *c = *c + i;
}

void test_ft_striteri(void)
{
    printf(BLUE "Teste ft_striteri: " RESET);
    char str[] = "abc";
    ft_striteri(str, test_striteri_func);
    if (str[0] == 'a' && str[1] == 'c' && str[2] == 'e')
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_putchar_fd(void)
{
    printf(BLUE "Teste ft_putchar_fd: " RESET);
    fflush(stdout);
    ft_putchar_fd('A', 1);
    printf("\n ");
}

void test_ft_putstr_fd(void)
{
    printf(BLUE "Teste ft_putstr_fd: " RESET);
    fflush(stdout);
    ft_putstr_fd("Hello", 1);
    printf("\n");
}

void test_ft_putendl_fd(void)
{
    printf(BLUE "Teste ft_putendl_fd: " RESET);
    fflush(stdout);
    ft_putendl_fd("World", 1);
}
void test_ft_putnbr_fd(void)
{
    printf(BLUE "Teste ft_putnbr_fd: " RESET);
    fflush(stdout);
    ft_putnbr_fd(42, 1);
    printf("\n");
}

// ============ TESTES BONUS ============

void test_ft_lstnew(void)
{
    printf(BLUE "Teste ft_lstnew: " RESET);
    char *content = strdup("Hello");
    t_list *node = ft_lstnew(content);
    if (node && node->content == content && node->next == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
    free(content);
    free(node);
}

void test_ft_lstadd_front(void)
{
    printf(BLUE "Teste ft_lstadd_front: " RESET);
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(strdup("First"));
    t_list *node2 = ft_lstnew(strdup("Second"));

    ft_lstadd_front(&list, node1);
    ft_lstadd_front(&list, node2);

    if (list == node2 && list->next == node1)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);

    ft_lstclear(&list, del_content);
}

void test_ft_lstsize(void)
{
    printf(BLUE "Teste ft_lstsize: " RESET);
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("1")));
    ft_lstadd_back(&list, ft_lstnew(strdup("2")));
    ft_lstadd_back(&list, ft_lstnew(strdup("3")));

    if (ft_lstsize(list) == 3 && ft_lstsize(NULL) == 0)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);

    ft_lstclear(&list, del_content);
}

void test_ft_lstlast(void)
{
    printf(BLUE "Teste ft_lstlast: " RESET);
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(strdup("First"));
    t_list *node2 = ft_lstnew(strdup("Last"));

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);

    if (ft_lstlast(list) == node2 && ft_lstlast(NULL) == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);

    ft_lstclear(&list, del_content);
}

void test_ft_lstadd_back(void)
{
    printf(BLUE "Teste ft_lstadd_back: " RESET);
    t_list *list = NULL;
    t_list *node1 = ft_lstnew(strdup("First"));
    t_list *node2 = ft_lstnew(strdup("Last"));

    ft_lstadd_back(&list, node1);
    ft_lstadd_back(&list, node2);

    if (ft_lstlast(list) == node2 && ft_lstsize(list) == 2)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);

    ft_lstclear(&list, del_content);
}

void test_ft_lstdelone(void)
{
    printf(BLUE "Teste ft_lstdelone: " RESET);
    char *content = strdup("Delete me");
    t_list *node = ft_lstnew(content);
    ft_lstdelone(node, del_content);
    printf(GREEN "OK\n" RESET);
}

void test_ft_lstclear(void)
{
    printf(BLUE "Teste ft_lstclear: " RESET);
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("1")));
    ft_lstadd_back(&list, ft_lstnew(strdup("2")));
    ft_lstadd_back(&list, ft_lstnew(strdup("3")));

    ft_lstclear(&list, del_content);

    if (list == NULL)
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);
}

void test_ft_lstiter(void)
{
    printf(BLUE "Teste ft_lstiter: " RESET);
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("Hello ")));
    ft_lstadd_back(&list, ft_lstnew(strdup("World!")));

    ft_lstiter(list, print_content);
    printf(GREEN " OK\n" RESET);
    ft_lstclear(&list, del_content);
}

void test_ft_lstmap(void)
{
    printf(BLUE "Teste ft_lstmap: " RESET);
    t_list *list = NULL;
    ft_lstadd_back(&list, ft_lstnew(strdup("Test1")));
    ft_lstadd_back(&list, ft_lstnew(strdup("Test2")));

    t_list *mapped = ft_lstmap(list, duplicate_content, del_content);

    if (mapped && ft_lstsize(mapped) == ft_lstsize(list))
        printf(GREEN "OK\n" RESET);
    else
        printf(RED "KO\n" RESET);

    ft_lstclear(&list, del_content);
    ft_lstclear(&mapped, del_content);
}

int main(void)
{
    printf(YELLOW "\n════════════════════════════════════════\n" RESET);
    printf(YELLOW "         TESTES COMPLETOS LIBFT\n" RESET);
    printf(YELLOW "════════════════════════════════════════\n\n" RESET);

    test_ft_isalpha();
    test_ft_isdigit();
    test_ft_isalnum();
    test_ft_isascii();
    test_ft_isprint();
    test_ft_strlen();
    test_ft_toupper();
    test_ft_tolower();
    test_ft_strchr();
    test_ft_strrchr();
    test_ft_strncmp();
    test_ft_strnstr();
    test_ft_atoi();
    test_ft_memset();
    test_ft_bzero();
    test_ft_memcpy();
    test_ft_memmove();
    test_ft_memchr();
    test_ft_memcmp();
    test_ft_strlcpy();
    test_ft_strlcat();
    test_ft_calloc();
    test_ft_strdup();
    test_ft_substr();
    test_ft_strjoin();
    test_ft_strtrim();
    test_ft_split();
    test_ft_itoa();
    test_ft_strmapi();
    test_ft_striteri();

    printf(YELLOW "\n=== FUNÇÕES DE OUTPUT ===\n" RESET);
    test_ft_putchar_fd();
    test_ft_putstr_fd();
    test_ft_putendl_fd();
    test_ft_putnbr_fd();

    printf(YELLOW "\n=== BONUS ===\n" RESET);
    test_ft_lstnew();
    test_ft_lstadd_front();
    test_ft_lstsize();
    test_ft_lstlast();
    test_ft_lstadd_back();
    test_ft_lstdelone();
    test_ft_lstclear();
    test_ft_lstiter();
    test_ft_lstmap();

    printf(YELLOW "\n════════════════════════════════════════\n" RESET);
    printf(YELLOW "         TESTES CONCLUÍDOS!\n" RESET);
    printf(YELLOW "════════════════════════════════════════\n\n" RESET);

    return 0;
}
