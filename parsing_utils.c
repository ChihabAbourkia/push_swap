/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:34:28 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/15 17:09:03 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	only_space(char **str)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] != ' ')
			{
				return (1);
			}
			j++;
		}
		i++;
	}
	return (0);
}

int	deblucate(t_list **lst, long n)
{
	t_list	*tmp;

	if (!lst)
	{
		return (1);
	}
	tmp = *lst;
	while (tmp)
	{
		if (tmp->value == (int)n)
		{
			return (0);
		}
		tmp = tmp->next;
	}
	return (1);
}

int	check_number(char *str)
{
	int	i;

	i = 0;
	if (!str[i])
		return (0);
	if ((str[i] == '-' || str[i] == '+')
		&& (str[i + 1] >= '0' && str[i + 1] <= '9'))
		i++;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
		{
			return (0);
		}
		i++;
	}
	return (1);
}

long	ft_atol(char *str)
{
	int		i;
	int		s;
	long	r;
	long	results;

	i = 0;
	s = 1;
	r = 0;
	while (str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			s = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	results = r * s;
	return (results);
}

void	chek_args(t_list **head, char **results)
{
	int		j;
	long	n;

	j = 0;
	if (!only_space(results))
		error_free(head, results);
	while (results[j])
	{
		if (!check_number(results[j]))
			error_free(head, results);
		n = atol(results[j]);
		if (!(n >= -2147483648 && n <= 2147483647))
			error_free(head, results);
		if (!deblucate(head, n))
			error_free(head, results);
		ft_lstadd_back(head, ft_lsnew(n));
		j++;
	}
}
