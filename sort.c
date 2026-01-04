/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 21:24:49 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/04 21:52:07 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int stack_max(t_list *lst)
{
    int max = lst->value;
    while(lst)
    {
        if(lst->value > max)
            max =lst->value;
        lst = lst->next;
    }
    return max;
}
int stack_min(t_list *lst)
{
    int min = lst->value;
    while(lst)
    {
        if(lst->value < min)
            min = lst->value;
        lst = lst->next;   
    }
    return min;
}
int min_index(t_list *lst, int min)
{
    int count = 0;
    while(lst->value != min)
    {
        count++;
        lst = lst->next;
    }
    return count;
}
int is_sorted(t_list *lst)
{
    while(lst->next)
    {
        if(lst->value > lst->next->value)
        {
            return 0;
        }
        lst = lst->next;
    }
    return 1;
}
    
void pb_three_pa(t_list **lst, t_list **stack_b)
{
    print_pb(lst , stack_b);
    sort_three(lst);
    print_pa(lst, stack_b);
}
void ra_pb_three_pa(t_list **lst, t_list **stack_b)
{
    print_ra(lst);
    print_pb(lst , stack_b);
    sort_three(lst);
    print_pa(lst, stack_b);
}
void ra_ra_pb_three_pa(t_list **lst, t_list **stack_b)
{
    print_ra(lst);
    print_ra(lst);
    print_pb(lst , stack_b);
    sort_three(lst);
    print_pa(lst, stack_b);
}
void rra_pb_three_pa(t_list **lst, t_list **stack_b)
{
    print_rra(lst);
    print_pb(lst , stack_b);
    sort_three(lst);
    print_pa(lst, stack_b);
}
void pb_foor_pa(t_list **lst, t_list **stack_b)
{
    print_pb(lst , stack_b);
    sort_foor(lst);
    print_pa(lst, stack_b);
}
void ra_pb_foor_pa(t_list **lst, t_list **stack_b)
{
    print_ra(lst);
    print_pb(lst , stack_b);
    sort_foor(lst);
    print_pa(lst, stack_b);
}
void ra_ra_pb_foor_pa(t_list **lst, t_list **stack_b)
{
    print_ra(lst);
    print_ra(lst);
    print_pb(lst , stack_b);
    sort_foor(lst);
    print_pa(lst, stack_b);
}
void rra_rra_pb_foor_pa(t_list **lst, t_list **stack_b)
{
    print_rra(lst);
    print_rra(lst);
    print_pb(lst , stack_b);
    sort_foor(lst);
    print_pa(lst, stack_b);
}
void rra_pb_foor_pa(t_list **lst, t_list **stack_b)
{
    print_rra(lst);
    print_pb(lst , stack_b);
    sort_foor(lst);
    print_pa(lst, stack_b);
}
void sort_two(t_list **lst)
{
        if((*lst)->value > (*lst)->next->value)
        {
            print_sa(lst);
        }
}
void sort_three(t_list **lst)
{
    int max  = stack_max(*lst);
    if((*lst)->value == max)
        print_ra(lst);
    else if((*lst)->next->value == max)
        print_rra(lst);
    if((*lst)->value > (*lst)->next->value)
        print_sa(lst);
}
void sort_foor(t_list **lst)
{
    t_list *stack_b = NULL;
    int min = stack_min(*lst);
    int index = min_index(*lst, min);
    if(index == 0)
        pb_three_pa(lst, &stack_b);
    else if(index == 1)
        ra_pb_three_pa(lst, &stack_b);
    else if(index == 2)   
        ra_ra_pb_three_pa(lst, &stack_b);
    else if(index == 3)  
        rra_pb_three_pa(lst, &stack_b);
}
void sort_five(t_list **lst)
{
    t_list *stack_b = NULL;
    int min = stack_min(*lst);
    int index = min_index(*lst, min);
    if(index == 0)
        pb_foor_pa(lst, &stack_b);
    else if(index == 1)
        ra_pb_foor_pa(lst, &stack_b);
    else if(index == 2)
        ra_ra_pb_foor_pa(lst, &stack_b);
    else if(index == 3)
        rra_rra_pb_foor_pa(lst, &stack_b);
    else if(index == 4)
        rra_pb_foor_pa(lst, &stack_b);
}

