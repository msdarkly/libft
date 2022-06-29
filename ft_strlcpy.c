/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jebillin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/22 12:28:35 by jebillin          #+#    #+#             */
/*   Updated: 2022/04/04 11:23:14 by jebillin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, const char *src, size_t size)
{
	size_t	index;

	index = 0;
	if (size == 0)
	{
		while (src[index])
			index++;
		return (index);
	}	
	while (index < size - 1 && src[index] != '\0')
	{
	dest[index] = src[index];
	index++;
	}
	if (index < size)
	dest[index] = '\0';
	while (src[index] != '\0')
	index++;
	return (index);
}
