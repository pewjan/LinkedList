#ifndef BINARYTREE_H
#define BINARYTREE_H

class BinaryTree{

private:
  struct BinaryNode{
    int value;
    BinaryNode * leftNode;
    BinaryNode * rightNode;
  };

  BinaryNode * rootNode;
  void insert(BinaryNode  * rootNode, int x);
  void find(BinaryNode  * rootNode);
  
  //BinaryTree::BinaryNode * deleteNode(BinaryNode * rootNode, int x);
public:
  BinaryTree();
  void Search(int);
  void Add(int);
  void InOrderTraversal();
  //void Remove(int);




};




#endif