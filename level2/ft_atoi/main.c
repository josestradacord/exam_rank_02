/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: joestrad <joestrad@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/11 13:04:32 by joestrad          #+#    #+#             */
/*   Updated: 2022/11/11 14:22:20 by joestrad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(char *str);

int	main(void)
{
	char	*str;

	str = "   \n\t  -1f234a";
	printf("Con atoi\ncadena:%s, numero: %i", str, atoi(str));
	printf("\nCon ft_atoi\ncadena:%s, numero: %i", str, ft_atoi(str));
	return (0);
}
