/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/28 17:18:52 by chabourk          #+#    #+#             */
/*   Updated: 2025/12/29 16:03:35 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
 
t_list *ft_lsnew(int value)
{
    t_list *new = malloc(sizeof(t_list));
    new->value = value;
    return new;
}
