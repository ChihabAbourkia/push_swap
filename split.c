/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   split.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chabourk <chabourk@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/25 18:00:30 by chabourk          #+#    #+#             */
/*   Updated: 2026/01/04 16:44:17 by chabourk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	count_words(char *str, char sep)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] != sep && (str[i + 1] == sep || str[i + 1] == '\0'))
		{
			count++;
		}
		i++;
	}
	return (count);
}
char	**free_splited(char **splited, int j)
{
	int	i;

	i = 0;
	while (i < j)
	{
		free(splited[i]);
		i++;
	}
	free(splited);
	return (NULL);
}
void	split_copy(char **splited, char *str, int start, int end, int j)
{
	int	n;

	n = 0;
	while (start < end)
	{
		splited[j][n++] = str[start++];
	}
	splited[j][n] = '\0';
}
char	**splited_fill(char **splited, char *str, char sep)
{
	int	i;
	int	j;
	int	start;
	int	end;

	i = 0;
	j = 0;
	while (str[i])
	{
		while (str[i] == sep)
			i++;
		if (!str[i])
			break;
		start = i;
		while (str[i] != sep && str[i])
			i++;
		end = i;
		splited[j] = malloc((end - start) + 1);
		if (!splited[j])
			return (free_splited(splited, j));
		split_copy(splited, str, start, end, j);
		j++;
	}
	splited[j] = NULL;
	return (splited);
}
char	**split(char *str, char sep)
{
	int		words_count;
	char	**splited;
	char	**splited_str;

	words_count = count_words(str, sep);
	splited = malloc((words_count + 1) * sizeof(char *));
	if (!splited)
	{
		return (NULL);
	}
	splited_str = splited_fill(splited, str, sep);
	if (!splited_str)
		return (NULL);
	return (splited_str);
}
