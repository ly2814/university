//
// Created by 34043 on 2023/8/29.
//
#include <stdio.h>
#include <stdlib.h>
#define MaxVertex 10

//图
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

//队列
typedef int T;   //这里将顶点下标作为元素
typedef struct QueueNode {
    T element;
    struct QueueNode * next;
}   * QNode;
typedef struct Queue{
    QNode front, rear;
}   * LinkedQueue;
_Bool initQueue(LinkedQueue queue){
    QNode node = malloc(sizeof(struct QueueNode));
    if(node == NULL) return 0;
    queue->front = queue->rear = node;
    return 1;
}
_Bool offerQueue(LinkedQueue queue, T element){
    QNode node = malloc(sizeof(struct QueueNode));
    if(node == NULL) return 0;
    node->element = element;
    queue->rear->next = node;
    queue->rear = node;
    return 1;
}
_Bool isEmpty(LinkedQueue queue){
    return queue->front == queue->rear;
}
T pollQueue(LinkedQueue queue){
    T e = queue->front->next->element;
    QNode node = queue->front->next;
    queue->front->next = queue->front->next->next;
    if(queue->rear == node) queue->rear = queue->front;
    free(node);
    return e;
}

/**
 * 广度优先遍历
 * @param graph         图
 * @param startVertex   开始
 * @param targetVertex  目标
 * @param visited       是否被查找过
 * @param queue         辅助队列
 */
//void bfs(Graph graph, int startVertex, int targetVertex, int * visited, LinkedQueue queue){
//    //起始结点索引入队
//    offerQueue(queue, startVertex);
//    //设置为已查找
//    visited[startVertex] = 1;
//    //队列空为止
//    while (!isEmpty(queue)){
//        //出队
//        int next = pollQueue(queue);
//        //通过索引打印结点
//        printf("%c -> ", graph->vertex[next].element);
//        //获取结点的分支结点
//        LNode node = graph->vertex[next].next;
//        //只要分支结点不是空结点,一直向后遍历
//        while (node){
//            //当然,搜索的是没有被找过的邻接结点
//            if (!visited[node->nextVertex]){
//                //将他的邻接结点索引入队
//                offerQueue(queue, node->nextVertex);
//                //设置该结点已经被找到
//                visited[node->nextVertex] = 1;
//            }
//            //一直往后找
//            node = node->next;
//        }
//    }
//}

/**
 * 广度优先搜索
 * @param graph         图
 * @param startVertex   开始
 * @param targetVertex  目标
 * @param visited       是否被查找过
 * @param queue         辅助队列
 * @return              搜索结果
 */
_Bool bfs(Graph graph, int startVertex, int targetVertex, int * visited, LinkedQueue queue){
    //起始结点索引入队
    offerQueue(queue, startVertex);
    //设置为已查找
    visited[startVertex] = 1;
    //队列空为止
    while (!isEmpty(queue)){
        //出队
        int next = pollQueue(queue);
        //通过索引打印结点
        printf("%c -> ", graph->vertex[next].element);
        //获取结点的分支结点
        LNode node = graph->vertex[next].next;
        //只要分支结点不是空结点,一直向后遍历
        while (node){
            if (node->nextVertex == targetVertex)   return 1;
            //当然,搜索的是没有被找过的邻接结点
            if (!visited[node->nextVertex]){
                //将他的邻接结点索引入队
                offerQueue(queue, node->nextVertex);
                //设置该结点已经被找到
                visited[node->nextVertex] = 1;
            }
            //一直往后找
            node = node->next;
        }
    }
    return 0;
}

int main(){Graph graph = create();
    for (int c = 'A'; c <= 'G' ; ++c)
        addVertex(graph, (char) c);
    addEdge(graph, 0, 1);   //A -> B
    addEdge(graph, 1, 2);   //B -> C
    addEdge(graph, 1, 3);   //B -> D
    addEdge(graph, 1, 4);   //C -> D
    addEdge(graph, 4, 5);   //D -> A

    int arr[graph->vertexCount];
    struct Queue queue;
    initQueue(&queue);
    for (int i = 0; i < graph->vertexCount; ++i) arr[i] = 0;
    printf("\n%d", bfs(graph, 0, 5, arr, &queue));
    return 0;
}