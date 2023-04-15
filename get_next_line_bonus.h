/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: luatshem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/21 19:09:07 by luatshem          #+#    #+#             */
/*   Updated: 2023/04/10 18:26:23 by luatshem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

# include <stdlib.h>
# include <unistd.h>
# include <limits.h>

size_t	ft_strlen(const char *str);
int		ft_nl(const char *s, int c);
char	*ft_join(char *s1, char *s2);
char	*ft_substr(char *s, unsigned int start, size_t len);
char	*get_line(char *str_line, int fd);
char	*get_next_line(int fd);

#endif
