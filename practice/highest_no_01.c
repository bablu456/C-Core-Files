#include <stdio.h>
int main(){
    int arr[3][3] = {{0,1,0},{1,1,1},{0,0,0}};
    int count = 0;
    int row_store = 0;
    for(int i=0;i<3;i++){
        int row_count=0;
        for(int j=0;j<3;j++){
            if(arr[i][j]==1){
                row_count++;
                if(count<row_count){
                    row_store = i;
                 count=row_count;
                }
            }
        }
    }
    printf("%d\n%d",row_store,count);
    
    return 0;
}