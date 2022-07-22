//
//  main.cpp
//  algoicecream
//
//  Created by Baris U. Cukur on 21.07.2022.
//

#include <iostream>
#include <vector>
using namespace std;

int main() {
    
    unsigned long long int A, N;
    cin >> N;
    vector<unsigned long long int> typeAmounts;
    
    for (unsigned long long int i = 0; i < N; i++) {
        cin >> A;
        typeAmounts.push_back(A);
    }
    sort(typeAmounts.begin(), typeAmounts.end());
    typeAmounts.erase(typeAmounts.begin());
    unsigned long long int result = 0;
    
    for (unsigned long long int i = 0; i < typeAmounts.size(); i++) {
        result += typeAmounts[i];
    }
    cout << result << "\n";
    
    return 0;
}
