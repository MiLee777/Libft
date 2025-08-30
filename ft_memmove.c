/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:28:34 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 13:18:34 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_memmove(void *dest, const void *src, size_t n) {
    unsigned char *d;
    unsigned char *s;
    size_t i;

    d = (unsigned char *)dest;
    s = (unsigned char *)src;
    
    if (d < s) {
        i = 0;
        while (i < n) 
        {
            d[i] = s[i];
            i++;
        }
    } else {
        i = n;
        while (i > 0)
        {
            i--;
            d[i] = s[i];
        }
    }
}

#include <string.h>
int main (void) {
    // char dest[] = "Hello 123123123123";
    char src[] = "1111 2222 3333 4444";

    memmove(src + 5, src, 10);
    printf("%s", src);
    printf("\n");

    ft_memmove(src + 5, src, 10);

    printf("%s", src);
    printf("\n");

    return 0;
}