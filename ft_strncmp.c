/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/31 11:08:30 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:40:23 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (i < n && (s1[i] != '\0' || s2[i] != '\0'))
	{
		if (s1[i] != s2[i])
		{
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		}
		i++;
	}
	return (0);
}

// #include <string.h>

// int	main(void)
// {
// 	char	s1[] = "Helllllloo";
// 	char	s2[] = "Hello";
// 	char	s3[] = "Hello";
// 	char	s4[] = "Aoooo";

// 	printf("%d\n", strncmp(s1, s2, 20));
// 	printf("%d\n", strncmp(s2, s3, 6));
// 	printf("%d\n", strncmp(s1, s4, 10));
// 	printf("%d\n", ft_strncmp(s1, s2, 20));
// 	printf("%d\n", ft_strncmp(s2, s3, 6));
// 	printf("%d\n", ft_strncmp(s1, s4, 10));
// }
