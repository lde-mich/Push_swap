/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 12:14:59 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/17 18:15:15 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_count(int *arrnum, int size, int n)
{
	int	i;

	i = 0;
	while (i < size && arrnum[i] != n)
		i++;
	return (i);
}

int	ft_minimo_dei_maggiori(int *arr, int size, int n)
{
	int	tmp;
	int	i;

	i = 0;
	tmp = 0;
	while (i < size)
	{
		if (arr[i] - n > 0)
		{
			if (!tmp || arr[i] - n < tmp)
				tmp = arr[i] - n;
		}
		i++;
	}
	return (tmp + n);
}

int	ft_mosse(t_stack *stack, int n)
{
	int	i;
	int	count;

	i = 0;
	count = ft_count(stack->stack_b, stack->size_b, n);
	if (count > stack->size_b / 2)
		count = stack->size_b - count;
	i = ft_minimo_dei_maggiori(stack->stack_a, stack->size_a, n);
	i = ft_count(stack->stack_a, stack->size_a, i);
	if (i > stack->size_a / 2)
		i = stack->size_a - i;
	return (count + i);
}

void	ft_t(t_stack *stack)
{
	if (stack->stack_a[0] == 1 && stack->stack_a[1] == 3)
	{
		sa(stack);
		ra(stack, 1);
	}
	else if (stack->stack_a[0] == 3 && stack->stack_a[1] == 2)
	{
		ra(stack, 1);
		sa(stack);
	}
	else if (stack->stack_a[0] == 2 && stack->stack_a[1] == 1)
		sa(stack);
	else if (stack->stack_a[0] == 2 && stack->stack_a[1] == 3)
		rra(stack, 1);
	else if (stack->stack_a[0] == 3 && stack->stack_a[1] == 1)
		ra(stack, 1);
}

void	ft_c(t_stack *stack)
{
	while (stack->size_a > stack->size_l - 2)
	{
		ft_min_max(stack->stack_a, stack->size_a, &stack->min, &stack->max);
		while (stack->stack_a[0] == 4 || stack->stack_a[0] == 5)
			pb(stack);
		ra(stack, 1);
	}
	ft_t(stack);
	if (stack->stack_b[0] == 5)
	{
		pa(stack);
		pa(stack);
		ra(stack, 1);
		ra(stack, 1);
		return ;
	}
	pa(stack);
	ra(stack, 1);
	pa(stack);
	ra(stack, 1);
}
