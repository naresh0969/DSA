#include<stdio.h>
#define max 10
int visited[max]={0};
int queue[max];
int front=0,rear=0;
void enque(int vertex){
    queue[rear]=vertex;
    rear++;
}
int deque(){
    int val=queue[front];
    front++;
    return val;
}
void bfs(int arr[max][max],int start,int size){
    enque(start);
    visited[start]=1;
    while(front<rear){
        int val=deque();
        printf("%d ",val);
        for(int i=0;i<size;i++){
            if(arr[val][i]==1&& visited[i]==0){
                enque(i);
                visited[i]=1;
            }
        }
    }
}
void main(){
    int arr[max][max];
    int size;
    printf(" enter no. of vertex :");
    scanf("%d",&size);
    printf("Enter matrix :\n");
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    bfs(arr,0,size);
}