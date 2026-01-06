/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   big_algo.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/04 22:50:19 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/06 13:21:09 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
void stack_index(t_list **lst)
{
	t_list *tmp = *lst;
	while (tmp)
	{
		int count = 0;
		t_list *tmp1 = *lst;
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
void push_b(t_list **stack_a, t_list **satck_b)
{
	int i = 0;
	int chnk = 15;
	while (stack_a)
	{
		if (stack_a->index <= i)
		{
			pb(stack_b);
			rb(stack_b);
			i++;
		}
		if (stack_a->index <= size + chnk)
		{
			pb(stack_b);
			i++;
		}
		else
			ra(stack_a);
	}
}