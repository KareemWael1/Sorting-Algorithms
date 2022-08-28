#include<iostream>
#include<vector>

using namespace std;

void insertionSort(vector<int>& arr){
    for(int i=1; i<arr.size(); i++){
        int element = arr[i];
        int index = i-1;
        while(index>=0){
            if(arr[index] > element){
                arr[index+1] = arr[index];
                index--;
            }
            else break;
        }
        arr[index+1] = element;
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

    insertionSort(arr);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}