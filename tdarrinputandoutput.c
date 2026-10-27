//Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
r=2 c=2

1 2
3 4
Output 1:
1 2
3 4

*/
#include<stdio.h>
int main(){
int n;
printf("enter row size ");
scanf("%d",&n);
int m;
printf("enter column size ");
scanf("%d",&m);
int arr[n][m];
printf("enter all elements for the matrix ");
for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
scanf("%d",&arr[i][j]);}}


for(int i=0;i<n;i++){
for(int j=0;j<m;j++){
printf("%d ",arr[i][j]);}
printf("\n");}

return 0;
}