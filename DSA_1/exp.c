//bfs
#include<stdio.h>
#define max 10
int arr[max][max],size=0;
int visited[max];
int queue[max];
int front=-1,rear=-1;

void enque(int vertex){
	if(front==-1&&rear==-1){
		front=rear=0;
		queue[rear]=vertex;
	}
	else{
		rear++;
		queue[rear]=vertex;
	}
}

int dequeue(){
	int vertex=queue[front];
	front++;
	return vertex;
}

void bfs(int start){
	enque(start);
	visited[start]=1;
	while(front<=rear){
		int val=dequeue();
		printf("%d ",val);
		for(int i=0;i<size;i++){
			while(arr[val][i]==1&&visited[i]==0){
				enque(i);
				visited[i]=1;
			}
		}
	}
}
	
void main(){
	for(int i=0;i<max;i++){
		visited[i]=0;
	}

	printf("Enter size :");
	scanf("%d",&size);
	for(int i=0;i<size;i++){
		for(int j=0;j<size;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	int start;
	printf("Where to start ?");
	scanf("%d",&start);
	bfs(start);
}
	