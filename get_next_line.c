/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:06 by ehay              #+#    #+#             */
/*   Updated: 2023/11/09 16:12:00 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	size_t	nbchar;
	char	*buffer;
	size_t	result;
	size_t	i;
	char	*lineresult;

	lineresult = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
    if (lineresult == NULL)
    {
        return (NULL);
    }
	nbchar = BUFFER_SIZE;
	buffer = (char *)malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
	if (buffer == NULL)
	{
		free(lineresult);
		return (NULL);
	}
	result = read(fd, buffer, nbchar);
	if (result == (size_t) -1)
	{
		return (NULL);
	}
	else
	{
		i = 0;
		buffer[result] = '\0';
		while (buffer[i] != '\0' && i <= result)
		{
			while (buffer[i] != '\0' && i <= result)
			{
				if (buffer[i] == '\n')
				{
					lineresult[i] = '\0';
					break;
				}
				
				lineresult[i] = buffer[i];
				// printf("%c\n", lineresult[i]);
				i++;
			}
		}
	}
	free(buffer);
	return (lineresult);
}

int main()
{
	char *nextlineresult;
	int fd = open("test.txt", O_RDWR);
    if (fd == -1) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

	nextlineresult = get_next_line(fd);
	printf("%s\n", nextlineresult);
	printf("\n---------------\n");
	free(nextlineresult);
	close(fd);
}