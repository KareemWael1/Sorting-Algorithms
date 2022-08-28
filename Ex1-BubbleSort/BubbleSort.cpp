#include<iostream>
#include<vector>

using namespace std;

void bubbleSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        for(int j=1; j<arr.size()-i; j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main(){
    vector<int> arr;

    // push numbers from 1 to 10 in random order
    arr.push_back(2);
    arr.push_back(8);
    arr.push_back(5);
    arr.push_back(9);
    arr.push_back(6);
    arr.push_back(3);
    arr.push_back(10);
    arr.push_back(1);
    arr.push_back(4);
    arr.push_back(7);

    cout << "Before sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    bubbleSort(arr);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}