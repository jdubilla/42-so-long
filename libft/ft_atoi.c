/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:40:22 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 14:22:59 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int	i;
	int	signe;
	int	res;

	i = 0;
	signe = 1;
	res = 0;
	while ((nptr[i] >= '\t' && nptr[i] <= '\r') || nptr[i] == ' ')
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			signe = -1;
		i++;
	}
	if (nptr[i] < '0' && nptr[i] > '9')
		return (0);
	while ((nptr[i] >= '0' && nptr[i] <= '9') && nptr[i])
	{
		res = res * 10 + nptr[i] - 48;
		i++;
	}
	return (res * signe);
}

/*#include <stdio.h>
#include <stdlib.h>
int main()
{
	printf("%d\n", atoi("\t\v12a3"));
	printf("%d\n", ft_atoi("\t\v12a3"));
	printf("%d\n", atoi(" +123"));
	printf("%d\n", ft_atoi(" +123"));
	printf("%d\n", atoi("++123"));
	printf("%d\n", ft_atoi("++123"));
	printf("%d\n", atoi(" \t\n\r-123"));
	printf("%d\n", ft_atoi(" \t\n\r -123"));
	printf("%d\n", atoi("--123"));
	printf("%d\n", ft_atoi("--123"));
}*/
