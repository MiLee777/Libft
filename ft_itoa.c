/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 13:55:03 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 14:52:32 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	long	num;
	int		neg;
	int		len;
	long	temp;
	char	*str;
	int		i;

	num = n;
	neg = (num < 0);
	if (neg)
		num = -num;
	len = 1;
	temp = num;
	while (temp /= 10)
		len++;
	str = malloc(len + neg + 1);
	if (!str)
		return (NULL);
	str[len + neg] = '\0';
	i = len + neg - 1;
	while (i >= neg)
	{
		str[i] = (num % 10) + '0';
		num /= 10;
		i--;
	}
	if (neg)
		str[0] = '-';
	return (str);
}

int	main(void)
{
	int		number;
	char	*str;

	number = -4567;
	str = ft_itoa(number);
	if (str != NULL)
	{
		printf("Result: %s\n", str); // -4567
		free(str);
	}
	else
	{
		printf("Memory allocation failed.\n");
	}
	return (0);
}
