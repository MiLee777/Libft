/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:03:51 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:03:51 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*result;

	result = (void *)malloc(nmemb * size);
	if (result == NULL)
		return (NULL);
	ft_bzero(result, (nmemb * size));
	return (result);
}

// int	main(void)
// {
// 	int *p1 = ft_calloc(4, sizeof(int));
// 	int *p2 = ft_calloc(1, sizeof(int[4]));
// 	int *p3 = ft_calloc(4, sizeof *p3);

// 	if (p2)
// 	{
// 		for (int n = 0; n < 4; ++n)
// 			printf("p2[%d] == %d\n", n, p2[n]);
// 	}

// 	free(p1);
// 	free(p2);
// 	free(p3);
// }