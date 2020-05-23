#define _CRT_SECURE_NO_WARNINGS 

#include"stdio.h"
#include"stdlib.h"
#define maxnum 30
#define false 0
#define true 1

int visited[maxnum];
typedef char vertextype;
typedef int infotype;
typedef struct node
{

	int adjvertex;
	infotype info;
	struct node* next;
}edgenode;//��
typedef struct vnode
{
	vertextype vertex;
	edgenode* firstedge;
}vertexnode;//����
typedef struct
{
	vertexnode adjlist[maxnum];
	int vertexnum, edgenum;
}ALgraph;//ͼ
typedef struct
{
	vertexnode data[maxnum];
	int front, rear;
}seqqueue, * Pseqqueue;//���еĶ���
void creat(ALgraph* g)
{
	int i, j, k;
	edgenode* p  , * q = NULL;
	printf("������ͼ�Ķ������ͻ���\n");
	scanf("%d%d", &(g->vertexnum), &(g->edgenum));
	printf("�����붥����Ϣ\n");
	fflush(stdin);
	for (i = 0; i < g->vertexnum; i++)
	{
		scanf("%c", &(g->adjlist[i].vertex));
		g->adjlist[i].firstedge = NULL;
	}
	fflush(stdin);
	printf("������ߵĶ����Ӧ���\n");
	for (k = 0; k < g->edgenum; k++)
	{
		scanf("%d,%d", &i, &j);
		p = (edgenode*)malloc(sizeof(edgenode));
		p->adjvertex = j;
		if (g->adjlist[i].firstedge == NULL)
			g->adjlist[i].firstedge = p;
		else
		{
			q->next = p;

		}
		q = p;
		p->next = NULL;
	}
}

void visit(ALgraph g, int v)
{
	printf("%c", g.adjlist[v].vertex);
}
void dfs(ALgraph g, int v)
{
	edgenode* p;
	int w;
	visit(g, v);
	visited[v] = true;
	for (p = g.adjlist[v].firstedge; p; p = p->next)
	{
		w = p->adjvertex;
		if (!visited[w])
			dfs(g, w);
	}
}
void dfstravel(ALgraph g)
{
	int v;
	for (v = 0; v < g.vertexnum; v++)
		visited[v] = false;
	for (v = 0; v < g.vertexnum; v++)
		if (!visited[v])
			dfs(g, v);
}Pseqqueue init()
{
	Pseqqueue q;
	q = (Pseqqueue)malloc(sizeof(seqqueue));
	if (q)
	{
		q->front = 0;
		q->rear = 0;
	}
	return q;
}
int empty(Pseqqueue q)
{
	if (q && q->front == q->rear)
		return 1;
	else
		return 0;
}
int in(Pseqqueue q, ALgraph g, int v)
{
	if ((q->rear + 1) % maxnum == q->front)
	{
		printf("����");
		return -1;
	}
	else
	{
		q->rear++;
		q->data[q->rear] = g.adjlist[v];
		return 1;
	}
}
int out(Pseqqueue q, vertexnode* x)
{
	if (empty(q))
	{
		//printf("�ӿ�");
		return -1;
	}
	else
	{
		q->front++;
		*x = q->data[q->front];
		return 1;
	}

}
void bfs(ALgraph g, int v)
{
	edgenode* p;
	int w;
	vertexnode u;
	Pseqqueue q;
	q = init();
	visit(g, v);
	visited[v] = true;
	in(q, g, v);
	int v1;
	for (v1 = 0; v1 < g.vertexnum; v1++)
		visited[v1] = false;
	while (!empty(q))
	{
		out(q, &u);
		for (p = u.firstedge; p; p = p->next)
		{
			w = p->adjvertex;
			if (!visited[w])
			{
				visit(g, w);
				visited[w] = true;
				in(q, g, w);
			}
		}
	}


}
int main()
{
	ALgraph g;
	creat(&g);
	printf("������ȱ���Ϊ");
	dfstravel(g);
	printf("\n������ȱ���Ϊ");
	bfs(g, 0);
	printf("\n");
}