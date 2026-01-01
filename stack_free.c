/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_free.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/29 17:51:07 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/31 17:46:56 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"

void free_split(char **str)
{
    int i = 0;
    while(str[i])
    {
        free(str[i]);
        i++;
    }
    free(str);
}
void lstclear(t_list **lst)
{
    if(!lst || !*lst)
        return;
    while(*lst)
    {
        t_list *tmp = (*lst)->next;
        free(*lst);
        *lst = tmp; 
    }
}
void error_free(t_list **head, char **results)
{
    free_split(results);
    lstclear(head);
    error();
}
1 2 3 4 4