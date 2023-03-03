// An integer binary search tree

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
/*
void insertNode_R(TreeNodePtr * t,int value){
  if(t==NULL){
   t=new TreeNode;
         if(t){
                t->leftPtr=NULL;
                t->rightPtr=NULL;
                t->data=value;
   }
  }
  else{
     if(t->data>=value) //left

     else //right

   }
}
*/
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
            t->leftPtr =new_node; //ถ้าเขียนแค่บรรทัดนี้ มันจะเขียนค่าใหม่ ทับกัน จึงใส่ if ด้วย
            inserted = 1;
            printf("ใส่ left\n");
          } else {
            t = t->leftPtr;
            printf("ขยับ left\n");
          }
        }

        else {
          if (t->rightPtr == NULL) {
            t->rightPtr =new_node; //ถ้าเขียนแค่บรรทัดนี้ มันจะเขียนค่าใหม่ ทับกัน จึงใส่ if ด้วย
            inserted = 1;
            printf("ใส่ right\n");
          } else {
            t = t->rightPtr;
            printf("ขยับ right\n");
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

    inOrder(treePtr->leftPtr); // Recursion to the left

    printf("%3d", treePtr->data); // print the value

    inOrder(treePtr->rightPtr); // Recursion to the right
  }                             // end if
} // end
