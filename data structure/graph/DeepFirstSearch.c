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
/**
 * ������ȱ���
 * @param graph         ͼ
 * @param startVertex   ���±�
 * @param targetVertex  Ŀ���±�
 * @param visited       �Ѿ��������Ľ������
 */
//void dfs(Graph graph, int startVertex, int targetVertex, int * visited){
//    //������
//    printf("%c -> ",graph->vertex[startVertex].element);
//    //����ǰ�����Ϊ������
//    visited[startVertex] = 1;
//    //��ȡ��
//    LNode node = graph->vertex[startVertex].next;
//    //ֱ��û�б�Ϊֹ
//    while (node){
//        //����ý��û�б����
//        if (!visited[node->nextVertex])
//            //���ڽӵ��������
//            dfs(graph, node->nextVertex, targetVertex, visited);
//        //����
//        node = node->next;
//    }
//}
/**
 * �����������
 * @param graph         ͼ
 * @param startVertex   ���±�
 * @param targetVertex  Ŀ���±�
 * @param visited       �Ѿ��������Ľ������
 * @return              �Ƿ�������Ŀ��
 */
_Bool dfs(Graph graph, int startVertex, int targetVertex, int * visited){
    //������
    printf("%c -> ",graph->vertex[startVertex].element);
    //����ǰ�����Ϊ������
    visited[startVertex] = 1;
    //�ҵ���,����1
    if (startVertex == targetVertex)    return 1;
    //��ȡ��
    LNode node = graph->vertex[startVertex].next;
    //ֱ��û�б�Ϊֹ
    while (node){
        //����ý��û�б����
        if (!visited[node->nextVertex])
            //���ڽӵ��������
            if (dfs(graph, node->nextVertex, targetVertex, visited))
                //�ҵ���,����,����1
                return 1;
        //����
        node = node->next;
    }
    //û�ҵ�
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