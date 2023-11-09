/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:09 by ehay              #+#    #+#             */
/*   Updated: 2023/11/09 14:34:43 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 50
# endif

# include <stdio.h>           // printf
# include <unistd.h>          // write, read, open, close
# include <string.h>          // fonction string
# include <stdlib.h>          // malloc()
# include <stddef.h>          // size_t
# include <fcntl.h>           // open()
# include <stdarg.h>          // fonction va_

char	*get_next_line(int fd);
char	*ft_strjoin(char const *s1, char const *s2);

#endif