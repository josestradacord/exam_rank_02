/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 22:08:13 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/13 20:24:26 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strrev(char *str);

int	main(void)
{
	char	*cad;
	char	*cad1;

	cad = "0123456789";
	printf("FT_STRREV\n");
	printf("Cadena: %s\n", cad);
	cad1 = strdup(cad);
	ft_strrev(cad1);
	printf("Cadena invertida: %s\n", cad1);
	return (0);
}
