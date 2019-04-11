#include <stdio.h> 

#include <stdlib.h> 

int main(void)

{

    int n;  

    int w, x, y, z; 

    printf("¿é¤J­È¡G ");

    scanf("%d", &n); 

    


    z = n; 

    for(y=1; y<=z; y++){ 

       for(x=n; x<z; x++) 

          printf(" ");

       for(w=1; w<=n; w++)  

          printf("*");

       printf("\n"); 

       n--;

    }

    

    system("pause"); 

    return 0; 

}
