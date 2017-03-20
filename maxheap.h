#ifndef _MAXHEAP_H_
#define _MAXHEAP_H_

class TreeNode {
private:
   int ID;
   double total;
   TreeNode lchild;
   TreeNode rchild;

public:
   TreeNode(int ID);
   ~TreeNode();

   int getID();
   double getTotal();
   TreeNode getLchild();
   TreeNode getRchild();
   
   addToTotal(double amount);
}

class MaxHeap {

private:
   TreeNode root;
   int nodesNum;
   int depth;

public:
   MaxHeap();
   ~MaxHeap();

   add(int ID, double total = 0);
   remove(int ID);
}

#endif