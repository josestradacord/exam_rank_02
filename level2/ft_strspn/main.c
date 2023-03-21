/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 00:11:23 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/14 00:22:38 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

size_t	ft_strspn(const char *s, const char *accept);

int	main(void)
{
	char	*cad1;
	char	*cad2;
	size_t	res;

	cad1 = "23242359876432107Hola Mundo";
	cad2 = "0123456789";
	res = strspn(cad1, cad2);
	printf("STRSPN\nCadena1: ");
	printf("%s\nCadena2: %s\nResultado: %zu\n\n", cad1, cad2, res);
	res = ft_strspn(cad1, cad2);
	printf("FT_STRSPN\nCadena1: ");
	printf("%s\nCadena2: %s\nResultado: %zu\n\n", cad1, cad2, res);
	return (0);
}
