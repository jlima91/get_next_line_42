/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jlima <jlima@student.42malaga.com>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/17 14:21:12 by jlima             #+#    #+#             */
/*   Updated: 2022/05/18 13:02:16 by jlima            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 16
# endif

# include <fcntl.h>
# include <stdio.h>
# include <stdlib.h>
# include <sys/stat.h>
# include <sys/types.h>
# include <unistd.h>

char	*get_next_line(int fd);
char	*update_buffer(char *buffer, char *str, int value);
char	*ft_strjoin(char *str, char *buffer);
char	*get_remaining_buffer(char *buffer, char *remaining_buffer);
char	*paste_remaining_buffer(char *remaining_buffer, char *str);
char	*check_exit(char *str, char *remaining_buffer, int value);
int		check_value(int value, char *str, char *buffer);
char	*ft_strchr(const char *str, int c);
size_t	ft_strlen(const char *str);
void	*ft_calloc(size_t nelem, size_t elsize);

#endif