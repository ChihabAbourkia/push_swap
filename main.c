/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:25:30 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 14:52:42 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_list	*stack_a;
	t_list	*stack_b;
	int		size;

	stack_a = NULL;
	stack_b = NULL;
	parsing_args(argv, argc, &stack_a);
	size = stack_size(stack_a);
	if (size < 2 || is_sorted(stack_a))
	{
		lstclear(&stack_a);
		return (0);
	}
	if (size == 2)
		sort_two(&stack_a);
	else if (size == 3)
		sort_three(&stack_a);
	else if (size == 4)
		sort_foor(&stack_a, &stack_b);
	else if (size == 5)
		sort_five(&stack_a, &stack_b);
	else if (size > 5)
		big_sort(&stack_a, &stack_b);
	lstclear(&stack_a);
	return (0);
}
