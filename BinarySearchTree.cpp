//
// Created by ojcch on 2/3/2020.
// **editted by Ben Harlow 2/18/20

#include "bst/BinarySearchTree.h"


# include <iostream>

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::find(Object element) {
    return find(this->root, element);
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::find(TreeNode<Object> *node, Object element) {
    if (node == nullptr)
        return nullptr;
    else if (node->element == element)
        return node;
    else if (node->element < element)
        return find(node->right, element);
    else
        return find(node->left, element);
}

template<class Object>
BinarySearchTree<Object>::BinarySearchTree(Object element) {
    root = new TreeNode<Object>(element);
}

template<class Object>
void BinarySearchTree<Object>::insert(Object element) {
    this->root = this->insert(root, element);
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::insert(TreeNode<Object> *node, Object newElement) {
    if (node == nullptr)                                    //If node is a nullptr then we have reached the child of a leaf and the new element should be placed there
        return new TreeNode<Object>(newElement);
    else if (node->element < newElement) {
        node->right = insert(node->right, newElement);
        if (node->left == nullptr)
            node->height = node->right->height + 1;         //The height of a node is always one more that its highest child
        else if (node->left->height > node->right->height)
            node->height = node->left->height + 1;
        else
            node->height = node->right->height + 1;
    }
    else if (node->element > newElement) {
        node->left = insert(node->left, newElement);
        if (node->right == nullptr)                  //The height of a node is always one more that its highest child
            node->height = node->left->height + 1;
        else if (node->left->height > node->right->height)
            node->height = node->left->height + 1;
        else
            node->height = node->right->height + 1;
    }
    return balance(node);
}

template<class Object>
void BinarySearchTree<Object>::printTree() {
    printTree(this->root, "R:", 0);
}

template<class Object>
void BinarySearchTree<Object>::printTree(TreeNode<Object> *node, string prefix, int level) {

    if (node == nullptr) return;
    string levelStr;
    for (int i = 0; i < level; ++i) {
        levelStr.append("  ");
    }
    cout << levelStr << prefix << node->element << endl;
    printTree(node->left, "Lf:", level + 1);
    printTree(node->right, "Rg:", level + 1);

}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::findMin() {
    return findMin(this->root);
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::findMax() {
    return findMax(this->root);
}


template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::findMin(TreeNode<Object> *node) {
    if (node == nullptr) return nullptr;
    if (node->left == nullptr) return node;
    return findMin(node->left);
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::findMax(TreeNode<Object> *node) {
    if (node == nullptr) return nullptr;
    if (node->right == nullptr) return node;
    return findMax(node->right);
}

template<class Object>
void BinarySearchTree<Object>::remove(Object element) {
    this->root = this->remove(this->root, element);
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::remove(TreeNode<Object> *node, Object element) {
//nothing to do here
    if (node == nullptr) return nullptr;
//if node < element --> the element is in the right subtree, remove it
    if (node->element < element) {
        node->right = remove(node->right, element);
        if (node->left == nullptr && node->right == nullptr)
            node->height = 1;               //The height of a leaf node is 1
        else if (node->right != nullptr) {
            if (node->left == nullptr)
                node->height = node->right->height + 1;    //The height of a node is always one more that its highest child
            else if (node->left->height > node->right->height)
                node->height = node->left->height + 1;
            else
                node->height = node->right->height + 1;
        }
        else
            node->height = node->left->height + 1;
    }
//if node > element --> the element is in the left subtree, remove it
    else if (node->element > element){
        node->left = remove(node->left, element);
        if (node->left == nullptr && node->right == nullptr)
            node->height = 1;                                   //The height of a leaf node is one
        else if (node->right != nullptr) {
            if (node->left == nullptr)
                node->height = node->right->height + 1;      //The height of a node is always one more that its highest child
            else if (node->left->height > node->right->height)
                node->height = node->left->height + 1;
            else
                node->height = node->right->height + 1;
        }
        else
            node->height = node->left->height + 1;
    }
//if node == element then remove it
    else {
//temporal variable
        TreeNode<Object> *temp = nullptr;
//case: the node has two children
//approach: replace the node with the min in the right subtree and then remove the min
        if (node->left != nullptr && node->right != nullptr) {
            temp = findMin(node->right);
            node->element = temp->element;
            node->right = remove(node->right, temp->element);
            if (node->left == nullptr && node->right == nullptr)
                node->height = 1;
            else if (node->right != nullptr) {
                if (node->left == nullptr)
                    node->height = node->right->height + 1;       //The height of a node is always one more that its highest child
                else if (node->left->height > node->right->height)
                    node->height = node->left->height + 1;
                else
                    node->height = node->right->height + 1;
            }
            else
                node->height = node->left->height + 1;
        }
        else {
//if no left/right child, then node should be the right/left child
            if (node->left == nullptr) temp = node->right; else temp = node->left;
            delete (node);
            node = temp;
        }
    }
    return balance(node);
}
template <class Object>
int BinarySearchTree<Object>:: find_balance(TreeNode<Object> * node){   //computes the balance (right child height - left child height)
    if (node == nullptr) return 0;
    if (node->left == nullptr && node->right == nullptr)
        return 0;
    else if (node->left == nullptr)
        return node->right->height;
    else if (node->right == nullptr)
        return -1*node->left->height;
    else
        return node->right->height - node->left->height;

}
template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::balance(TreeNode<Object> * node) {
    int balance = this->find_balance(node);
    if (abs(balance) < 2)                       //if balance is 0,1, or -1 no rotations needed
        return node;
    else if (balance < -1) {                                                //if balance is -2 then a right rotation is needed
        if (node->left->right != nullptr && this->find_balance(node->left->right) == 1)      //checks for double rotation case
            node->left = rotate_right(node->left);
        return rotate_right(node);
    } else if (balance > 1) {                                               //if balance is 2 then a right rotation is needed
        if (node->right->left != nullptr && this->find_balance(node->right->left) == 1)     //checks for double rotation case
            node->right = rotate_left(node->right);
        return rotate_left(node);
    }
}

template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::rotate_left(TreeNode<Object> *node) {
    auto right = node->right;
    auto carried = right->left;
    right->left = node;                           //the current sub-root becomes the left child of its right child
    node = right;                                 //the original right child becomes the new sub-root
    node->left->right = carried;                 //the new sub-root's old left child becomes the old node's right
    node->left->height = node->left->height - 2;
    node->height = node->left->height + 1;
    return node;
}
template<class Object>
TreeNode<Object> *BinarySearchTree<Object>::rotate_right(TreeNode<Object> *node) {
    auto left = node->left;
    auto carried = left->right;
    left->right = node;                             //the current sub-root becomes the right child of its left child
    node = left;                                    //the original left child becomes the new sub-root
    node->right->left = carried;                    //the new sub-root's old right child becomes the old node's left
    node->right->height = node->right->height - 2;
    node->height = node->right->height + 1;
    return node;
}

template<class Object>
BinarySearchTree<Object>::~BinarySearchTree() {
    delete this->root;
}
