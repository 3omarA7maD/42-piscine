/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:19:47 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/23 15:19:49 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
/*
#include <stdio.h>

int	main(void)
{
	char	str1[50] = "Hello, ";
	char	str2[] = "World!";
	char	str3[50] = "";
	char	str4[] = "42";
	char	str5[50] = "Concat ";
	char	str6[] = "multiple cases.";

	printf("Test 1: %s\n", ft_strncat(str1, str2, 3));
	printf("Test 2: %s\n", ft_strncat(str3, str4, 2));
	printf("Test 3: %s\n", ft_strncat(str5, str6, 10));
	return (0);
}*/
