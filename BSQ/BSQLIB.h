/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BSQLIB.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyagbasa <fyagbasa@student.42istanbul.com  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/30 23:27:39 by fyagbasa          #+#    #+#             */
/*   Updated: 2025/05/01 16:24:54 by fyagbasa         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQLIB_H
# define BSQLIB_H
# include <stdio.h>
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

int		ft_atoi(char *str);
char	*ft_get_fline(char *file_name);
char	ft_get_fill(char *fline);
char	ft_get_barrier(char *fline);
char	ft_get_empty(char *fline);
int		ft_get_line_size(char *fline);
int		ft_size_file(char *file_name);
int		ft_line_size(char *file_name);
int		ft_column_size(char *file_name);
void	ft_next_line(int fd);
char	**ft_read_file(char *file_name);
int		ft_check_clmn_numbers(char **buff);
int		ft_check_chars(char **buff, char *file_name);
int		ft_verify_line_size(char *file_name);
int		ft_check_map(char *file_name);
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int		**ft_create_num_map(char **buff, char *file_name);
void	ft_solve_bsq_numarr(int ***arr, char *file_name);
int		ft_get_min(int a, int b, int c);
int		*ft_find_max_index(int **arr, char *file_name);
void	ft_draw_map(char ***buff, char *file_name);
int		ft_verify_fline(char *file_name);
int		ft_verify_missing(char *file_name);
int		ft_is_printable(char *fline);
void	ft_print_map(char *file_name);
void	ft_read_stdin(void);

#endif
