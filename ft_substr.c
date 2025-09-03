/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 10:08:02 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 13:56:24 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	int		s_len;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start + len > s_len)
	{
		len = s_len - start;
	}
	substr = malloc(len + 1);
	if (!substr)
		return (NULL);
	ft_memcpy(substr, s + start, len);
	substr[len] = '\0';
	return (substr);
}

int	main(void)
{
	char *str = "Hello, World!";
	char *sub;

	sub = ft_substr(str, 7, 5);
	if (sub)
	{
		printf("Substring: '%s'\n", sub);
		free(sub);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}