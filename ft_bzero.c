/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 10:53:02 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 11:06:20 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n) {

    unsigned char *ptr;
    size_t i;
    
    ptr = (unsigned char *)s;
    i = 0;

    while (i < n)
    {
        ptr[i] = 0;
        i++;
    }
}

int main (void) {
    char str[10] = "Hello,Mi!";

    ft_bzero(str, 5);

    for(int i = 0; i < 10; i++) {
        printf("%d", str[i]);
    }
    printf("\n");

    return 0;
}