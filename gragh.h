#ifndef TREE_H

#define MaxVertexNum 100

// 邻接矩阵存储结构
typedef char VertexType;
typedef int EdgeType;
typedef struct MGragh{
    VertexType Vex[MaxVertexNum];
    EdgeType Edge[MaxVertexNum][MaxVertexNum];
    int vernum, arcnum;
}MGragh;

// 邻接表存储结构
typedef struct ArcNode{
    int adjvex;
    struct ArcNode *next;
}ArcNode;

typedef struct VNode{
    VertexType data;
    ArcNode *first;
}VNode, AdjList[MaxVertexNum];

typedef struct ALGraph{
    AdjList vertices;
    int vexnum, arcnum;
}ALGraph;


#endif