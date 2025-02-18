/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okhaleel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/12 15:20:52 by okhaleel          #+#    #+#             */
/*   Updated: 2025/02/12 15:28:01 by okhaleel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b)
	{
		*div = a / b;
		*mod = a % b;
	}
}

/*
#include <stdio.h>
int	main()
{
	int	div, mod, n, n1;
	
	n = 42;
	n1 = 21;
	
	ft_div_mod(n, n1, &div, &mod);
	printf("\n%d/%d = %d with remainder %d\n\n", n, n1, &div, &mod);
}
*/
