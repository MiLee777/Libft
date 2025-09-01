#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	size;
	char	*dest;

	size = ft_strlen(src);
	dest = (char *)malloc(size * sizeof(char) + 1);
	if (dest == NULL)
		return (0);
	ft_memcpy(dest, src, size);
	dest[size] = '\0';
	return (dest);
}
 
#include <string.h>
#include <assert.h>
#include <stdlib.h>
 
int main(void)
{
    const char *s1 = "String";
    char *s2 = strdup(s1);
    assert(strcmp(s1, s2) == 0);
    free(s2);
}