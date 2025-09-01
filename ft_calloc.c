#include "libft.h"

void *ft_calloc(size_t nelem , size_t elsize ) {
void	*result;

	result = (void *)malloc(nelem * elsize);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, (nelem * elsize));
	return (result);
}

int main(void)
{
    int* p1 = ft_calloc(4, sizeof(int));    // allocate and zero out an result of 4 int
    int* p2 = ft_calloc(1, sizeof(int[4])); // same, naming the result type directly
    int* p3 = ft_calloc(4, sizeof *p3);     // same, without repeating the type name
 
    if (p2)
    {
        for (int n = 0; n < 4; ++n) // print the result
            printf("p2[%d] == %d\n", n, p2[n]);
    }
 
    free(p1);
    free(p2);
    free(p3);
}