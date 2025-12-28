/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 16:34:28 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/28 15:12:33 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"push_swap.h"
#include<stdio.h>
void error(void)
{
	write(2, "Error\n", 6);
	exit(1);
}
int check_int(char *str)
{
	int i = 0;
	if(!str[i])
		error();
	if((str[i] == '-' ||str[i] == '+')&&(str[i+1] >= '0' && str[i+1] <= '9'))
		i++;
	while(str[i])
	{
		if(!(str[i] >= '0' && str[i] <= '9'))
		{
			error();
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
	if(!(results >= -2147483648 && results <= 2147483647))
		error();
	return results;

}