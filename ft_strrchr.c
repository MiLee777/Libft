/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 10:37:27 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:39:31 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last;

	i = 0;
	last = NULL;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			last = (char *)&s[i];
		}
		i++;
	}
	if (c == '\0')
	{
		return ((char *)&s[i]);
	}
	return (last);
}

// #include <string.h>

// int	main(void)
// {
// 	char str[] = "Hello, Weorld!";
// 	printf("%s", strrchr(str, 'o'));
// 	printf("%c", '\n');
// 	printf("%s", strrchr(str, '\0'));
// 	printf("%c", '\n');
// 	printf("%s", ft_strrchr(str, 'o'));
// 	printf("%c", '\n');
// 	printf("%s", ft_strrchr(str, '\0'));
// 	printf("%c", '\n');
// 	return (0);
// }