/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:41:37 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/01 18:37:46 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void sa(t_list **lst)
{
     if(!lst || !*lst || !(*lst)->next)
     {
        return;
     }
    t_list *tmp = (*lst)->next;
    (*lst)->next = (*lst)->next->next;
    tmp->next = *lst;
    *lst = tmp; 
   
}
void sb(t_list **lst)
{
     if(!lst || !*lst || !(*lst)->next)
     {
        return;
     }
    t_list *tmp = (*lst)->next;
    (*lst)->next = (*lst)->next->next;
    tmp->next = *lst;
    *lst = tmp; 
}
void pa(t_list **stack_a , t_list **stack_b)
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
void pb(t_list **stack_a , t_list **stack_b)
{
    if(!stack_a || !*stack_a )
     {
        return;
     }
    t_list *tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    tmp->next = *stack_b;
    *stack_b = tmp;
}
void ra(t_list **stack_a)
{
    if(!stack_a || !*stack_a || !(*stack_a)->next)
        return;
    t_list *tmp = *stack_a;
    *stack_a = (*stack_a)->next;
    t_list *last = *stack_a;
    while(last->next)
    {
        last = last->next;
    }
    last->next = tmp;
    tmp->next = NULL;
}
void rb(t_list **stack_b)
{
    if(!stack_b || !*stack_b || !(*stack_b)->next)
        return;
    t_list *tmp = *stack_b;
    *stack_b = (*stack_b)->next;
    t_list *last = *stack_b;
    while(last->next)
    {
        last = last->next;
    }
    last->next = tmp;
    tmp->next = NULL;
}
void rra(t_list **stack_a)
{
    if(!stack_a || !*stack_a ||!(*stack_a)->next)
        return;
    t_list *last = *stack_a;
    while(last->next)
    {
        last = last->next;
    }
    t_list *bfl = *stack_a;
    while(bfl->next->next)
    {
        bfl = bfl->next;
    }
    bfl->next = NULL;
    last->next = *stack_a;
    *stack_a = last;
}
void rrb(t_list **stack_b)
{
    if(!stack_b || !*stack_b ||!(*stack_b)->next)
        return;
    t_list *last = *stack_b;
    while(last->next)
    {
        last = last->next;
    }
    t_list *bfl = *stack_b;
    while(bfl->next->next)
    {
        bfl = bfl->next;
    }
    bfl->next = NULL;
    last->next = *stack_b;
    *stack_b = last;
}