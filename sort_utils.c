/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:50:27 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 17:06:22 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	stack_max(t_list *lst)
{
	int	max;

	max = lst->value;
	while (lst)
	{
		if (lst->value > max)
			max = lst->value;
		lst = lst->next;
	}
	return (max);
}

int	is_sorted(t_list *lst)
{
	while (lst->next)
	{
		if (lst->value > lst->next->value)
		{
			return (0);
		}
		lst = lst->next;
	}
	return (1);
}

int	stack_min(t_list *lst)
{
	int	min;

	min = lst->value;
	while (lst)
	{
		if (lst->value < min)
			min = lst->value;
		lst = lst->next;
	}
	return (min);
}

int	min_index(t_list *lst, int min)
{
	int	count;

	count = 0;
	while (lst->value != min)
	{
		count++;
		lst = lst->next;
	}
	return (count);
}

void	to_top(t_list **lst, int value)
{
	int	index;
	int	size;

	index = min_index(*lst, value);
	size = stack_size(*lst);
	if (index <= size / 2)
	{
		while ((*lst)->value != value)
			ra(lst);
	}
	else
	{
		while ((*lst)->value != value)
			rra(lst);
	}
}
