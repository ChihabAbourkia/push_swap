/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_build.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:18:52 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/31 18:00:15 by chabourk         ###   ########.fr       */
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