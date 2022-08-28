#include<iostream>
#include<vector>

using namespace std;

void quickSort(vector<int>& arr, int first, int last){
    if(last-first < 1) return;

    int pivot = first, left=first+1, right=last;
    while(right>left){
        while(arr[right]>arr[pivot] && right>left){
            right--;
        }
        while(arr[left]<=arr[pivot] && right>left){
            left++;
        }
        if(right>left){
            int temp = arr[left];
            arr[left] = arr[right];
            arr[right] = temp;
        }
    }
    
    if(arr[pivot] > arr[left]){
        int temp = arr[left];
        arr[left] = arr[pivot];
        arr[pivot] = temp;
        pivot = left;
    }    

    quickSort(arr, first, pivot-1);
    quickSort(arr, pivot+1, last);
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

    quickSort(arr, 0, arr.size()-1);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}