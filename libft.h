/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmojela <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/09 12:50:13 by gmojela           #+#    #+#             */
/*   Updated: 2016/05/14 18:04:48 by gmojela          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct	s_list
{
				void *content;
				size_t content_size;
				struct s_list *next;
}				t_list;

void			ft_putchar(char c);
void			ft_putstr(const char *s);
void			ft_putnbr(int n);
char            ft_tolower(char c);
char			ft_toupper(char c);
int				ft_isprint(char c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_atoi(const char *num);
void			ft_bzero(void *s, size_t n);
void			*ft_memccpy(void *dst, const void *src, int c, size_t n);
void			*ft_memchr(const void *s, int c, size_t n);
int				ft_memcmp(const void *s1, const void *s2, size_t n);
void			*ft_memcpy(void *s1, const void *s2, size_t n);
void			*ft_memmove(void *s1, const void *s2, size_t n);
void			*ft_memset(void *b, int c, size_t len);
char			*ft_strdup(const char *str);
char			*ft_strstr(const char *s1, const char *s2);
int				ft_strcmp(const char *s1, const char *s2);
size_t			ft_strlcat(char *dst, const char *src, size_t size);
char			*ft_strncat(char *s1, const char *s2, size_t n);
int				ft_strncmp(const char *s1, const char *s2, size_t n);
char			*ft_strnstr(char const *s1, char const *s2, size_t n);
char			*ft_strrchr(const char *s, int c);
int				ft_strlen(const char *s);
char			*ft_strcpy(char *dst, const char *src);
char			*ft_strncpy(char *s1, const char *s2, int n);
char			*ft_strcat(char *dest, const char *src);
char			*ft_strchr(const char *s, int c);
char			*ft_strcpy(char *dest, char const *src);
char			*ft_strncpy(char *s1, const char *s2, int n);
char			*ft_strnew(size_t size);
void			ft_putchar_fd(char c, int fd);
void            *ft_memalloc(size_t size);
void            ft_strclr(char *s);
int             ft_strequ(char const *s1, char const *s2);

#endif
