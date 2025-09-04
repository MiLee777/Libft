#include "libft.h"

static int  word_count(const char *s, char c)
{
    int count = 0;
    int in_word = 0;

    while (*s)
    {
        if (*s != c && !in_word)
        {
            in_word = 1;
            count++;
        }
        else if (*s == c)
            in_word = 0;
        s++;
    }
    return count;
}

static char *word_dup(const char *start, int len)
{
    char *word = (char *)malloc(sizeof(char) * (len + 1));
    if (!word)
        return NULL;
    for (int i = 0; i < len; i++)
        word[i] = start[i];
    word[len] = '\0';
    return word;
}

char **ft_split(char const *s, char c)
{
    if (!s)
        return NULL;

    int i = 0;
    int j = 0;
    int start = 0;
    char **result = (char **)malloc(sizeof(char *) * (word_count(s, c) + 1));
    if (!result)
        return NULL;

    while (s[i])
    {
        if (s[i] != c && (i == 0 || s[i - 1] == c))
            start = i;
        if (s[i] != c && (s[i + 1] == c || s[i + 1] == '\0'))
        {
            result[j] = word_dup(s + start, i - start + 1);
            if (!result[j])
            {
                // Очистка ранее выделенной памяти
                while (j-- > 0)
                    free(result[j]);
                free(result);
                return NULL;
            }
            j++;
        }
        i++;
    }
    result[j] = NULL; // конец массива
    return result;
}

void print_split(char **arr)
{
    int i = 0;
    while (arr[i])
    {
        printf("word[%d]: '%s'\n", i, arr[i]);
        i++;
    }
}

void free_split(char **arr)
{
    int i = 0;
    while (arr[i])
    {
        free(arr[i]);
        i++;
    }
    free(arr);
}

int main(void)
{
    char **result;

    // Тест 1: обычная строка
    result = ft_split("hello world test", ' ');
    printf("Test 1:\n");
    print_split(result);
    free_split(result);

    // Тест 2: несколько разделителей подряд
    result = ft_split("a,,b,c", ',');
    printf("\nTest 2:\n");
    print_split(result);
    free_split(result);

    // Тест 3: пустая строка
    result = ft_split("", ',');
    printf("\nTest 3:\n");
    print_split(result);
    free_split(result);

    // Тест 4: строка без разделителей
    result = ft_split("nodelem", ',');
    printf("\nTest 4:\n");
    print_split(result);
    free_split(result);

    return 0;
}