/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:29:38 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 14:09:57 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
}

int	main(void)
{
	char str[10];

	ft_memset(str, 'A', 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return (0);
}