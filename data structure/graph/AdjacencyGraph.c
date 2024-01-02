//
// Created by 34043 on 2023/8/29.
//
#include <stdio.h>
#include <stdlib.h>
#define MaxVertex 5

typedef char E;

typedef struct LinkedNode{
    int nextVertex;
    struct LinkedNode * next;
}   * LNode;

struct HeadNode{
    E element;
    LNode * next;
};

typedef struct AdjacencyGraph{
    int vertexCount;
    int edgeCount;
    struct HeadNode vertex[MaxVertex];
} * Graph;

Graph create(){
    Graph graph = malloc(sizeof (struct AdjacencyGraph));
    graph->vertexCount = graph->edgeCount = 0;
    return graph;
}

void addVertex(Graph graph, E element){
    graph->vertex[graph->vertexCount].element = element;
    graph->vertex[graph->vertexCount].next = NULL;
    graph->vertexCount++;
}

void addEdge(Graph graph, int a, int b){
    //获取头结点的下一个普通结点
    LNode node = graph->vertex[a].next;
    //为新结点分配内存空间
    LNode newNode = malloc(sizeof (struct LinkedNode));
    //新结点后继置空
    newNode->next = NULL;
    //设置边
    newNode->nextVertex = b;
    if (!node){  //头结点后面什么都没有
        graph->vertex[a].next = newNode;    //直接连接
    } else{ //如果头结点后面右结点
        do {
            //如果头结点后面结点恰恰就是邻接结点
            if (node->nextVertex == b) {
                //释放空间
                free(newNode);
                //返回
                return;
            }
            //如果头结点下一个结点不是最后一个结点,迭代
            if (node->next) node = node->next;
            //如果头结点下一个就是最后一个结点,循环结束
            else break;
        } while (1);
        //添加边
        node->next = newNode;
    }
    //计数器自增
    graph->edgeCount++;
}

void printGraph(Graph graph){
    for (int i = 0; i < graph->vertexCount; ++i) {
        printf("%d | %c",i,graph->vertex[i].element);
        LNode node = graph->vertex[i].next;
        while (node){
            printf(" -> %d",node->nextVertex);
            node = node->next;
        }
        printf("\n");
    }
}

int main(){
    Graph graph = create();
    for (int c = 'A'; c <= 'D' ; ++c)
        addVertex(graph, (char) c);
    addEdge(graph, 0, 1);   //A -> B
    addEdge(graph, 1, 2);   //B -> C
    addEdge(graph, 2, 3);   //C -> D
    addEdge(graph, 3, 0);   //D -> A
    addEdge(graph, 2, 0);   //C -> A

    printGraph(graph);
}