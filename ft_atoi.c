/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/03 09:46:46 by mligai            #+#    #+#             */
/*   Updated: 2025/09/03 09:46:46 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "libft.h"

int	ft_isspace(char c)
{
	return (c == 32 || (c >= 9 && c <= 13));
}

int	ft_get_sign(const char *nptr, int *i)
{
	int	sign;

	sign = 1;
	if (nptr[*i] == '-')
	{
		sign = -1;
		(*i)++;
	}
	else if (nptr[*i] == '+')
		(*i)++;
	return (sign);
}

unsigned long	ft_str_to_num(const char *nptr, int *i)
{
	unsigned long	result;

	result = 0;
	while (ft_isdigit(nptr[*i]))
	{
		result = result * 10 + (nptr[*i] - '0');
		(*i)++;
	}
	return (result);
}

int	ft_atoi(const char *nptr)
{
	int					i;
	int					sign;
	unsigned long		result;

	i = 0;
	while (ft_isspace(nptr[i]))
		i++;
	sign = ft_get_sign(nptr, &i);
	result = ft_str_to_num(nptr, &i);
	return ((int)(result * sign));
}

int	main(void)
{
	printf("%i\n", ft_atoi(" -123junk"));  // -123
	printf("%i\n", ft_atoi(" +321dust"));  // 321
	printf("%i\n", ft_atoi("0"));          // 0
	printf("%i\n", ft_atoi("0042"));       // 42
	printf("%i\n", ft_atoi("0x2A"));       // 0
	printf("%i\n", ft_atoi("junk"));       // 0
	printf("%i\n", ft_atoi("2147483648")); //  -2147483648
}