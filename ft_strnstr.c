/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 12:14:57 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:44:32 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	int	i;
	int	j;

	if (*little == '\0')
	{
		return ((char *)big);
	}
	i = 0;
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (big[i + j] == little[j] && (i + j) < len)
		{
			j++;
			if (little[j] == '\0')
			{
				return ((char *)&big[i]);
			}
		}
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>

// int	main(void)
// {
// 	const char *largestring = "Foo Bar Baz";
// 	const char *smallstring = "Bar";

// 	printf("%s\n", strnstr(largestring, smallstring, 10));
// 	printf("%s\n", ft_strnstr(largestring, smallstring, 10));

// 	return (0);
// }