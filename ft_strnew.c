/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/15 14:45:47 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/15 14:45:51 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*tmp;

	tmp = (char *)malloc(size * sizeof(char));
	if (!tmp)
		return (NULL);
	ft_bzero((void *)tmp, size);
	return (tmp);
}
