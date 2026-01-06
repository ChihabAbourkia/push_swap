/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 18:25:30 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/06 12:08:15 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
int main(int argc, char **argv)
{
	t_list *head = NULL;
	int i = 1;
	if (argc < 2)
		return 0;
	while (i < argc)
	{
		char **results = split(argv[i], ' ');
		chek_args(&head, results);
		free_split(results);
		i++;
	}
	int size = stack_size(head);
	if (size < 2 || is_sorted(head))
	{
		lstclear(&head);
		return 0;
	}
	if (size == 2)
		sort_two(&head);
	else if (size == 3)
		sort_three(&head);
	else if (size == 4)
		sort_foor(&head);
	else if (size == 5)
	{
		sort_five(&head);
	}
	while (head)
	{
		printf("%d\n", head->index);
		head = head->next;
	}

	lstclear(&head);
	return 0;
}
