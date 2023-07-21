#include<stdio.h>

int main(){
int n;
scanf("%d",&n);
int arr[n];
for(int i=0;i<n;i++)
{
scanf("%d",&arr[i]);
}
 for(int i=0;i<n;i++){
        int j=1;
    if(arr[i]==arr[j]){
        j++;
    }
    else{
        printf("b- %d is defective",i);
    }
 }


}
