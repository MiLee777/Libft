/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:53:28 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:35:14 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	int		i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	if (size <= dlen)
		return (size + slen);
	i = 0;
	while (src[i] && dlen + i < size - 1)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	char dest[] = "Hello ";
// 	char src[] = "World!";

// 	size_t res = ft_strlcat(dest, src, 10);
// 	printf("%s", dest);
//     printf("\n");
// 	printf("%zu", res);
// 	printf("\n");

//     size_t result = strlcat(dest, src, 10);
//     printf("%s", dest);
//     printf("\n");
// 	printf("%zu", result);
// 	printf("\n");

// 	return (0);
// }