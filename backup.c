/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backup.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehay <ehay@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 12:22:35 by ehay              #+#    #+#             */
/*   Updated: 2023/11/10 12:22:45 by ehay             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// char	*get_next_line(int fd)
// {
// 	size_t	nbchar;
// 	char	*buffer;
// 	size_t	result;
// 	size_t	i;
// 	char	*lineresult;

// 	lineresult = (char *)malloc(sizeof(char) * (BUFFER_SIZE + 1));
//     if (lineresult == NULL)
//     {
//         return (NULL);
//     }
// 	nbchar = BUFFER_SIZE;
// 	buffer = (char *)malloc(sizeof(*buffer) * (BUFFER_SIZE + 1));
// 	if (buffer == NULL)
// 	{
// 		free(lineresult);
// 		return (NULL);
// 	}
// 	result = read(fd, buffer, nbchar);
// 	if (result == (size_t) -1)
// 	{
// 		return (NULL);
// 	}
// 	else
// 	{
// 		i = 0;
// 		buffer[result] = '\0';
// 		while (buffer[i] != '\0' && i <= result)
// 		{
// 			while (buffer[i] != '\0' && i <= result)
// 			{
// 				if (buffer[i] == '\n')
// 				{
// 					lineresult[i] = '\0';
// 					break;
// 				}	
// 				lineresult[i] = buffer[i];
// 				// printf("%c\n", lineresult[i]);
// 				i++;
// 			}
// 		}
// 	}
// 	free(buffer);
// 	return (lineresult);
// }