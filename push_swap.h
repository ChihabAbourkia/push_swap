/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 17:32:23 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/04 21:44:05 by chabourk         ###   ########.fr       */
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
void free_split(char **str);
void lstclear(t_list **lst);
void error_free(t_list **head, char **results);
void chek_args( t_list **head, char **results);
void sa(t_list **lst);
void sb(t_list **lst);
void pa(t_list **stack_a , t_list **stack_b);
void pb(t_list **stack_a , t_list **stack_b);
void ra(t_list **stack_a);
void rb(t_list **stack_b);
void rra(t_list **stack_a);
void rrb(t_list **stack_b);
void sort_three(t_list **lst);
int stack_size(t_list *lst);
void sort_foor(t_list **lst);
void sort_five(t_list **lst);
void print_sa(t_list **lst);
void print_sb(t_list **lst);
void print_pa(t_list **stack_a , t_list **stack_b);
void print_pb(t_list **stack_a , t_list **stack_b);
void print_ra(t_list **stack_a);
void print_rb(t_list **stack_b);
void print_rra(t_list **stack_a);
void print_rrb(t_list **stack_b);
void sort_two(t_list **list);
int is_sorted(t_list *lst);
#endif
