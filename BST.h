// An integer binary search tree
#include <stdio.h>
#include <stdlib.h>
struct TreeNode {
  struct TreeNode *leftPtr;  // pointer to left subtree
  int data;                  // node value
  struct TreeNode *rightPtr; // pointer to right subtree
};                           // end structure treeNode

typedef struct TreeNode *TreeNodePtr; // synonym for TreeNode*

typedef struct {
  int size;
  TreeNodePtr root;
} BST;

// prototypes

void insertNode(BST *, int);

void insertNode_R(TreeNodePtr * t, int value) { //recursion
  if (*t == NULL) {
    *t =(TreeNodePtr)malloc(sizeof(struct TreeNode)); // malloc เมื่อเจอตำแหน่งว่าง
    if (*t) {
      (*t)->leftPtr = NULL;
      (*t)->rightPtr = NULL;
      (*t)->data = value;
    }
  } else {
    if ((*t)->data >= value)
      insertNode_R(&(*t)->leftPtr, value); // left

    else
      insertNode_R(&(*t)->rightPtr, value); // right
  }
}

void insertNode(BST *b, int value) {
  TreeNodePtr t = b->root, new_node; // tชี้ไปที่ root เสมอ
  int inserted = 0;
  new_node = (TreeNodePtr)malloc(
      sizeof(struct TreeNode)); //ได้มา 1 กล่อง 3 ค่า left mid(data) right
  if (new_node) {
    new_node->leftPtr = NULL;
    new_node->rightPtr = NULL;
    new_node->data = value; //ใส่กลางกล่อง

    /*First Node*/
    if (!b->root) //แปลว่าถ้าเป็น null ; ! = not
    {
      b->root = new_node;
    } else {
      while (!inserted) {
        if (t->data >= value) {
          /* move/insert to the left*/
          if (t->leftPtr == NULL) {

          } else {

          }
        }

        else {
          if (t->rightPtr == NULL) {

          } else {

          }
        }

      } // end while
    }   // end else;
  }
  b->size++;

} // end function

void inOrder(TreeNodePtr treePtr) {
  // if tree is not empty, then traverse
  if (treePtr != NULL) {

  }                             // end if
} // end

