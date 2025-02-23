/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 16:37:08 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/22 17:15:05 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char	*s1;
	char	*s2;

	s1 = "a";
	s2 = "a";
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "";
	s2 = "a";
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "a";
	s2 = "";
	printf("%d\n", ft_strcmp(s1, s2));
	s1 = "";
	s2 = "";
	printf("%d\n", ft_strcmp(s1, s2));
}*/
