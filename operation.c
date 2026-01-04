/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   operation.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/31 14:41:37 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/04 15:34:27 by chabourk         ###   ########.fr       */
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
void print_sa(t_list **lst)
{
    sa(lst);
    write(1, "sa\n", 3);
}
void print_sb(t_list **lst)
{
    sb(lst);
    write(1, "sb\n", 3);
}
void print_pa(t_list **stack_a , t_list **stack_b)
{
    pa(stack_a ,stack_b);
    write(1, "pa\n", 3);
}
void print_pb(t_list **stack_a , t_list **stack_b)
{
    pb(stack_a ,stack_b);
    write(1, "pb\n", 3);
}
void print_ra(t_list **stack_a)
{
    ra(stack_a);
    write(1, "ra\n", 3);
}
void print_rb(t_list **stack_b)
{
    rb(stack_b);
    write(1, "rb\n", 3);
}
void print_rra(t_list **stack_a)
{
    rra(stack_a);
    write(1,"rra\n", 4);
}
void print_rrb(t_list **stack_b)
{
    rrb(stack_b);
    write(1,"rrb\n", 4);
}
