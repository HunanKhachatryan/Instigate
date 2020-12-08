#include <iostream>
#include "binarytree.h"
using namespace std;

int main()
{
    BTree* tree = new BTree();
    
    tree->insert(10);
    tree->insert(6);
    tree->insert(5);
    tree->insert(8);
    tree->insert(14);
    tree->insert(17);
    tree->insert(11);
    std::cout << tree->search(3) << std::endl;
        delete tree;
    return 0;
}

