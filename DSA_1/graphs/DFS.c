//DFS

#include <stdio.h>
#define max 20
int size;
int arr[max][max];
int visited[max] = {0};
void dfs(int val)
{
    printf("%d ", val);
    visited[val] = 1;
    for (int i = 0; i < size; i++)
    {
        if (arr[val][i] == 1 && visited[i] == 0)
        {
            dfs(i);
        }
    }
}
void main()
{
    
    printf("Enter no. of nodes :");
    scanf("%d", &size);
    // creating a 2D matrix
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            scanf("%d", &arr[i][j]);
        }
        printf("\n");
    }
    int start;
    // taking starting node.
    printf("Starting vertex :");
    scanf("%d", &start);
    dfs(start);
}
