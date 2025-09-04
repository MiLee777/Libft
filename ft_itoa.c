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

static size_t ft_numlen(long n)
{
  size_t len;

  len = 1;
  while (n /= 10)
    len++;
  return (len);
}

static void ft_fill_digits(char *str, long num, size_t len, int neg)
{
  size_t i;

  i = len + neg - 1;
  while ((int)i >= neg)
  {
    str[i] = (num % 10) + '0';
    num /= 10;
    i--;
  }
  if (neg)
    str[0] = '-';
}

char *ft_itoa(int n)
{
  long num;
  int neg;
  size_t len;
  char *str;

  num = n;
  neg = (num < 0);
  if (neg)
    num = -num;

  len = ft_numlen(num);

  str = malloc(len + neg + 1);
  if (!str)
    return (NULL);
  str[len + neg] = '\0';

  ft_fill_digits(str, num, len, neg);

  return (str);
}

int main(void)
{
  int number;
  char *str;

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
