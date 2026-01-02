/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/01 21:24:49 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/02 18:15:18 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
int int_max(t_list *lst)
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
void sort_three(t_list **lst)
{
    if(!lst ||!*lst || !(*lst)->next)
        return;
    int max  = int_max(*lst);
    if((*lst)->value == max)
        ra(lst);
    else if((*lst)->next->value == max)
        rra(lst);
    if((*lst)->value > (*lst)->next->value)
        sa(lst);
}
// void sort_foor(t_list **lst)
// {
//      if(!lst ||!*lst || !(*lst)->next)
//         return;
    
// }