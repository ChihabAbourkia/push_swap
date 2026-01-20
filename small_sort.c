/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:36:14 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 18:11:43 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_two(t_list **stack)
{
	if ((*stack)->value > (*stack)->next->value)
	{
		sa(stack);
	}
}

void	sort_three(t_list **stack)
{
	int	max;

	max = stack_max(*stack);
	if ((*stack)->value == max)
		ra(stack);
	else if ((*stack)->next->value == max)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_foor(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = stack_min(*stack_a);
	to_top(stack_a, min);
	pb(stack_a, stack_b);
	sort_three(stack_a);
	pa(stack_a, stack_b);
}

void	sort_five(t_list **stack_a, t_list **stack_b)
{
	int	min;

	min = stack_min(*stack_a);
	to_top(stack_a, min);
	pb(stack_a, stack_b);
	sort_foor(stack_a, stack_b);
	pa(stack_a, stack_b);
}
