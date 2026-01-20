/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_retate.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:12:33 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 16:57:40 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_retate(t_list **stack_a)
{
	t_list	*last;
	t_list	*bfl;

	if (!stack_a || !*stack_a || !(*stack_a)->next)
		return ;
	last = *stack_a;
	while (last->next)
	{
		last = last->next;
	}
	bfl = *stack_a;
	while (bfl->next->next)
	{
		bfl = bfl->next;
	}
	bfl->next = NULL;
	last->next = *stack_a;
	*stack_a = last;
}

void	rra(t_list **stack_a)
{
	reverse_retate(stack_a);
	write(1, "rra\n", 4);
}

void	rrb(t_list **stack_b)
{
	reverse_retate(stack_b);
	write(1, "rrb\n", 4);
}
