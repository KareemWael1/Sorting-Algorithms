#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
#include<cmath>
#include<ctime>
#include<cstdlib>

using namespace std;

void radixSort(vector<int>& arr){
    queue<int> temp[10];
    int round = ceil(log10(arr[0]));
    for(int i=1; i<arr.size(); i++){
        round = max(round, (int)ceil(log10(arr[i])));
    }

    for(int i=0; i<round; i++){
        for(int j=0; j<arr.size();j++){
            temp[(int)(arr[j]/pow(10, i)) % 10].push(arr[j]);
        }

        int level=0;
        for(int j=0; j<arr.size(); j++){
            while(temp[level].empty()) level++;
            arr[j] = temp[level].front();
            temp[level].pop();
        }
    }
}

int main(){
    vector<int> arr;
    srand(time(0));
    // push 10 random numbers from 0 to 9999 in random order
    for(int i=0; i<10; i++){
        arr.push_back(rand() % 10000);
    }

    cout << "Before sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    radixSort(arr);

    cout << "\nAfter sorting:\n";
    for(int i=0; i<10; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}