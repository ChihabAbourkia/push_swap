/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/05 14:49:24 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 17:00:16 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <unistd.h>

typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}					t_list;

void				error(void);
char				**split(char *str, char sep);
t_list				*ft_lsnew(int value);
void				ft_lstadd_front(t_list **list, t_list *new);
int					check_number(char *str);
long				ft_atol(char *str);
void				ft_lstadd_back(t_list **lst, t_list *new);
int					deblucate(t_list **list, long n);
void				free_split(char **str);
void				lstclear(t_list **lst);
void				error_free(t_list **head, char **results);
void				chek_args(t_list **head, char **results);
void				sort_three(t_list **stack);
int					stack_size(t_list *lst);
void				sort_foor(t_list **stack_a, t_list **stack_b);
void				sort_five(t_list **stack_a, t_list **stack_b);
void				sa(t_list **lst);
void				sb(t_list **lst);
void				pa(t_list **stack_a, t_list **stack_b);
void				pb(t_list **stack_a, t_list **stack_b);
void				ra(t_list **stack_a);
void				rb(t_list **stack_b);
void				rra(t_list **stack_a);
void				rrb(t_list **stack_b);
void				sort_two(t_list **stack);
int					is_sorted(t_list *lst);
void				to_top(t_list **lst, int value);
int					stack_max(t_list *lst);
int					stack_min(t_list *lst);
int					min_index(t_list *lst, int min);
void				stack_index(t_list **lst);
void				push_to_b(t_list **stack_a, t_list **stack_b,
						int chank_size);
void				push_to_a(t_list **stack_a, t_list **stack_b);
void				big_sort(t_list **stack_a, t_list **stack_b);
int					parsing_args(char **argv, int argc, t_list **stack_a);
#endif
