/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:07:11 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 14:09:49 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;
	size_t			i;

	d = (unsigned char *)dest;
	s = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
}

#include <string.h>

int	main(void)
{
	char dest[] = "Hello 123123123123";
	char src[] = "1111 2222 3333 4444";

	memcpy(src + 5, src, 20);

	printf("%s", src);
	printf("\n");

	return (0);
}