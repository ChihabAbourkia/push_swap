/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 09:49:17 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/05 09:50:59 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void push(t_list **stack_a , t_list **stack_b)
{
    if(!stack_b || !*stack_b )
     {
        return;
     }
    t_list *tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    tmp->next = *stack_a;
    *stack_a = tmp;
}
void pa(t_list **stack_a , t_list **stack_b)
{
    push(stack_a ,stack_b);
    write(1, "pa\n", 3);
}
void pb(t_list **stack_a , t_list **stack_b)
{
    push(stack_b ,stack_a);
    write(1, "pb\n", 3);
}