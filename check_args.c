/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:34:28 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/30 19:46:34 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
void error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

int deblucate(t_list **lst, long n)
{
	if(!lst)
	{
		return 1;
	}
	t_list *tmp = *lst;
	while(tmp)
	{
		if(tmp->value == (int)n)
		{
			return 0;
		}
		tmp = tmp->next;
	}
	return 1;
}
int check_number(char *str)
{
	int i = 0;
	if(!str[i])
		return 0;
	if((str[i] == '-' ||str[i] == '+')&&(str[i+1] >= '0' && str[i+1] <= '9'))
		i++;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			return 0;
		}
		i++;
	}
	return 1;

}
long ft_atol(char *str)
{
	int i = 0;
	int s = 1;
	long r = 0;
	while(str[i] == ' ' || (str[i] >= 9 && str[i] <= 13))
		i++;
	if(str[i] == '-' ||str[i] == '+')
	{
		if(str[i] == '-')
			s = -1;;
		i++;
	}
	while(str[i] >= '0' && str[i] <= '9')
	{
		r = r * 10 + (str[i] - '0');
		i++;
	}
	long results = r * s;
	return results;
}
void chek_args( t_list **head, char **results)
{
		int j = 0;
        while(results[j])
        {
            if (!check_number(results[j]))
                error_free(head, results);
            long n = atol(results[j]);
            if(!(n >= -2147483648 && n <= 2147483647))
                 error_free(head, results);
            if(!deblucate(head, n))
                error_free(head, results);
            ft_lstadd_back(head, ft_lsnew(n));
             j++;    
        }
}