/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 17:32:23 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/29 00:48:23 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
#define  PUSH_SWAP_H

#include<unistd.h>
#include<stdlib.h>
#include<stdio.h>
typedef struct s_list
{
    int value;
    struct s_list *next;
} t_list;

void error(void);
char	**split(char *str, char sep);
t_list *ft_lsnew(int value);
void ft_lstadd_front(t_list **list, t_list *new);
int check_number(char *str);
long ft_atol(char *str);
void ft_lstadd_back(t_list **lst, t_list *new);
int deblucate(t_list **list, long n);

#endif
