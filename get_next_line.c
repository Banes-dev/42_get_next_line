/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:51:06 by ehay              #+#    #+#             */
/*   Updated: 2023/11/08 22:01:48 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char *get_next_line(int fd)
{
	char *result;
	char *buffer[BUFFER_SIZE];
	int nbchar;

	nbchar = 0;
    result = read(fd, &buffer, nbchar);
	if (result == NULL)
	{
		return (NULL);
	}
	else
	{
		int i;

		i = 0;
		while (result[i] != '\0')
		{
			if (result[i] == '\n')
			{
				// strjoin dans le newtruc result[i] donc seulement actuellement
			}
			i++;
		}
		// verif le result le placer dans le newtruc si pas == \n
	}
}


int main()
{
	char *nextlineresult;
	int fd = open("test.txt", O_WRONLY | O_CREAT);
    if (fd == -1) {
        perror("Erreur lors de l'ouverture du fichier");
        return 1;
    }

	nextlineresult = get_next_line(fd);
	printf("Result : %s", nextlineresult);
    printf("test");

	close(fd);
}