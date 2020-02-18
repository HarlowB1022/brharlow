//
// Created by ojcch on 2/3/2020.
//

#include "bst/TreeNode.h"

template<class Object>
TreeNode<Object>::TreeNode(Object element) {
    this->element = element;
}

template<class Object>
TreeNode<Object>::~TreeNode() {
    if (left != nullptr) delete left;
    if (right != nullptr) delete right;
    left = nullptr;
    right = nullptr;
    height = 0;
}
