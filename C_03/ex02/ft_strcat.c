/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 15:19:39 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/23 15:19:42 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0')
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
	char	str5[50] = "General ";
	char	str6[] = "Zero Hour.";

	printf("Test 1: %s\n", ft_strcat(str1, str2));
	printf("Test 2: %s\n", ft_strcat(str3, str4));
	printf("Test 3: %s\n", ft_strcat(str5, str6));
	return (0);
}*/
