//
// Created by 34043 on 2023/8/29.
//
#include <stdio.h>
#include <stdlib.h>
#define MaxVertex 10

//ͼ
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
    //��ȡͷ������һ����ͨ���
    LNode node = graph->vertex[a].next;
    //Ϊ�½������ڴ�ռ�
    LNode newNode = malloc(sizeof (struct LinkedNode));
    //�½�����ÿ�
    newNode->next = NULL;
    //���ñ�
    newNode->nextVertex = b;
    if (!node){  //ͷ������ʲô��û��
        graph->vertex[a].next = newNode;    //ֱ������
    } else{ //���ͷ�������ҽ��
        do {
            //���ͷ��������ǡǡ�����ڽӽ��
            if (node->nextVertex == b) {
                //�ͷſռ�
                free(newNode);
                //����
                return;
            }
            //���ͷ�����һ����㲻�����һ�����,����
            if (node->next) node = node->next;
                //���ͷ�����һ���������һ�����,ѭ������
            else break;
        } while (1);
        //��ӱ�
        node->next = newNode;
    }
    //����������
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

//����
typedef int T;   //���ｫ�����±���ΪԪ��
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
 * ������ȱ���
 * @param graph         ͼ
 * @param startVertex   ��ʼ
 * @param targetVertex  Ŀ��
 * @param visited       �Ƿ񱻲��ҹ�
 * @param queue         ��������
 */
//void bfs(Graph graph, int startVertex, int targetVertex, int * visited, LinkedQueue queue){
//    //��ʼ����������
//    offerQueue(queue, startVertex);
//    //����Ϊ�Ѳ���
//    visited[startVertex] = 1;
//    //���п�Ϊֹ
//    while (!isEmpty(queue)){
//        //����
//        int next = pollQueue(queue);
//        //ͨ��������ӡ���
//        printf("%c -> ", graph->vertex[next].element);
//        //��ȡ���ķ�֧���
//        LNode node = graph->vertex[next].next;
//        //ֻҪ��֧��㲻�ǿս��,һֱ������
//        while (node){
//            //��Ȼ,��������û�б��ҹ����ڽӽ��
//            if (!visited[node->nextVertex]){
//                //�������ڽӽ���������
//                offerQueue(queue, node->nextVertex);
//                //���øý���Ѿ����ҵ�
//                visited[node->nextVertex] = 1;
//            }
//            //һֱ������
//            node = node->next;
//        }
//    }
//}

/**
 * �����������
 * @param graph         ͼ
 * @param startVertex   ��ʼ
 * @param targetVertex  Ŀ��
 * @param visited       �Ƿ񱻲��ҹ�
 * @param queue         ��������
 * @return              �������
 */
_Bool bfs(Graph graph, int startVertex, int targetVertex, int * visited, LinkedQueue queue){
    //��ʼ����������
    offerQueue(queue, startVertex);
    //����Ϊ�Ѳ���
    visited[startVertex] = 1;
    //���п�Ϊֹ
    while (!isEmpty(queue)){
        //����
        int next = pollQueue(queue);
        //ͨ��������ӡ���
        printf("%c -> ", graph->vertex[next].element);
        //��ȡ���ķ�֧���
        LNode node = graph->vertex[next].next;
        //ֻҪ��֧��㲻�ǿս��,һֱ������
        while (node){
            if (node->nextVertex == targetVertex)   return 1;
            //��Ȼ,��������û�б��ҹ����ڽӽ��
            if (!visited[node->nextVertex]){
                //�������ڽӽ���������
                offerQueue(queue, node->nextVertex);
                //���øý���Ѿ����ҵ�
                visited[node->nextVertex] = 1;
            }
            //һֱ������
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