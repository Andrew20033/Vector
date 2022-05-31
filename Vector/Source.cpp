#include <iostream>
#include <vector>
using namespace std;
int main() {
    system("chcp 1251");
    cout << "Enter vector size :\n";
    int n = 0;
    cin >> n;
    vector<int>vec(n);
    for (int i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << "-e data" << ":";
        cin >> vec[i];
    }
    cout << "Here it is, your vector: ";
    int min = vec[0];
    int max = vec[0];
    for (int j = 1; j < n; j++) {
        cout << vec[j] << " ";
        if (min > vec[j])
            min = vec[j];
        if (max < vec[j])
            max = vec[j];
    }

    cout << "\n" << "Number of elements in the vector: " << n << endl;

    cout << "Maximum value:" << max << endl;
    cout << "Minimum value :" << min << endl;
}