/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:18:52 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/02 17:37:45 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
t_list *ft_lsnew(int value)
{
    t_list *new = malloc(sizeof(t_list));
    new->value = value;
    new->next = NULL;
    return new;
}
void ft_lstadd_back(t_list **lst, t_list *new)
{
    if(!lst || !new)
    {
        return;
    }
    if(!*lst)
    {
        *lst = new;
        return;
    }
    t_list *tmp = *lst;
    while(tmp->next)
    {
        tmp = tmp->next;
    }
    tmp->next = new;
}
int stack_size(t_list *lst)
{
    int count = 0;
    while(lst)
    {
        count ++;
        lst = lst->next;
    }
    return count;
}