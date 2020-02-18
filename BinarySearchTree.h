//
// Created by ojcch on 2/3/2020.
//

#ifndef TREES_BINARYSEARCHTREE_H
#define TREES_BINARYSEARCHTREE_H

#include "TreeNode.h"
#include <string>


using namespace std;

template<class Object>
class BinarySearchTree {
private:
    TreeNode<Object> *root;

    TreeNode<Object> *find(TreeNode<Object> *node, Object element);
    TreeNode<Object>* insert(TreeNode<Object> *node, Object newElement);
    TreeNode<Object> * findMin(TreeNode<Object> *node);
    TreeNode<Object> * findMax(TreeNode<Object> *node);
    TreeNode<Object> * remove(TreeNode<Object> *node, Object element);
    int find_balance(TreeNode<Object> *node);
    TreeNode<Object> * balance(TreeNode<Object> *node);
    TreeNode<Object> * rotate_left(TreeNode<Object> *node);
    TreeNode<Object> * rotate_right(TreeNode<Object> *node);
    void printTree(TreeNode<Object> *node, string prefix, int level);
public:
    explicit BinarySearchTree(Object element);
    TreeNode<Object> *find(Object element);
    TreeNode<Object> * findMin();
    TreeNode<Object> * findMax();
    void insert(Object element);
    void printTree();
    void  remove(Object element);

    virtual ~BinarySearchTree();

};

template class BinarySearchTree<int>;
template class BinarySearchTree<char>;
template class BinarySearchTree<string>;
template class BinarySearchTree<float>;
template class BinarySearchTree<double>;

#endif //TREES_BINARYSEARCHTREE_H
