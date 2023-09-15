![BINARY TREES](https://github.com/powerofcode2023/holbertonschool-binary_trees/assets/135613629/30329313-61ac-4e76-86e2-e4c567967dd5)



# C - Binary Tree

## Description

A binary tree is a tree data structure in which each node has at most two children, which are referred to as the left child and the right child.

## Requirements

```git clone https://github.com/powerofcode2023/holbertonschool-binary_trees.git```

### data structures

we use the following data structures and types for binary trees :

- Basic Binary Tree:

```bash
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
```

- Binary Search Tree: A binary tree where the left child node is smaller than the parent node and the right child node is larger than the parent node

```bash
typedef struct binary_tree_s bst_t;
```

- AVL Tree: A self-balancing binary search tree

```bash
typedef struct binary_tree_s avl_t;
```

- A Max Binary Heap: Is a specific type of binary heap data structure in which the value of the parent node is always greater than or equal to its child nodes. In other words, the largest value in the heap is stored at the root of the binary tree.

```bash
typedef struct binary_tree_s heap_t;
```

## Files

Here's a brief description of each file:

binary_trees.h: Header file that includes all the prototypes of the functions and the data structure to handle binary trees.

0-binary_tree_node.c: Contains a function that creates a binary tree node.

1-binary_tree_insert_left.c: Contains a function that inserts a node as the left-child of another node.

2-binary_tree_insert_right.c: Contains a function that inserts a node as the right-child of another node.

3-binary_tree_delete.c: Contains a function that deletes an entire binary tree.

4-binary_tree_is_leaf.c: Contains a function that checks if a node is a leaf.

5-binary_tree_is_root.c: Contains a function that checks if a given node is a root.

6-binary_tree_preorder.c: Contains a function that goes through a binary tree using pre-order traversal.

7-binary_tree_inorder.c: Contains a function that goes through a binary tree using in-order traversal.

8-binary_tree_postorder.c: Contains a function that goes through a binary tree using post-order traversal.

9-binary_tree_height.c: Contains a function that measures the height of a binary tree.

10-binary_tree_depth.c: Contains a function that measures the depth of a node in a binary tree.

11-binary_tree_size.c: Contains a function that measures the size of a binary tree.

12-binary_tree_leaves.c: Contains a function that counts the leaves in a binary tree.

13-binary_tree_nodes.c: Contains a function that counts the nodes with at least 1 child in a binary tree.

14-binary_tree_balance.c: Contains a function that measures the balance factor of a binary tree.

15-binary_tree_is_full.c: Contains a function that checks if a binary tree is full.

16-binary_tree_is_perfect.c: Contains a function that checks if a binary tree is perfect.

17-binary_tree_sibling.c: Contains a function that finds the sibling of a node.

18-binary_tree_uncle.c: Contains a function that finds the uncle of a node.

## Authors:

#### [Mokhtar IDOUDI](https://github.com/idoudi2020/)
#### [Abdelkader AOUAR](https://github.com/powerofcode2023/)
