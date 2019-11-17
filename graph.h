#ifndef GRAPH_H
#define GRAPH_H
#define MaxVertexNum 100

// 邻接矩阵存储结构
typedef char VertexType;
typedef int EdgeType;
typedef struct MGragh{
    VertexType Vex[MaxVertexNum]; //顶点表
    EdgeType Edge[MaxVertexNum][MaxVertexNum]; //邻接矩阵、边表
    int vernum, arcnum;
}MGraph;

// 邻接表存储结构
typedef struct ArcNode{
    int adjvex;
    struct ArcNode *next;
}ArcNode; // 边表结点

typedef struct VNode{
    VertexType data;
    ArcNode *first;
}VNode, AdjList[MaxVertexNum]; //顶点表结点

typedef struct ALGraph{
    AdjList vertices; //邻接表
    int vexnum, arcnum; //顶点数与弧数
}ALGraph;

#endif