/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 11:54:46 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 12:52:20 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	len1;
	size_t	len2;
	char	*result;

	if (!s1 || !s2)
		return (NULL);

	len1 = ft_strlen(s1);
	len2 = ft_strlen(s2);

	result = malloc(len1 + len2 + 1);
	if (!result)
		return (NULL);

	ft_memcpy(result, s1, len1);
	ft_memcpy(result + len1, s2, len2 + 1);

	return (result);
}

int	main(void)
{
	char *s1 = "Hello, ";
	char *s2 = "world!";
	char *result;

	result = ft_strjoin(s1, s2);

	if (result != NULL)
	{
		printf("Result: %s\n", result); // Hello, world!
		free(result);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}