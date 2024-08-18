#include<stdio.h>
void main(){
    int n,i;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
        
    }
    
    for(n;n>0;n--){
        printf("%d ",arr[n]);
    }
}
// #include<stdio.h>
// int main(){
//     int n;
//     int i=1;
//     scanf("%d",&n);
//     int arr[n];
//     for(i;i<=n;i++){
//         scanf("%d",&arr[i]);
//     }
//     for(n;n>0;n--){
//         printf("%d ",arr[n]);
//     }
//     return 0;
// }