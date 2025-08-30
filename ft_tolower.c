/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:15:17 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 15:16:18 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}

#include <ctype.h>

int	main(void)
{
	printf("%c", ft_tolower('A'));
	printf("\n");
	printf("%c", ft_tolower('I'));
	printf("\n");
	printf("%c", ft_tolower('M'));
	printf("\n");
	printf("%c", ft_tolower('Z'));
	printf("\n");

	return (0);
}