/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_sort.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/09 16:29:16 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 17:09:20 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	stack_index(t_list **lst)
{
	t_list	*tmp;
	int		count;
	t_list	*tmp1;

	tmp = *lst;
	while (tmp)
	{
		count = 0;
		tmp1 = *lst;
		while (tmp1)
		{
			if (tmp->value > tmp1->value)
			{
				count++;
			}
			tmp1 = tmp1->next;
		}
		tmp->index = count;
		tmp = tmp->next;
	}
}

int	get_max_pos(t_list *stack_b, int max)
{
	int	count;

	count = 0;
	while (stack_b->value != max)
	{
		count++;
		stack_b = stack_b->next;
	}
	return (count);
}

void	push_to_b(t_list **stack_a, t_list **stack_b, int chank_size)
{
	int	i;

	stack_index(stack_a);
	i = 0;
	while (*stack_a)
	{
		if ((*stack_a)->index <= i)
		{
			pb(stack_a, stack_b);
			rb(stack_b);
			i++;
		}
		else if ((*stack_a)->index <= i + chank_size)
		{
			pb(stack_a, stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}

void	push_to_a(t_list **stack_a, t_list **stack_b)
{
	int	max;
	int	max_pos;
	int	size;

	while (*stack_b)
	{
		max = stack_max(*stack_b);
		max_pos = get_max_pos(*stack_b, max);
		size = stack_size(*stack_b);
		if (max_pos <= size / 2)
		{
			while ((*stack_b)->value != max)
				rb(stack_b);
		}
		else
		{
			while ((*stack_b)->value != max)
				rrb(stack_b);
		}
		pa(stack_a, stack_b);
	}
}

void	big_sort(t_list **stack_a, t_list **stack_b)
{
	int	chank_size;
	int	size;

	chank_size = 0;
	size = stack_size(*stack_a);
	if (size >= 500)
		chank_size = 33;
	else
		chank_size = 15;
	push_to_b(stack_a, stack_b, chank_size);
	push_to_a(stack_a, stack_b);
}
