/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawattie <mawattie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:16:02 by mawattie          #+#    #+#             */
/*   Updated: 2026/01/23 17:25:58 by mawattie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer[BUFFER_SIZE +1];
	char		*line;
	int			bytes_read;

}

static char *process_stash(char **stash_ptr)
{
	int		i;
	char	*line;
	char	*new_line;

	if (!*stash_ptr)
		return (NULL);
	i = 0;

	while (*stash_ptr[i] != '\n')
		i++;
		
	if (*stash_ptr[i] == '\n')
		line = (char *)malloc(i + 2);
	else
		line = (char *)malloc(i + 2);
	
	if (!line)
		return (NULL);
		
	new_line = (char *)malloc();
	

	read()
	
	while (stash[i])
	{
		if (i == '\n')
		{
			line = stash[i] et les char depuis le debut du coup ??;
			return (line)
			après le \n new_stash = from line i+1 jusqua end de stash
		}
		else
		{
			i++;
		}
	} 
	free (line); 
}
