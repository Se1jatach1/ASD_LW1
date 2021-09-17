#include <iostream>

int main(){
    freopen("turtle.in","r",stdin);
    freopen("turtle.out","w",stdout);
    int height;
    int weight;
    std::cin >> height;
    std::cin >> weight;
    int arr[height][weight];
    for(int i = 0;i < height;i++){
        for(int j = 0;j < weight;j++){
            std::cin >> arr[i][j];
        }
    }
    for(int i = height - 2;i >= 0;i--){
        arr[i][0] = arr[i + 1][0] + arr[i][0];
    }
    for(int j = 1;j < weight;j++){
        arr[height - 1][j] = arr[height - 1][j - 1] + arr[height - 1][j];
    }
    for(int i = height - 2;i >= 0;i--){
        for(int j = 1;j < weight;j++){
            if(arr[i + 1][j] > arr[i][j - 1]){
                arr[i][j] += arr[i + 1][j];
            }
            else{
                arr[i][j] += arr[i][j - 1];
            }
        }
    }
    std::cout << arr[0][weight - 1];
    return 0;
}
