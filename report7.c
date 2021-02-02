#include <stdio.h>

void sort_array(int array[], int size);
void print_array(int array[], int size);

/**
 * 配列を降順にソートする関数
 * @param (int array[]) 配列
 * @param (int size) 配列の要素数
 */
void sort_array(int array[], int size){
    for (int i = 0; i < size; i++){
        for (int j = i + 1; j < size; j++){
            if (array[i] < array[j]){
                int value = array[i];
                array[i] = array[j];
                array[j] = value;
            }
        }
    }
}


void print_array(int array[], int size){
    for(int i=0; i<size; i++){
        printf(" %d",array[i]);
    }
    printf("\n");
}

int main(){
    //const int SIZE = 5;                           
    //int scores[SIZE] = {0, 60, 70, 100, 90};

    const int SIZE = 6;
    int scores[SIZE] = {100, 60, 70, 100, 90, 80};

    printf("scores =");
    print_array(scores,SIZE);
    sort_array(scores,SIZE);
    printf("results =");
    print_array(scores,SIZE);

    return 0;
}
