/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/13 13:35:04 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/13 13:36:23 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	ft_tolower(char c)
{
	if ((c >= 65) && (c <= 90))
	{
		return (c + 32);
	}
	else
		return (c);
}
