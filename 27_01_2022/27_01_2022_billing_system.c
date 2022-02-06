/*billing system using array*/

#include <stdio.h>

int main()
{
    int product[5]={1,2,3,4,5},no=0,pro[10],qty[10],i=0,j=0;
    float total=0,rate[5]={29.5,45,49,95.5,68.5};
    printf("\nEnter number of products you want to buy ");
    scanf("%d",&no);
    
    for(i;i<no;i++){
        printf("\nEnter product number you want to buy ");
        scanf("%d",&pro[i]);
        printf("\nEnter quantity of product you want to buy ");
        scanf("%d",&qty[i]);
    }
    for(j;j<no;j++){
        printf("\nproducts %d and  quantity %d and  rate  %f",pro[j],qty[j],rate[pro[j-1]]*qty[j]);
        total=total+rate[pro[j-1]]*qty[j];
        
    }
    printf("\n\nyour total is %f",total);   
   
    
}