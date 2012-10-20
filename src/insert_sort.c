#include <stdio.h>

/*Insertion sorting*/
int exchange(int*,int*);/*declaration*/
/*Insertion_sort is similar to maopao sorting.Its time-complication is O(n) in good case,O(n^2) in bad case.*/
int insertion_sort(int array[],int lens){
    int index;
    int mid;
    for(index=0;index<lens;index++){
        int j=index,i=index-1;
        while(i>=0){
            if(array[i]>array[j]){
                exchange(array[i],array[j]);
                j--;
                i--;
            }
            else
                break;
        }
    }
}
/*exchange the values of two place*/
int exchange(int* a,int* b){
    int tmp;
    tmp=*a;
    *a=*b;
    *b=tmp;
}


