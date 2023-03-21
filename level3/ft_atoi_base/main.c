/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 15:25:13 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/23 19:47:09 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi_base(const char *str, int str_base);

int	main(void)
{
	char	*str;
	int		base;

	str = "32aF";
	base = 16;
	printf("ft_atoi_base\ncadena: ");
	printf("%s, base: %i -> numero: %i", str, base, ft_atoi_base(str, base));
	return (0);
}
