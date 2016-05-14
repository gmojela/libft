/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljafta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/12 18:29:36 by ljafta            #+#    #+#             */
/*   Updated: 2016/05/12 18:29:42 by ljafta           ###   ########.fr       */
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
