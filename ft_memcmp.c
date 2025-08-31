/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:57:28 by mligai            #+#    #+#             */
/*   Updated: 2025/08/31 14:22:37 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;
	int				i;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (ptr1[i] != ptr2[i])
		{
			return ((unsigned char)ptr1[i] - (unsigned char)ptr2[i]);
		}
		i++;
	}
	return (0);
}

#include "string.h"

int	main(void)
{
	char s1[] = "Helllllloo";
	char s2[] = "Hello";
	char s3[] = "Hello";
	char s4[] = "Aoooo";

	printf("%d\n", memcmp(s1, s2, 20));
	printf("%d\n", memcmp(s2, s3, 6));
	printf("%d\n", memcmp(s1, s4, 10));

	printf("%d\n", ft_memcmp(s1, s2, 20));
	printf("%d\n", ft_memcmp(s2, s3, 6));
	printf("%d\n", ft_memcmp(s1, s4, 10));
	return (0);
}