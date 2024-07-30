#include <stdio.h>
#include <stdlib.h>
void DFS(int A[10][10],int n,int visited[10],int source)
{
    int i;
    visited[source]=1;
    for(i=1;i<=n;i++)
    {
        if(A[source][i]==1 && visited[i]==0)
            DFS (A,n,visited,i);
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
            DFS(A,n,visited,i);
            count++;
        }
    }
    if(count==1)
        printf("\nGraph connected %d component",count);
    else
        printf("Graph not connected %d component",count);
    return 0;
}
