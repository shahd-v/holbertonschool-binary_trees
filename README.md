# Binary Trees

## Description

A binary tree is a data structure where each node has at most two children, referred to as the left child and the right child. This project implements binary tree operations in C from scratch, covering node creation, traversal, measurement, and structural checks.

## Team

| Member | Tasks | Focus |
|--------|-------|-------|
| Shahd | 0–5 | Node creation, insertion, deletion, leaf/root checks + project setup |
| Sara | 6–11 | Tree traversals, height, depth, size |
| Ahad | 12–18 | Leaves, nodes, balance factor, full/perfect checks, sibling, uncle |

## Data Structures

```c
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;
typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;
```

## Files

| File | Prototype | Description |
|------|-----------|-------------|
| `binary_trees.h` | — | Header file with struct definition and all prototypes |
| `0-binary_tree_node.c` | `binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)` | Creates a new binary tree node |
| `1-binary_tree_insert_left.c` | `binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)` | Inserts a node as the left child |
| `2-binary_tree_insert_right.c` | `binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)` | Inserts a node as the right child |
| `3-binary_tree_delete.c` | `void binary_tree_delete(binary_tree_t *tree)` | Deletes an entire binary tree |
| `4-binary_tree_is_leaf.c` | `int binary_tree_is_leaf(const binary_tree_t *node)` | Checks if a node is a leaf |
| `5-binary_tree_is_root.c` | `int binary_tree_is_root(const binary_tree_t *node)` | Checks if a node is the root |
| `6-binary_tree_preorder.c` | `void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))` | Pre-order traversal |
| `7-binary_tree_inorder.c` | `void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))` | In-order traversal |
| `8-binary_tree_postorder.c` | `void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))` | Post-order traversal |
| `9-binary_tree_height.c` | `size_t binary_tree_height(const binary_tree_t *tree)` | Measures the height of a tree |
| `10-binary_tree_depth.c` | `size_t binary_tree_depth(const binary_tree_t *tree)` | Measures the depth of a node |
| `11-binary_tree_size.c` | `size_t binary_tree_size(const binary_tree_t *tree)` | Counts total number of nodes |
| `12-binary_tree_leaves.c` | `size_t binary_tree_leaves(const binary_tree_t *tree)` | Counts leaf nodes |
| `13-binary_tree_nodes.c` | `size_t binary_tree_nodes(const binary_tree_t *tree)` | Counts internal nodes |
| `14-binary_tree_balance.c` | `int binary_tree_balance(const binary_tree_t *tree)` | Measures the balance factor |
| `15-binary_tree_is_full.c` | `int binary_tree_is_full(const binary_tree_t *tree)` | Checks if a tree is full |
| `16-binary_tree_is_perfect.c` | `int binary_tree_is_perfect(const binary_tree_t *tree)` | Checks if a tree is perfect |
| `17-binary_tree_sibling.c` | `binary_tree_t *binary_tree_sibling(binary_tree_t *node)` | Finds the sibling of a node |
| `18-binary_tree_uncle.c` | `binary_tree_t *binary_tree_uncle(binary_tree_t *node)` | Finds the uncle of a node |

## Compilation

```bash
gcc -Wall -Wextra -Werror -pedantic -std=gnu89 binary_tree_print.c <main_file.c> <task_file.c> -o output
```

## Requirements

- OS: Ubuntu 20.04 LTS
- Compiler: gcc with `-Wall -Werror -Wextra -pedantic -std=gnu89`
- Style: Betty (`betty-style.pl` and `betty-doc.pl`)
- No global variables
- Maximum 5 functions per file
- All prototypes in `binary_trees.h`
- Header files must be include-guarded

## Repository

- GitHub: [holbertonschool-binary_trees](https://github.com/holbertonschool-binary_trees)
