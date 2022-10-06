/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 12:26:06 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 15:20:40 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	char	*res;

	if (nmemb == 0 || size == 0)
		return (NULL);
	res = malloc(nmemb * size);
	ft_memset(res, 0, nmemb * size);
	return (res);
}
