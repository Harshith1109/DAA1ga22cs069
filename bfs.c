#include <stdio.h>
#include <stdlib.h>
void BFS(int A[10][10],int n,int visited[10],int source)
{
    int Queue[10],rear=-1,front=0,deletenode,i;
    visited[source]=1;
    Queue[++rear]=source;
    while(front<=rear)
    {
        deletenode=Queue[front++];
        for(i=1;i<=n;i++)
        {
            if(A[deletenode][i==1 && visited[i]]=0)
            {
                Queue[++rear]=i;
                visited[i]=1;
            }
        }
    }
}
int main()
{
    int n,A[10][10],i,j,visited[10],count=0;
    printf("read number of nodes");
    scanf("%d",&n);
    printf("read adjacency matrix");
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        scanf("%d",&A[i][j]);
    }
    for(i=1;i<=n;i++)
        visited[i]=0;
    for(i=1;i<=n;i++)
    {
        if(visited[i]==0)
        {
            BFS(A,n,visited,i);
            count++;
        }
    }
    if(count==1)
        printf("\nGraph connected %d component",count);
    else
        printf("Graph not connected %d component",count);
    return 0;
}
