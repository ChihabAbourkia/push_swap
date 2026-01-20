/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   retate.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:05:53 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 16:57:28 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	retate(t_list **stack_a)
{
	t_list	*tmp;
	t_list	*last;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	last = *stack_a;
	while (last->next)
	{
		last = last->next;
	}
	last->next = tmp;
	tmp->next = NULL;
}

void	ra(t_list **stack_a)
{
	retate(stack_a);
	write(1, "ra\n", 3);
}

void	rb(t_list **stack_b)
{
	retate(stack_b);
	write(1, "rb\n", 3);
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	retate(stack_a);
	retate(stack_b);
	write(1, "rr\n", 3);
}
