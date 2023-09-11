/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lde-mich <lde-mich@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 09:20:13 by lde-mich          #+#    #+#             */
/*   Updated: 2023/03/20 14:27:05 by lde-mich         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_rb_rrb(t_stack *stack, int j)
{
	int	count;

	count = ft_count(stack->stack_b, stack->size_b, j);
	if (count <= stack->size_b / 2)
	{
		while (stack->stack_b[0] != j)
			rb(stack, 1);
	}
	else if (count >= stack->size_b / 2)
	{
		while (stack->stack_b[0] != j)
			rrb(stack, 1);
		count = stack->size_b - count;
	}
	return (count);
}

void	ft_ra_rra(t_stack *stack, int k, int j, int count)
{
	int	y;

	y = ft_count(stack->stack_a, stack->size_a,
			ft_minimo_dei_maggiori(stack->stack_a, stack->size_a, j));
	if (y <= stack->size_a / 2)
	{
		y = 0;
		while (y < k - count)
		{
			ra(stack, 1);
			y++;
		}
	}
	else
	{
		y = 0;
		while (y < k - count)
		{
			rra(stack, 1);
			y++;
		}
	}
}

void	ft_final_rarra(t_stack *stack)
{
	int	y;

	ft_min_max(stack->stack_a, stack->size_a, &stack->min, &stack->max);
	y = ft_count(stack->stack_a, stack->size_a, stack->min);
	if (y <= stack->size_a / 2)
	{
		while (stack->stack_a[0] != stack->min)
			ra(stack, 1);
	}
	else
	{
		while (stack->stack_a[0] != stack->min)
			rra(stack, 1);
	}
}

void	ft_sort_swap(t_stack *stack)
{
	int	i;
	int	j;
	int	k;
	int	count;

	while (stack->size_b)
	{
		i = 0;
		k = -1;
		while (i < stack->size_b)
		{
			if (k == -1 || k > ft_mosse(stack, stack->stack_b[i]))
			{
				k = ft_mosse(stack, stack->stack_b[i]);
				j = stack->stack_b[i];
			}
			i++;
		}
		count = ft_rb_rrb(stack, j);
		ft_ra_rra(stack, k, j, count);
		pa(stack);
	}
	ft_final_rarra(stack);
}
