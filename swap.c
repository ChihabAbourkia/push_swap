/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 09:43:39 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/05 09:48:10 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
void swap(t_list **lst)
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
void sa(t_list **lst)
{
    swap(lst);
    write(1, "sa\n", 3);
}
void sb(t_list **lst)
{
    swap(lst);
    write(1, "sb\n", 3);
}
void ss(t_list **lst)
{
    swap(lst);
    swap(lst);
    write(1, "ss\n", 3);
    
}