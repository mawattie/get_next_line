/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawattie <mawattie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/15 22:16:02 by mawattie          #+#    #+#             */
/*   Updated: 2026/01/30 20:12:42 by mawattie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <unistd.h>

static char	*init_stash(char *stash, char *buffer)
{
	char	*temp;

	if (!stash)
		stash = ft_strdup("");
	if (!stash)
	{
		free(buffer);
		return (NULL);
	}
	temp = ft_strjoin(stash, buffer);
	free(stash);
	if (!temp)
	{
		free(buffer);
		return (NULL);
	}
	return (temp);
}

char	*read_and_stash(int fd, char *stash)
{
	char	*buffer;
	int		bytes_read;

	buffer = malloc(BUFFER_SIZE + 1);
	if (!buffer)
		return (NULL);
	bytes_read = 1;
	while (!ft_strchr(stash, '\n') && bytes_read > 0)
	{
		bytes_read = read(fd, buffer, BUFFER_SIZE);
		if (bytes_read < 0)
		{
			free(buffer);
			free(stash);
			return (NULL);
		}
		if (bytes_read == 0)
			break ;
		buffer[bytes_read] = '\0';
		stash = init_stash(stash, buffer);
		if (!stash)
			break ;
	}
	free(buffer);
	return (stash);
}

char	*extract_line(char **stash)
{
	int		i;
	char	*line;
	char	*new_stash;

	if (!stash || !*stash || **stash == '\0')
		return (NULL);
	i = 0;
	while ((*stash)[i] && (*stash)[i] != '\n')
		i++;
	if ((*stash)[i] == '\n')
		i++;
	line = ft_substr(*stash, 0, i);
	if (!line)
		return (NULL);
	if ((*stash)[i] != '\0')
		new_stash = ft_strdup(*stash + i);
	else
		new_stash = NULL;
	free(*stash);
	*stash = new_stash;
	return (line);
}

char	*get_next_line(int fd)
{
	static char		*stash;
	char			*line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
	{
		if (stash)
			free(stash);
		stash = NULL;
		return (NULL);
	}
	stash = read_and_stash(fd, stash);
	if (!stash)
		return (NULL);
	line = extract_line(&stash);
	return (line);
}
