/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:08:13 by joestrad          #+#    #+#             */
/*   Updated: 2022/12/09 14:28:50 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char	*ft_strdup(char *src);

int	main(void)
{
	char	*cad1;
	char	*cad2;

	cad1 = "Hola Mundo";
	cad2 = strdup(cad1);
	printf("STRDUP\nCadena: %s\nCadena copiada: %s\n", cad1, cad2);
	free(cad2);
	cad2 = ft_strdup(cad1);
	printf("FT_STRDUP\nCadena: %s\nCadena copiada: %s\n", cad1, cad2);
	free(cad2);
	return (0);
}
