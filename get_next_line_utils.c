/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mawattie <mawattie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/23 15:24:26 by mawattie          #+#    #+#             */
/*   Updated: 2026/01/23 17:22:13 by mawattie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
#include <stdlib.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i++;
	}
	if ((char)c == '\0')
		return ((char *)&s[i]);
	return (NULL);
}

char	*ft_strdup(const char *s)
{
	size_t	i;
	char	*scopy;

	if (!s)
		return (NULL);
	i = 0;
	scopy = (char *)malloc ((ft_strlen(s) + 1) * sizeof(char));
	if (!scopy)
		return (NULL);
	while (s[i])
	{
		scopy[i] = s[i];
		i++;
	}
	scopy[i] = '\0';
	return (scopy);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		i;
	int		j;
	char	*sjoin;

	if (!s1 && !s2)
		return (NULL);
	if (!s1)
		return (ft_strdup(s2));
	if (!s2)
		return (ft_strdup(s1));
	sjoin = malloc((ft_strlen(s1)) + ft_strlen(s2) + 1);
	if (!sjoin)
		return (NULL);
	i = -1;
	while (s1[++i])
		sjoin[i] = s1[i];
	j = -1;
	while (s2[++j])
		sjoin[i + j] = s2[j];
	sjoin[i + j] = '\0';
	return (sjoin);
}

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*subs;
	size_t	i;
	size_t	real_len;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		real_len = 0;
	else if (len > ft_strlen(s) - start)
		real_len = ft_strlen(s) - start;
	else
		real_len = len;
	subs = malloc (real_len + 1);
	if (!subs)
		return (NULL);
	i = 0;
	while (i < real_len)
	{
		subs[i] = s[start + i];
		i++;
	}
	subs[i] = '\0';
	return (subs);
}

size_t	ft_strlen(const char *s)
{
	size_t	i;

	if (!s)
		return (0);
	i = 0;
	while (s[i])
		i++;
	return (i);
}
