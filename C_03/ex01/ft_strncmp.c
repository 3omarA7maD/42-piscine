/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 17:18:04 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/22 17:36:45 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] && s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	if (i < n)
		return ((unsigned char)s1[i] - (unsigned char)s2[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	printf("Test 1: %d\n", ft_strncmp("hello", "hello", 5));
	printf("Test 2: %d\n", ft_strncmp("hello", "hella", 5));
	printf("Test 3: %d\n", ft_strncmp("hella", "hello", 5));
	printf("Test 4: %d\n", ft_strncmp("hello", "hello world", 5));
	printf("Test 5: %d\n", ft_strncmp("hello", "hello world", 10));
	printf("Test 6: %d\n", ft_strncmp("", "", 5));
	printf("Test 7: %d\n", ft_strncmp("a", "", 1));
	printf("Test 8: %d\n", ft_strncmp("", "a", 1));
	printf("Test 9: %d\n", ft_strncmp("abcd", "abce", 3));
	printf("Test 10: %d\n", ft_strncmp("abcd", "abce", 4));
	return (0);
}*/
