/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 13:07:40 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/26 16:48:40 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		i;
	char		*res;

	i = 0;
	res = (char *)dest;
	while (i < n)
	{
		*(char *)res = *(char *)src;
		res++;
		src++;
		i++;
	}
	return (dest);
}
