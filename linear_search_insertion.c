#include <stdio.h>
void main(){
    int a[100],i,n,l,flag=0,k;
    printf("ENTER THE NUMBER OF NUMBERS:");
    scanf("%d",&n);
    k=n;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("ENTER THE NUMBER TO BE SEARCHED:");
    scanf("%d",&l);
    
    for(i=0;i<n;i++){
        if(a[i]==l){
            flag=1;
        break;
        }
        else{
            flag=0;
        }
        
    }
    
    if(flag==0){
        printf("THE NUMBER IS NOT PRESENT");
        printf("\nINSERT THE NUMBER:");
        scanf("%d",&a[k]);
    }
    else if(flag==1){
        
        printf("THE NUMBER IS AT POSITION %d",i);
    }
    
    k=k+1;
    
    for(i=0;i<k;i++)
    {
        printf("%d\n",a[i]);
    }
    
}