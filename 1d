#include <iostream>

void bubbleSort(int *arr,int &n){
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] > arr[j]){
                std::swap(arr[i],arr[j]);
            }
        }
    }
}

int main() {
    freopen("smallsort.in","r",stdin);
    freopen("smallsort.out","w",stdout);
    int n;
    std::cin >> n;
    int arr[n];
    for(int i = 0;i < n;i++){
        std::cin >> arr[i];
    }
    bubbleSort(arr,n);
    for(int i = 0;i < n;i++){
        std::cout << arr[i] << " ";
    }
    return 0;
}
