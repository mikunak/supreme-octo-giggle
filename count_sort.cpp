#include <iostream>
#include <string>

using namespace std;

void sort(int n){
    int *A = new int[n];
    int *cnt = new int[n];
    for (int i = 0; i < n; i++)
        cin >> A[i];
    for (int i = 0; i < n; i++)
        cnt[A[i] - 1] += 1;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < cnt[i]; j++)
            cout << i + 1;
}

int main(){
    int n;
    cin >> n;
    sort(n);
    return 0;
}