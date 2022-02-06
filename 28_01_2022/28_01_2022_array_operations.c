/*Array operations*/


#include <stdio.h> 

int main() {
    int arr1[10],arr2[10],arr3[10],i=0,row,odd=0,even=0,pos=0,neg=0,zer=0;

    row = 6;
    printf("\n\nenter 6 elements for first array \n");
    
    for (i = 0; i < row; ++i){
      scanf("%d", &arr1[i]);
    }
    
    for (i = 0; i < row; ++i){
        if(arr1[i]%2==0){
            even = even+1;
        }
        else{
            odd = odd+1;
        }
    }
    
    for (i = 0; i < row; ++i){
        if(arr1[i]==0){
            zer = zer+1;
        }
        else if(arr1[i]>0){
            pos = pos+1;
        }
        else if(arr1[i]<0){
            neg = neg+1;
        }
    }
    printf("\n\ncopied array 1 in array 2:\n");
    
    for (i = 0; i < row; ++i){
        arr2[i]=arr1[i];
        printf("%d ",arr2[i]);
        
    }
    printf("\n\nreverse:\n"); 
    for (int i = row-1; i >= 0; i--) {     
        printf("%d ", arr1[i]);     
    }  
    
    printf("\n\nodd = %d  even = %d",odd,even);
    
    printf("\n\npositive = %d  negative = %d  zero = %d",pos,neg,zer);
}