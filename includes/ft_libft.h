/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_libft.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adeletan <adeletan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 23:10:59 by adeletan          #+#    #+#             */
/*   Updated: 2016/11/06 01:50:33 by adeletan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_LIBFT_H
# define FT_LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void	ft_putchar(char c);
void	ft_putstr(char const *s);
void	ft_putendl(char const *s);
void	ft_putnbr(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char const *s, int fd);
void	ft_putendl_fd(char const *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_itoa(int n);
char	**ft_strsplit(char const *s, char c);
char	*ft_strstrim(char const *s);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_strnequ(char const *s1, char const *s2, size_t n);
int		ft_strequ(char const *s1, char const *s2);
char	*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char	*ft_trmap(char const*s, char (*f) (char));
void	ft_striteri(char *s, void (*f) (unsigned int, char *));
void	ft_striter(char *s, void (*f) (char *));
void	ft_strclr(char *s);
void	ft_strdel(char **as);
char	*ft_strnew(size_t size);
void	ft_memdel(void **ap);
char	*ft_strdup(char const *s);
int		ft_strlen(char const *s);

#endif
