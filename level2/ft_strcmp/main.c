/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 15:22:33 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/11 16:19:15 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

int	ft_strcmp(char *s1, char *s2);

int	main(void)
{
	char	*cad1;
	char	*cad2;
	int		res;

	cad1 = "Hola Munda";
	cad2 = "Hola Mundo";
	res = strcmp(cad1, cad2);
	printf("STRCMP\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %i\n\n", res);
	res = ft_strcmp(cad1, cad2);
	printf("FT_STRCMP\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %i\n\n", res);
	return (0);
}
