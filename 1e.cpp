#include <iostream>

void sort(float *arr,int *arrOfNum,int &n){
    for(int i = 0;i < n - 1;i++){
        for(int j = i + 1;j < n;j++){
            if(arr[i] > arr[j]){
                std::swap(arr[i],arr[j]);
                std::swap(arrOfNum[i],arrOfNum[j]);
            }
        }
    }
}

int main(){
    freopen("sortland.in","r",stdin);
    freopen("sortland.out","w",stdout);
    int n;
    std::cin >> n;
    float arr[n];
    int arrOfNum[n];
    for(int i = 0;i < n;i++){
        std::cin >> arr[i];
        arrOfNum[i] = i + 1;
    }
    sort(arr,arrOfNum,n);
    std::cout << arrOfNum[0] << " " << arrOfNum[n / 2] << " " << arrOfNum[n - 1];
    return 0;
}
