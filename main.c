/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:25:30 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/31 17:59:10 by chabourk         ###   ########.fr       */
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
    t_list *tmp = head;
    while(tmp)
    {
        printf("[%d]", tmp->value);
        tmp = tmp->next;
    }
    lstclear(&head);
}