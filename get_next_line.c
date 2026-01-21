/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawattie <mawattie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:16:02 by mawattie          #+#    #+#             */
/*   Updated: 2026/01/21 17:19:22 by mawattie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>
#include <unistd.h>

char	*get_next_line(int fd)
{
	static char	*stash;
	char		*buffer;
	char		*line;
	int			bytes_read;
	
	stash = NULL;
}

static char *process_stash(char **stash_ptr)
{
	int		i;
	char	*line;
	char	*new_line;

	if (!*stash_ptr)
		return (NULL);
	i = 0;

	line = (char *)malloc();
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
