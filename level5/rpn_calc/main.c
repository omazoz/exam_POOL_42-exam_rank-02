/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pasmadja <pasmadja@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 22:50:20 by pasmadja          #+#    #+#             */
/*   Updated: 2018/11/11 22:50:40 by pasmadja         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rpn_calc.h"

int	main(int ac, char **av)
{
	if (ac == 2 && check_input(av[1]))
		rpn_calc(av[1]);
	else
		printf("Error\n");
	return (0);
}