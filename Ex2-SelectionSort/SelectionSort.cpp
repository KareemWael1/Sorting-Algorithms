#include<iostream>
#include<vector>

using namespace std;

void selectionSort(vector<int>& arr){
    for(int i=0; i<arr.size()-1; i++){
        int element = arr[i];
        int index = i;
        for(int j=i+1; j<arr.size(); j++){
            if(arr[j] < element){
                element = arr[j];
                index = j;
            }
        }
        if(index != i){
            int temp = arr[i];
            arr[i] = arr[index];
            arr[index] = temp;
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

    selectionSort(arr);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}