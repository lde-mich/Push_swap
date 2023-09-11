/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:33:12 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/20 12:49:33 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_put_all(t_stack *stack)
{
	while (stack->size_a > 2)
	{
		while (stack->stack_a[0] == 1 || stack->stack_a[0] == stack->size_l)
			ra(stack, 1);
		pb(stack);
	}
	if (stack->stack_a[0] > stack->stack_a[1])
		sa(stack);
}

void	ft_empty_b(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
		stack->stack_b[i++] = 0;
}

void	ft_min_max(int *stack, int size, int *min, int *max)
{
	int		i;

	i = 0;
	*min = stack[0];
	*max = stack[0];
	while (i < size)
	{
		if (stack[i] < *min)
			*min = stack[i];
		else if (stack[i] > *max)
			*max = stack[i];
		i++;
	}
}

void	ft_check_sort(t_stack *stack)
{
	int	i;

	i = 0;
	while (i < stack->size_a)
	{
		if (stack->num[i] != stack->stack_a[i])
			return ;
		i++;
	}
	free(stack->num);
	free(stack->stack_a);
	free(stack->stack_b);
	exit(0);
}

void	ft_check_double(t_stack *stack)
{
	int	i;
	int	j;

	i = 0;
	while (i < stack->size_a)
	{
		j = i + 1;
		while (j < stack->size_a)
		{
			if (stack->stack_a[i] == stack->stack_a[j])
			{
				free(stack->num);
				free(stack->stack_a);
				free(stack->stack_b);
				exit(write(1, "Error\nDuplicated number in input\n", 33));
			}
			j++;
		}
		i++;
	}
}
