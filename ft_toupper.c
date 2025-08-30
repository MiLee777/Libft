/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 15:01:27 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 15:14:42 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

#include <ctype.h>

int	main(void)
{
	printf("%c", ft_toupper('a'));
	printf("\n");
	printf("%c", ft_toupper('n'));
	printf("\n");
	printf("%c", ft_toupper('y'));
	printf("\n");
	printf("%c", ft_toupper('z'));
	printf("\n");

	return (0);
}