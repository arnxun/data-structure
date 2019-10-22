#ifndef BINARY_TREE_H

//二叉树的链式存储结构
typedef struct BiTNode{
    int data;                               //数据域 类型根据业务
    struct BiTNode *lchild, *rchild;        //左右孩子指针
}BiTNode, *BiTree;

//线索二叉树的存储结构
typedef struct ThreadNode{
    int data;                               //数据元素
    struct ThreadNode *lchild, *rchild;     //左右孩子指针
    int ltag, rtag;                         //左右线索标志
}ThreadNode, *ThreadTree;

void PreOrder(BiTree T);

void InOrder(BiTree T);

void PostOrder(BiTree);

void InOrder2(BiTree T);      //中序遍历的非递归算法

void LeverOrder(BiTree T);    //层次遍历

//中序遍历线索化
void InThread(ThreadTree &p, ThreadTree &pre);

void CreateInThread(ThreadTree T);

ThreadNode *FirstNode(ThreadNode *p);

ThreadNode *NextNode(ThreadNode *p);

//二叉排序树查找
BiTNode *BST_Search(BiTree T, int key, BiTNode *&p);
void Create_BST(BiTree &T, int str[], int n);

#endif