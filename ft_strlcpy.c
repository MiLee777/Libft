/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:47:11 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 14:42:05 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	while (i < size - 1)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';

	return i;
}

#include <string.h>

int	main(void)
{
	char dest[30];
	char src[] = "1111 2222 3333 4444";

	ft_strlcpy(dest, src, sizeof(dest));
	printf("%s", dest);
	printf("\n");

	return (0);
}