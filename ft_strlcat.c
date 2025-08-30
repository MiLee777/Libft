/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mligai <mligai@student.42bangkok.com>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/30 11:53:28 by mligai            #+#    #+#             */
/*   Updated: 2025/08/30 14:57:13 by mligai           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t ft_strlcat(char *dst, const char *src, size_t size) {
    
    
// }

#include <bsd/string.h>

int main () {
    char dest[] = "Hello 123123123123";
    char src[] = "1111 2222 3333 4444";

    strlcat(dest, src, sizeof(dest));

    printf("%s", dest);
    printf("\n");
    
    return 0;
}