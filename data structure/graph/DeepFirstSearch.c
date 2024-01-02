//
// Created by 34043 on 2023/8/29.
//
#include <stdio.h>
#include <stdlib.h>
#define MaxVertex 10

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
/**
 * 深度优先遍历
 * @param graph         图
 * @param startVertex   顶下标
 * @param targetVertex  目标下标
 * @param visited       已经搜索过的结点数组
 */
//void dfs(Graph graph, int startVertex, int targetVertex, int * visited){
//    //输出结点
//    printf("%c -> ",graph->vertex[startVertex].element);
//    //将当前结点标记为已搜索
//    visited[startVertex] = 1;
//    //获取边
//    LNode node = graph->vertex[startVertex].next;
//    //直到没有边为止
//    while (node){
//        //如果该结点没有被标记
//        if (!visited[node->nextVertex])
//            //从邻接点继续搜索
//            dfs(graph, node->nextVertex, targetVertex, visited);
//        //迭代
//        node = node->next;
//    }
//}
/**
 * 深度优先搜索
 * @param graph         图
 * @param startVertex   顶下标
 * @param targetVertex  目标下标
 * @param visited       已经搜索过的结点数组
 * @return              是否搜索到目标
 */
_Bool dfs(Graph graph, int startVertex, int targetVertex, int * visited){
    //输出结点
    printf("%c -> ",graph->vertex[startVertex].element);
    //将当前结点标记为已搜索
    visited[startVertex] = 1;
    //找到了,返回1
    if (startVertex == targetVertex)    return 1;
    //获取边
    LNode node = graph->vertex[startVertex].next;
    //直到没有边为止
    while (node){
        //如果该结点没有被标记
        if (!visited[node->nextVertex])
            //从邻接点继续搜索
            if (dfs(graph, node->nextVertex, targetVertex, visited))
                //找到了,结束,返回1
                return 1;
        //迭代
        node = node->next;
    }
    //没找到
    return 0;
}

int main(){
    Graph graph = create();
    for (int c = 'A'; c <= 'G' ; ++c)
        addVertex(graph, (char) c);
    addEdge(graph, 0, 1);   //A -> B
    addEdge(graph, 1, 2);   //B -> C
    addEdge(graph, 1, 3);   //B -> D
    addEdge(graph, 1, 4);   //C -> D
    addEdge(graph, 4, 5);   //D -> A

    int arr[graph->vertexCount];
    for (int i = 0; i < graph->vertexCount; ++i) {
        arr[i] = 0;
    }
    printf("%d", dfs(graph, 0, 6, arr));
//    printGraph(graph);
}