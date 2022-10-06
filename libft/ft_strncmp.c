/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdubilla <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 11:17:01 by jdubilla          #+#    #+#             */
/*   Updated: 2021/11/25 12:33:51 by jdubilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		n--;
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int main()
{	printf("%d\n", strncmp("Bonjour", "Bonjour", 10 ));
	printf("%d\n", ft_strncmp("Bonjour", "Bonjour", 10 ));
	printf("%d\n", strncmp("Bonjour", "Bonqour", 10));
	printf("%d\n", ft_strncmp("Bonjour", "Bonqour", 10));
	printf("%d\n", strncmp("Bonqour", "Bonjour", 10));
	printf("%d\n", ft_strncmp("Bonqour", "Bonjour", 10));
	printf("%d\n", strncmp("B", "Baaa", 10));
	printf("%d\n", ft_strncmp("B", "Baaa", 10));
	printf("%d\n", strncmp("Baaa", "B", 10));
	printf("%d\n", ft_strncmp("Baaa", "B", 10));
	printf("%d\n", strncmp("Bonjour", "B", 10));
	printf("%d\n", ft_strncmp("Bonjour", "B", 10));
}*/
