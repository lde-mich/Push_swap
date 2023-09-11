/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 09:49:13 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/20 12:04:09 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <stdarg.h>
# include <fcntl.h>

typedef struct s_stack
{
	int	*stack_a;
	int	*stack_b;
	int	size_l;
	int	*num;
	int	size_a;
	int	size_b;
	int	min;
	int	max;

}	t_stack;

long	ft_atoi(const char *str);
int		ft_strlen(const char *str);
void	ft_size_count(int argc, char **argv, t_stack *stack);
void	ft_size_count1(t_stack *stack, char	**temp1);
char	*ft_strjoin(char *s1, char const *s2);
int		ft_word(const char *s, char c);
void	ft_while(char **final, const char *s, char c);
char	**ft_split(char const *s, char c);
void	ft_put_all(t_stack *stack);
void	ft_arr_sort(t_stack *stack);
void	ft_num_stack(t_stack *stack);
void	ft_empty_stack_a(t_stack *stack);
void	ft_empty_b(t_stack *stack);
void	ft_sort_swap(t_stack *stack);
void	ft_min_max(int *stack, int size, int *min, int *max);
int		ft_count(int *arrnum, int size, int n);
int		ft_minimo_dei_maggiori(int *arr, int size, int n);
int		ft_mosse(t_stack *stack, int n);
void	ft_final_rarra(t_stack *stack);
void	ft_ra_rra(t_stack *stack, int k, int j, int count);
int		ft_rb_rrb(t_stack *stack, int j);
void	ft_check_sort(t_stack *stack);
void	ft_check_double(t_stack *stack);
void	ft_free(t_stack *stack);
void	ft_check_arg(int argc, char **argv);
void	ft_t(t_stack *stack);
void	ft_c(t_stack *stack);
void	sa(t_stack *stack);
void	sb(t_stack *stack);
void	ss(t_stack *stack);
void	pa(t_stack *stack);
void	pb(t_stack *stack);
void	ra(t_stack *stack, int n);
void	rb(t_stack *stack, int n);
void	rr(t_stack *stack);
void	rra(t_stack *stack, int n);
void	rrb(t_stack *stack, int n);
void	rrr(t_stack *stack);
void	ft_print_stack(t_stack *stack);

#endif
