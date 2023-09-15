C - Binary Tree


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


## Authors:

#### [Mokhtar IDOUDI](https://github.com/idoudi2020/)
#### [Abdelkader AOUAR](https://github.com/powerofcode2023/)s
