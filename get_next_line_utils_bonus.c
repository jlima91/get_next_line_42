/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:20:23 by jlima             #+#    #+#             */
/*   Updated: 2022/05/24 19:26:24 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	char			*ptr;
	unsigned int	i;

	if (nelem + elsize < nelem)
		return (0);
	ptr = malloc((nelem * elsize));
	if (!(ptr))
		return (0);
	i = 0;
	while (i < nelem * elsize)
		ptr[i++] = '\0';
	return (ptr);
}

size_t	ft_strlen(const char *str)
{
	unsigned int	j;

	j = 0;
	if (!str)
		return (0);
	while (str[j] != '\0')
		j++;
	return (j);
}

char	*ft_strchr(const char *str, int c)
{
	if (str == NULL)
		return (NULL);
	while (*str != '\0')
	{
		if (*str == (unsigned char)c)
			return ((char *)str);
		else
			str++;
	}
	return (NULL);
}

char	*check_exit(char *str, char *remaining_buffer, int value)
{
	if (value == 0 && remaining_buffer == NULL)
		str[ft_strlen(str) - 1] = '\0';
	if (str[0] == '\0' && remaining_buffer == NULL)
	{
		free(str);
		return (NULL);
	}
	return (str);
}

int	check_value(int value, char *str, char *buffer)
{
	if (value < 0)
	{
		free(str);
		free(buffer);
		return (0);
	}
	else
		return (1);
}
