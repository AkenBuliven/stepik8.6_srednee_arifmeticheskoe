#include <stdio.h>
#include <stdlib.h>
#include <math.h>
 
int main(){
    
    int n;
    int i;
    double array[100];
    double sum = 0;
 
    scanf("%d",&n);

    for (i=0; i<n; i++)
    {
        scanf("%lf", &array[i]);
    }
  
    for (i=0; i<n; i++)
    {
      sum = sum + array[i];
    }

    printf ("%.2f", sum/n);
    
      
  
  return 0;
   
}

