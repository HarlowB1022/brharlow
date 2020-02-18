

#include <string>
#include <iostream>
#include "bst/BinarySearchTree.h"

void runBST();

void runAVL();

void printTreeNode(string prefix, TreeNode<int> *node) {
    if (node != nullptr) {
        cout << prefix << " found: " << node->element << endl;
    } else
        cout << prefix << " not found" << endl;
}

int main() {

    runBST();
    runAVL();

    return 0;
}

void runAVL() {
   //use an avl tree
}

void runBST() {
    BinarySearchTree<int> *tree = new BinarySearchTree<int>(10);
    tree->insert(5);
    tree->insert(4);
    tree->insert(3);
    tree->insert(6);
    tree->insert(7);
    tree->insert(8);
    tree->insert(9);
    tree->insert(18);
    tree->insert(17);
    tree->insert(16);
    tree->insert(15);
    tree->insert(14);

    tree->printTree();
    TreeNode<int> *node = tree->find(17);

    printTreeNode("node", node);

    node = tree->findMin();
    printTreeNode("min", node);
    node = tree->findMax();
    printTreeNode("max", node);


    int elem = 2;
    tree->remove(elem);
    tree->printTree();

    node = tree->find(elem);
    printTreeNode("node", node);


    delete (tree);
}
