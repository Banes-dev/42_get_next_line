/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:09 by ehay              #+#    #+#             */
/*   Updated: 2023/11/10 14:56:28 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdio.h>           // printf
# include <unistd.h>          // write, read, open, close
# include <string.h>          // fonction string
# include <stdlib.h>          // malloc()
# include <stddef.h>          // size_t
# include <fcntl.h>           // open()
# include <stdarg.h>          // fonction va_

char		*get_next_line(int fd);
size_t		ft_strlen(const char *str);
int			ft_strchr(const char *str, int ch);
void		*ft_calloc(size_t nmemb, size_t size);

#endif