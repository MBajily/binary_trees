#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>
#include <limits.h>

/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer in node
 * @parent: the parent node
 * @left: the left child node
 * @right: the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
};
typedef struct binary_tree_s binary_tree_t;

/**
 * struct levelorder_queue_s - Level order traversal queue.
 * @node: A node.
 * @next: The next node.
 */
typedef struct levelorder_queue_s
{
	binary_tree_t *node;
	struct levelorder_queue_s *next;
} levelorder_queue_t;


/* Printing helper function */
void binary_tree_print(const binary_tree_t *);

/* Task function prototypes */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif
