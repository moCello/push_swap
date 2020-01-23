/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   test_share_operations.c                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mmarcell <mmarcell@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/01/23 12:29:32 by mmarcell       #+#    #+#                */
/*   Updated: 2020/01/23 19:39:33 by mmarcell      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <criterion/criterion.h>
#include <criterion/assert.h>
#include "share.h"

int		create_stack(t_stack **stack);

// Test(sh_operations_push, full_full)
// {
// 	t_stack	*dst;
// 	t_stack	*src;
// 	t_clist	*first_src;
// 	t_clist	*second_src;
// 	t_clist	*last_src;
// 	t_clist	*first_dst;
// 	t_clist	*last_dst;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	cr_assert(append_to_stack(5, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-43, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(6, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(87, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(2, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-5863, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(0, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(24, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(42, &src) == 1, "Error when appending nodes");
// 	first_src = src->head;
// 	second_src = src->head->next;
// 	last_src = src->head->prev;
// 	first_dst = dst->head;
// 	last_dst = dst->head->prev;
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 5, "dst node count incorrect");
// 	cr_expect(src->node_count == 4, "src node count incorrect");
// 	cr_expect(first_src->data == dst->head->data, "data of pushed element incorrect");
// 	cr_expect(first_src == dst->head, "push linking incorrect");
// 	cr_expect(first_src == dst->head->prev->next, "push linking incorrect");
// 	cr_expect(first_src == dst->head->next->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head, "push linking incorrect");
// 	cr_expect(last_src == src->head->prev, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next, "push linking incorrect");
// 	cr_expect(last_dst == dst->head->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head->next->next->next->next, "push linking incorrect");
// 	cr_expect(second_src == src->head->prev->prev->prev->prev, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next->next->next->next->next, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->prev->prev->prev->prev->prev, "push linking incorrect");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_push, one_two)
// {
// 	t_stack	*dst;
// 	t_stack	*src;
// 	t_clist	*first_src;
// 	t_clist	*second_src;
// 	t_clist	*last_src;
// 	t_clist	*first_dst;
// 	t_clist	*last_dst;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	cr_assert(append_to_stack(54, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(263, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-863, &src) == 1, "Error when appending nodes");
// 	first_src = src->head;
// 	second_src = src->head->next;
// 	last_src = src->head->prev;
// 	first_dst = dst->head;
// 	last_dst = dst->head->prev;
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 2, "dst node count incorrect");
// 	cr_expect(src->node_count == 1, "src node count incorrect");
// 	cr_expect(first_src->data == dst->head->data, "data of pushed element incorrect");
// 	cr_expect(first_src == dst->head, "push linking incorrect");
// 	cr_expect(first_src == dst->head->prev->next, "push linking incorrect");
// 	cr_expect(first_src == dst->head->next->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head, "push linking incorrect");
// 	cr_expect(last_src == src->head->prev, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next, "push linking incorrect");
// 	cr_expect(last_dst == dst->head->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head->next, "push linking incorrect");
// 	cr_expect(second_src == src->head->prev, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next->next, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->prev->prev, "push linking incorrect");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_push, two_one)
// {
// 	t_stack	*dst;
// 	t_stack	*src;
// 	t_clist	*first_src;
// 	t_clist	*first_dst;
// 	t_clist	*last_dst;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	cr_assert(append_to_stack(63, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-785487, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(42, &src) == 1, "Error when appending nodes");
// 	first_src = src->head;
// 	first_dst = dst->head;
// 	last_dst = dst->head->prev;
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 3, "dst node count incorrect");
// 	cr_expect(src->node_count == 0, "src node count incorrect");
// 	cr_expect(first_src->data == dst->head->data, "data of pushed element incorrect");
// 	cr_expect(first_src == dst->head, "push linking incorrect");
// 	cr_expect(first_src == dst->head->prev->next, "push linking incorrect");
// 	cr_expect(first_src == dst->head->next->prev, "push linking incorrect");
// 	cr_expect(src->head == 0, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next, "push linking incorrect");
// 	cr_expect(last_dst == dst->head->prev, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->next->next->next->next->next, "push linking incorrect");
// 	cr_expect(first_dst == dst->head->prev->prev->prev->prev->prev, "push linking incorrect");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_push, empty_full)
// {
// 	t_stack	*dst;
// 	t_stack	*src;
// 	t_clist	*first_src;
// 	t_clist	*second_src;
// 	t_clist	*last_src;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	cr_assert(append_to_stack(672, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-25, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(54, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(234, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(42, &src) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(424242, &src) == 1, "Error when appending nodes");
// 	first_src = src->head;
// 	second_src = src->head->next;
// 	last_src = src->head->prev;
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 1, "dst node count incorrect");
// 	cr_expect(src->node_count == 5, "src node count incorrect");
// 	cr_expect(first_src->data == dst->head->data, "data of pushed element incorrect");
// 	cr_expect(first_src == dst->head, "push linking incorrect");
// 	cr_expect(first_src == dst->head->prev->next, "push linking incorrect");
// 	cr_expect(first_src == dst->head->next->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head, "push linking incorrect");
// 	cr_expect(last_src == src->head->prev, "push linking incorrect");
// 	cr_expect(second_src == src->head->next->next->next->next->next, "push linking incorrect");
// 	cr_expect(second_src == src->head->prev->prev->prev->prev->prev, "push linking incorrect");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_push, full_empty)
// {
// 	t_stack	*dst;
// 	t_stack	*src;
// 	t_clist	*first_dst;
// 	t_clist	*last_dst;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	cr_assert(append_to_stack(5, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-43, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(6, &dst) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(87, &dst) == 1, "Error when appending nodes");
// 	first_dst = dst->head;
// 	last_dst = dst->head->prev;
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 4, "dst node count incorrect");
// 	cr_expect(src->node_count == 0, "src node count incorrect");
// 	cr_expect(first_dst == dst->head, "pushing from empty stack, nothing should have happened");
// 	cr_expect(last_dst == dst->head->prev, "pushing from empty stack, nothing should have happened");
// 	cr_expect(first_dst == dst->head->next->next->next->next, "pushing from empty stack, nothing should have happened");
// 	cr_expect(first_dst == dst->head->prev->prev->prev->prev, "pushing from empty stack, nothing should have happened");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_push, empty_empty)
// {
// 	t_stack	*dst;
// 	t_stack	*src;

// 	cr_assert(create_both_stacks(&dst, &src) == 1, "Error when creating the stacks");
// 	operation_push(&dst, &src);
// 	cr_expect(dst->node_count == 0, "dst node count incorrect");
// 	cr_expect(src->node_count == 0, "src node count incorrect");
// 	cr_expect(src->head == 0, "pushing empty to empty, nothing should have happened");
// 	cr_expect(dst->head == 0, "pushing empty to empty, nothing should have happened");
// 	free_stack(&dst);
// 	free_stack(&src);
// }

// Test(sh_operations_swap, full)
// {
// 	t_stack	*stack;
// 	t_clist	*first;
// 	t_clist	*second;
// 	t_clist	*third;
// 	t_clist	*last;

// 	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
// 	cr_assert(append_to_stack(14, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(1322, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(2343214, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(1544, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-14, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(4, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-32, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(1, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-288724679, &stack) == 1, "Error when appending nodes");
// 	first = stack->head;
// 	second = stack->head->next;
// 	third = stack->head->next->next;
// 	last = stack->head->prev;
// 	operation_swap(&stack);
// 	cr_expect(stack->node_count == 9, "node count should be the same after swap");
// 	cr_expect(stack->head->data == 1322, "data of first node incorrect");
// 	cr_expect(stack->head->next->data == 14, "data of second node incorrect");
// 	cr_expect(first == stack->head->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->next->next->next->next->next->next->next->next->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->prev->prev->prev->prev->prev->prev->prev->prev->prev, "swap linking incorrect");
// 	cr_expect(second == stack->head, "swap linking incorrect");
// 	cr_expect(third == stack->head->next->next, "swap linking incorrect");
// 	cr_expect(last == stack->head->prev, "swap linking incorrect");
// }

// Test(sh_operations_swap, three_nodes)
// {
// 	t_stack	*stack;
// 	t_clist	*first;
// 	t_clist	*second;
// 	t_clist	*third;
// 	t_clist	*last;

// 	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
// 	cr_assert(append_to_stack(-4, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-32, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-8724679, &stack) == 1, "Error when appending nodes");
// 	first = stack->head;
// 	second = stack->head->next;
// 	third = stack->head->next->next;
// 	last = stack->head->prev;
// 	operation_swap(&stack);
// 	cr_expect(stack->node_count == 3, "node count should be the same after swap");
// 	cr_expect(stack->head->data == -32, "data of first node incorrect");
// 	cr_expect(stack->head->next->data == -4, "data of second node incorrect");
// 	cr_expect(first == stack->head->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->next->next->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->prev->prev->prev, "swap linking incorrect");
// 	cr_expect(second == stack->head, "swap linking incorrect");
// 	cr_expect(third == stack->head->next->next, "swap linking incorrect");
// 	cr_expect(last == stack->head->prev, "swap linking incorrect");
// }

// Test(sh_operations_swap, two_nodes)
// {
// 	t_stack	*stack;
// 	t_clist	*first;
// 	t_clist	*second;
// 	t_clist	*third;
// 	t_clist	*last;

// 	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
// 	cr_assert(append_to_stack(614, &stack) == 1, "Error when appending nodes");
// 	cr_assert(append_to_stack(-4679, &stack) == 1, "Error when appending nodes");
// 	first = stack->head;
// 	second = stack->head->next;
// 	third = stack->head->next->next;
// 	last = stack->head->prev;
// 	operation_swap(&stack);
// 	cr_expect(stack->node_count == 2, "node count should be the same after swap");
// 	cr_expect(stack->head->data == -4679, "data of first node incorrect");
// 	cr_expect(stack->head->next->data == 614, "data of second node incorrect");
// 	cr_expect(first == stack->head->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->next->next, "swap linking incorrect");
// 	cr_expect(second == stack->head->prev->prev, "swap linking incorrect");
// 	cr_expect(second == stack->head, "swap linking incorrect");
// 	cr_expect(third == stack->head->next->next, "swap linking incorrect");
// 	cr_expect(last == stack->head->prev, "swap linking incorrect");
// }

// Test(sh_operations_swap, one_node)
// {
// 	t_stack	*stack;
// 	t_clist	*first;
// 	t_clist	*last;

// 	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
// 	cr_assert(append_to_stack(1, &stack) == 1, "Error when appending nodes");
// 	first = stack->head;
// 	last = stack->head->prev;
// 	operation_swap(&stack);
// 	cr_expect(stack->node_count == 1, "node count should be the same after swap");
// 	cr_expect(stack->head->data == 1, "data of first node incorrect");
// 	cr_expect(stack->head->next->data == 1, "data of second node incorrect");
// 	cr_expect(first == stack->head->next, "swap with one node, nothing should happen");
// 	cr_expect(last == stack->head->prev, "swap with one node, nothing should happen");
// }

// Test(sh_operations_swap, empty)
// {
// 	t_stack	*stack;

// 	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
// 	operation_swap(&stack);
// 	cr_expect(stack->node_count == 0, "node count should be the same after swap");
// 	cr_expect(stack->head == 0, "swap with empty stack, nothing should have happened");
// }

Test(sh_operations_rotate, full)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*second;
	t_clist	*third;
	t_clist	*last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(311, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(2, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(3, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(1, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(32, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(6, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(5, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(8, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	second = stack->head->next;
	third = stack->head->next->next;
	last = stack->head->prev;
	operation_rotate(&stack);
	cr_expect(stack->node_count == 8, "node count should be the same after rotate");
	cr_expect(stack->head->data == 2, "data of first node incorrect");
	cr_expect(second->data == stack->head->data, "data of first node incorrect");
	cr_expect(second == stack->head, "rotate linking incorrect");
	cr_expect(second == stack->head->next->next->next->next->next->next->next->next, "rotate linking incorrect");
	cr_expect(third == stack->head->next, "rotate linking incorrect");
	cr_expect(first == stack->head->prev, "rotate linking incorrect");
	cr_expect(last == stack->head->prev->prev, "rotate linking incorrect");
}

Test(sh_operations_rotate, three_nodes)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*second;
	t_clist	*third;
	t_clist	*last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(1, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(6, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(8, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	second = stack->head->next;
	third = stack->head->next->next;
	last = stack->head->prev;
	operation_rotate(&stack);
	cr_expect(stack->node_count == 3, "node count should be the same after rotate");
	cr_expect(stack->head->data == 6, "data of first node incorrect");
	cr_expect(second->data == stack->head->data, "data of first node incorrect");
	cr_expect(second == stack->head, "rotate linking incorrect");
	cr_expect(second == stack->head->next->next->next, "rotate linking incorrect");
	cr_expect(third == stack->head->next, "rotate linking incorrect");
	cr_expect(first == stack->head->prev, "rotate linking incorrect");
	cr_expect(last == stack->head->prev->prev, "rotate linking incorrect");
}

Test(sh_operations_rotate, two_nodes)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*second;
	t_clist	*last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(-311, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(2, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	second = stack->head->next;
	last = stack->head->prev;
	operation_rotate(&stack);
	cr_expect(stack->node_count == 2, "node count should be the same after rotate");
	cr_expect(stack->head->data == 2, "data of first node incorrect");
	cr_expect(second->data == stack->head->data, "data of first node incorrect");
	cr_expect(second == stack->head, "rotate linking incorrect");
	cr_expect(second == stack->head->next->next, "rotate linking incorrect");
	cr_expect(first == stack->head->prev, "rotate linking incorrect");
	cr_expect(last == stack->head->prev->prev, "rotate linking incorrect");
}

Test(sh_operations_rotate, one_node)
{
	t_stack	*stack;
	t_clist	*first;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(311, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	operation_rotate(&stack);
	cr_expect(stack->node_count == 1, "node count should be the same after rotate");
	cr_expect(stack->head->data == 311, "data of first node incorrect");
	cr_expect(first == stack->head, "rotate with one node, nothing should have happened");
}

Test(sh_operations_rotate, empty)
{
	t_stack	*stack;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	operation_rotate(&stack);
	cr_expect(stack->node_count == 0, "node count should be the same after rotate");
	cr_expect(stack->head == 0, "rotate with empty stack, nothing should have happened");
}

Test(sh_operations_rev_rotate, full)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*second;
	t_clist	*last;
	t_clist	*second_last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(311, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(2, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(3, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(1, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(32, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(6, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(5, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(8, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	second = stack->head->next;
	last = stack->head->prev;
	second_last = stack->head->prev->prev;
	operation_rev_rotate(&stack);
	cr_expect(stack->node_count == 8, "node count should be the same after rotate");
	cr_expect(stack->head->data == 8, "data of first node incorrect");
	cr_expect(last->data == stack->head->data, "data of first node incorrect");
	cr_expect(last == stack->head, "rev rotate linking incorrect");
	cr_expect(last == stack->head->next->next->next->next->next->next->next->next, "rev rotate linking incorrect");
	cr_expect(first == stack->head->next, "rev rotate linking incorrect");
	cr_expect(second == stack->head->next->next, "rev rotate linking incorrect");
	cr_expect(second_last == stack->head->prev, "rev rotate linking incorrect");
}

Test(sh_operations_rev_rotate, three_nodes)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*second;
	t_clist	*last;
	t_clist	*second_last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(-3, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(-1, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(-5, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	second = stack->head->next;
	last = stack->head->prev;
	second_last = stack->head->prev->prev;
	operation_rev_rotate(&stack);
	cr_expect(stack->node_count == 3, "node count should be the same after rotate");
	cr_expect(stack->head->data == -5, "data of first node incorrect");
	cr_expect(last->data == stack->head->data, "data of first node incorrect");
	cr_expect(last == stack->head, "rev rotate linking incorrect");
	cr_expect(last == stack->head->next->next->next, "rev rotate linking incorrect");
	cr_expect(first == stack->head->next, "rev rotate linking incorrect");
	cr_expect(second == stack->head->next->next, "rev rotate linking incorrect");
	cr_expect(second_last == stack->head->prev, "rev rotate linking incorrect");
}

Test(sh_operations_rev_rotate, two_nodes)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*last;
	t_clist	*second_last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(-3, &stack) == 1, "Error when appending nodes");
	cr_assert(append_to_stack(-5, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	last = stack->head->prev;
	second_last = stack->head->prev->prev;
	operation_rev_rotate(&stack);
	cr_expect(stack->node_count == 2, "node count should be the same after rotate");
	cr_expect(stack->head->data == -5, "data of first node incorrect");
	cr_expect(last->data == stack->head->data, "data of first node incorrect");
	cr_expect(last == stack->head, "rev rotate linking incorrect");
	cr_expect(last == stack->head->next->next, "rev rotate linking incorrect");
	cr_expect(first == stack->head->next, "rev rotate linking incorrect");
	cr_expect(second_last == stack->head->prev, "rev rotate linking incorrect");
}

Test(sh_operations_rev_rotate, one_node)
{
	t_stack	*stack;
	t_clist	*first;
	t_clist	*last;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	cr_assert(append_to_stack(-3, &stack) == 1, "Error when appending nodes");
	first = stack->head;
	last = stack->head->prev;
	operation_rev_rotate(&stack);
	cr_expect(stack->node_count == 1, "node count should be the same after rotate");
	cr_expect(stack->head->data == -3, "data of first node incorrect");
	cr_expect(last->data == stack->head->data, "data of first node incorrect");
	cr_expect(last == stack->head, "rev rotate with one node, nothing should have happened");
	cr_expect(last == stack->head->next->next, "rev rotate with one node, nothing should have happened");
	cr_expect(first == stack->head->next, "rev rotate with one node, nothing should have happened");
}

Test(sh_operations_rev_rotate, empty)
{
	t_stack	*stack;

	cr_assert(create_stack(&stack) == 1, "Error when creating the stack");
	operation_rev_rotate(&stack);
	cr_expect(stack->node_count == 0, "node count should be the same after rotate");
	cr_expect(stack->head == 0, "rev rotate with empty stack, nothing should have happened");
}