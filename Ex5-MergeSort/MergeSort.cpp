#include<iostream>
#include<vector>

using namespace std;

void split(vector<int>& arr, vector<int>& arr1, vector<int>& arr2){
    for(int i=0; i<arr.size()/2;i++){
        arr1.push_back(arr[i]);
    }
    for(int i=arr.size()/2; i<arr.size(); i++){
        arr2.push_back(arr[i]);
    }
}

void merge(vector<int>& arr, vector<int>& arr1, vector<int>& arr2){
    int x=0, y=0;
    while(x!=arr1.size() && y!=arr2.size()){
        if(arr1[x] <= arr2[y]){
            arr[x+y] = arr1[x];
            x++;
        }
        else{
            arr[x+y] = arr2[y];
            y++;
        }
    }
    if(x==arr1.size()){
        while(y!=arr2.size()){
            arr[x+y] = arr2[y];
            y++;
        }
    }
    else{
        while(x!=arr1.size()){
            arr[x+y] = arr1[x];
            x++;
        }
    }
}

void mergeSort(vector<int>& arr){
    if(arr.size() < 2) return;

    vector<int> arr1;
    vector<int> arr2;
    
    split(arr, arr1, arr2);
    mergeSort(arr1);
    mergeSort(arr2);
    merge(arr, arr1, arr2);
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

    mergeSort(arr);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}