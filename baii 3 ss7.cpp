#include <stdio.h>

int main() {
    int a[5]={1,4,3,6,5};
    int sum = 0;
    for(int i=0;i<5;i++){
        if(a[i]%2==0){
            printf("%d\n",a[i]);
            sum++;
        }
    }
    if (sum==0){
        printf("khong co so chan\n");
    }
    return 0;
}
