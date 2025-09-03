/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:13:00 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:13:00 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	size;
	char	*dest;

	if (s == NULL)
		return (NULL);

	size = ft_strlen(s);
	dest = malloc(size + 1);
	if (dest == NULL)
		return (NULL);
	ft_memcpy(dest, s, size + 1);
	return (dest);
}

// #include <string.h>


// int	main(void)
// {
// 	const char *s1 = "Hello, World!";
// 	char *copy = ft_strdup(s1);

// 	printf("orig: %s\ncopy: %s\n", s1, copy);
// 	free(copy);
// 	return 0;
// }