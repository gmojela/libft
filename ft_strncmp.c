/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ljafta <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/11 15:38:52 by ljafta            #+#    #+#             */
/*   Updated: 2016/05/11 15:38:55 by ljafta           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	loop;

	loop = 0;
	while (loop < n)
	{
		if (s1[loop] != s2[loop])
			return (s1[loop] - s2[loop]);
		loop++;
	}
	return (0);
}
