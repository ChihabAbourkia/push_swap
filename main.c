/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:25:30 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/04 20:53:55 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
    t_list *head = NULL;
    int i = 1;
    while(i < argc)
    { 
        char **results = split(argv[i], ' ');
        chek_args(&head , results);
        free_split(results);
        i++;
    }
    if(stack_size(head) == 2)
        sort_thow(&head);
    if(stack_size(head) == 3)
        sort_three(&head);
    if(stack_size(head) == 4)
        sort_foor(&head);
    if(stack_size(head) == 5)
        sort_five(&head);
    t_list *tmp = head;
    while(tmp)
    {
        printf("[%d]", tmp->value);
        tmp = tmp->next;
    }
    lstclear(&head);
    return 0;
}