/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:15:37 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:15:58 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*str;

	if (!size)
		return (NULL);
	str = (void*)malloc(size);
	if (!str)
		return (NULL);
	ft_bzero((void*)str, size);
	return ((void*)str);
}
