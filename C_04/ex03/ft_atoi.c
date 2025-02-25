/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/24 17:08:03 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/24 17:55:24 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	result;
	int	sign;

	result = 0;
	sign = 1;
	while (*str == ' ' || *str == '\t' || *str == '\n' || *str == '\v' || *str == '\f' || *str == '\r')
	str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result * sign);
}
/*
#include <stdio.h>

int	main(void)
{
	char *tests[] = 
	{
		" ---+--+1234ab567",
		"   42",
		"-2147483648",
		"+2147483647",
		"---+--+-abc123",
		"00000123",
		"-+42",
		NULL
	};
	int i = 0;
	while (tests[i])
	{
		printf("Input: '%s' | Output: %d\n", tests[i], ft_atoi(tests[i]));
		i++;
	}
	return (0);
}*/
