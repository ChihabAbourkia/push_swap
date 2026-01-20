/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_parsing.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 11:38:06 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 17:07:05 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	parsing_args(char **argv, int argc, t_list **stack_a)
{
	int		i;
	char	**results;

	i = 1;
	if (argc < 2)
		return (0);
	while (i < argc)
	{
		results = split(argv[i], ' ');
		chek_args(stack_a, results);
		free_split(results);
		i++;
	}
	return (1);
}
