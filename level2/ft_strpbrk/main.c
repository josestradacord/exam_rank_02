/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:57:34 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/12 18:01:13 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strpbrk(const char *s1, const char *s2);

int	main(void)
{
	char	*cad1;
	char	*cad2;
	char	*res;

	cad1 = "Hola Mundo";
	cad2 = "aeiou";
	res = strpbrk(cad1, cad2);
	printf("STRPBRK\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %s\n\n", res);
	res = ft_strpbrk(cad1, cad2);
	printf("FT_STRPRBK\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %s\n\n", res);
	return (0);
}
