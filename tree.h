#ifndef TREE_H

//双亲表示法的存储结构
typedef struct PTNode{
    int data;
    int parent;
}PTNode;

#define MAX_TREE_SIZE 100
typedef struct PTree{
    PTNode nodes[MAX_TREE_SIZE];
    int n;
}PTree;

//孩子兄弟表示法的存储结构
typedef struct CSNode{
    int data;
    struct CSNode *firstchild, *nextsibling;
}CSNode, *CSTree;

#endif