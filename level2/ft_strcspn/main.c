/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 16:06:13 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/11 16:16:09 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strcspn(const char *s, const char *reject);

int	main(void)
{
	char	*cad1;
	char	*cad2;
	size_t	res;

	cad1 = "Hola Mundo";
	cad2 = "aeiou";
	res = strcspn(cad1, cad2);
	printf("STRCSPN\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %zu\n\n", res);
	res = ft_strcspn(cad1, cad2);
	printf("FT_STRCSPN\nCadena1: %s\nCadena2: %s\n", cad1, cad2);
	printf("Resultado: %zu\n\n", cad1, cad2, res);
	return (0);
}
