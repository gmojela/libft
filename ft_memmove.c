/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:19:59 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/12 18:20:03 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
    char		*dest;
    const char	*src;
    char		temp[n];
    size_t		count;
    
    count = 0;
    dest = (char *)s1;
    src = (const char *)s2;
    while (count < n)
    {
        temp[count] = src[count];
        count++;
    }
    count = 0;
    while (count < n)
    {
        dest[count] = temp[count];
        count++;
    }
    return (s1);
}