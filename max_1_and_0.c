#include <stdio.h>
int main(){
    int arr[3][3] = {{0,1,1},{1,1,1},{0,1,0}};
    int store = 0;
    int store_index = 0;
    printf("Enter the elements in the array : ");
    for(int i=0;i<3;i++){
        int count = 0;
        for(int j=0;j<3;j++){
            if(1==arr[i][j]){
                count++;
            }
        }
        if(count>store){
            store_index = i;
            store = count;
        }
    }
    printf("in this row %d have most 1 numbers = %d",store_index,store);

    return 0;
}