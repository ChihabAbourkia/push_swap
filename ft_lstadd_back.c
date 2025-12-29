/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 23:13:48 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/29 16:09:33 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
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