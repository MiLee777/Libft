/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 09:39:24 by mligai            #+#    #+#             */
/*   Updated: 2025/08/31 14:35:13 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return ((char *)&s[i]);
		}
		i++;
	}
	if (s[i] == '\0')
	{
		return ((char *)&s[i]);
	}
	return (NULL);
}

#include <string.h>

int	main(void)
{
	char str[] = "Hello, World!";
	printf("%s", strchr(str, 'e'));
	printf("%c", '\n');
	printf("%s", strchr(str, '\0'));
	printf("%c", '\n');
	printf("%s", ft_strchr(str, 'e'));
	printf("%c", '\n');
	printf("%s", strchr(str, '\0'));
	printf("%c", '\n');
	return (0);
}