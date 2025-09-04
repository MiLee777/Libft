/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 12:52:50 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 13:52:09 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	result_len;
	char	*result;

	if (!s1 || !set)
		return (NULL);

	start = 0;
	end = ft_strlen(s1);

	while (s1[start] && ft_strchr(set, s1[start]))
		start++;

	while (end > start && ft_strchr(set, s1[end - 1]))
		end--;

	result_len = end - start;
	result = malloc(result_len + 1);
	if (!result)
		return (NULL);

	ft_memcpy(result, s1 + start, result_len);
	result[result_len] = '\0';

	return (result);
}

int	main(void)
{
	char *original = "   \t\nHello world!  \n ";
	char *trim_set = " \n\t";
	char *trimmed;

	trimmed = ft_strtrim(original, trim_set);

	if (trimmed != NULL)
	{
		printf("Result after trim: \"%s\"\n", trimmed); // Hello world!
		free(trimmed);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}

	return (0);
}