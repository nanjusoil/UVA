#include <stdio.h>
#include <math.h>

int main(){
    int i = 1;
    while(1){
        int x;
        scanf("%d", &x);
        if(x < 0){
            printf("Case %d: %d\n", i++, (int )ceil(log2(x)));
        }else if(x == 0)
            break;
    }

}