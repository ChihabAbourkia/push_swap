/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 10:36:14 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/05 14:50:25 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void sort_two(t_list **lst)
{
	if ((*lst)->value > (*lst)->next->value)
	{
		sa(lst);
	}
}
void sort_three(t_list **lst)
{
	int max = stack_max(*lst);
	if ((*lst)->value == max)
		ra(lst);
	else if ((*lst)->next->value == max)
		rra(lst);
	if ((*lst)->value > (*lst)->next->value)
		sa(lst);
}
void sort_foor(t_list **lst)
{
	t_list *stack_b = NULL;
	int min = stack_min(*lst);
	to_top(lst, min);
	pb(lst, &stack_b);
	sort_three(lst);
	pa(lst, &stack_b);
}
void sort_five(t_list **lst)
{
	t_list *stack_b = NULL;
	int min = stack_min(*lst);
	to_top(lst, min);
	pb(lst, &stack_b);
	sort_foor(lst);
	pa(lst, &stack_b);
}
