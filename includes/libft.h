/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rpagot <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/14 14:57:55 by rpagot            #+#    #+#             */
/*   Updated: 2016/11/14 17:11:22 by rpagot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef _LIBFT_H
# define _LIBFT_H

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

void				ft_putchar(char c);
void				ft_putstr(char const *s);
void				ft_putendl(char const *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putendl_fd(char const *s, int fd);
void				ft_putnbr_fd(int n, int fd);
char				*ft_itoa(int n);
int					ft_atoi(char const *str);
char				**ft_strsplit(char const *s, char c);
char				*ft_strtrim(char const *s);
char				*ft_strjoin(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_strequ(char const *s1, char const *s2);
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char				*ft_strmap(char const*s, char (*f) (char));
void				ft_striteri(char *s, void (*f) (unsigned int, char *));
void				ft_striter(char *s, void (*f) (char *));
void				ft_strclr(char *s);
void				ft_strdel(char **as);
char				*ft_strnew(size_t size);
void				ft_memdel(void **ap);
char				*ft_strdup(char const *s);
int					ft_strlen(char const *s);
int					ft_strcmp(char const *s1, char const *s2);
int					ft_strncmp(char const *s1, char const *s2, size_t n);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
int					ft_tolower(int c);
int					ft_toupper(int c);
char				*ft_strstr(char const *big, char const *little);
char				*ft_strnstr(char const *big, char const *little,
		size_t len);
char				*ft_strcpy(char *dst, char const *src);
char				*ft_strncpy(char *dst, char const *src, size_t len);
char				*ft_strcat(char *s1, char const *s2);
char				*ft_strncat(char *s1, char const *s2, size_t n);
void				*ft_memcpy(void *dst, const void *src, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_bzero(void *s, size_t n);
void				*ft_memccpy(void *dst, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memmove(void *dst, const void *src, size_t len);
char				*ft_strchr(const char *s, int c);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strrchr(const char *s, int c);
void				*ft_memalloc(size_t size);

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

#endif
