#include <stdio.h>
#include <stdbool.h>

int main(){
    int n,i;
    bool light;
    
    while (scanf("%d", &n) && n!=0){
        light = false;
        for(i=1;i<=n;i++){
            if(!(n%i)){
                light = !light;
            }
        }
        if (light){printf("yes\n");}
        else{printf("no\n");}
    }
    return 0;
}