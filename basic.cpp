#include<iostream>
using namespace std;
int main(){
    int arr[6];
    for(int i = 0; i < 6; i++){
        cout << "Enter the number: ";
        cin >> arr[i];
    }
    for(int j = 0; j < 6 / 2; j++ ){
        int temp = arr[j];
        arr[j] = arr[6-1-j];
        arr[6-1-j] = temp;

        cout << "reversed arry: " << arr[j];
    }
}
