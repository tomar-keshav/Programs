#include <stdio.h>

void quickSort(int arr[], int l, int r){
    if(l>r){
        return;
    }

    int pivot = arr[l];
    printf("Pivot is %d\n",pivot);
    int cnt = 0;
    for(int i=l+1; i<r; i++){
        if(arr[i]<pivot){
            cnt++;
        }
    }

    // swap the pivot element with it's correct index
    int temp = arr[l];
    arr[l] = arr[l+cnt];
    arr[l+cnt] = temp;

    // position
    int ll = l;
    int rr = r;
    while(ll < l+cnt && rr > l + cnt){
        if(arr[ll]>pivot&&arr[rr]<pivot){
            int temp = arr[ll];
            arr[ll] = arr[rr];
            arr[rr] = temp;
            ll++;
            rr--;
        }
        else if(arr[ll]<pivot){
            ll++;
        }
        else{
            rr--;
        }
    }

    quickSort(arr,l,l+cnt-1);
    quickSort(arr,l+cnt+1,r);

}

int main(void){
    int arr[] = {1, 2, 5, 3, 4, 8, 7};
    int size = 7;
   
    quickSort(arr,0,size-1);

    for(int i=0; i<size; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}




/*
 Take an array arr of size n

 quickSort(arr,0,n-1);


if(l>r){
    return;
}
 set boundaries = l & r

 pivot = arr[l]       (set pivot to arr[l])

 count elements less than pivot

 place pivot element on pos l+count and make this index as pivotIndex

 place all elements less than pivot to it's left

 place all elements greater than pivot to it's right

 quickSort(arr,l,pivotIndex-1);
 quickSort(arr,pivotIndex+1,r);
 return;
*/