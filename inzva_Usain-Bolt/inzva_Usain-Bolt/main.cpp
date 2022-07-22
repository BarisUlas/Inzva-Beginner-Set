//
//  main.cpp
//  inzva_Usain-Bolt
//
//  Created by Baris U. Cukur on 21.07.2022.
//

#include <iostream>
#include <vector>

using namespace std;

int main() {
    
    vector<unsigned long long int> recordVect;
    unsigned long long int R;
    unsigned long long int N;
    unsigned long long int recordCount = 0;
    cin >> N;
    
    for (unsigned long long int i = 0; i < N; i++) {
        cin >> R;
        recordVect.push_back(R);
    }
    unsigned long long newRecord = recordVect[0];
    
    for (unsigned long long int i = 0; i < recordVect.size(); i++) {
        if (recordVect[i] > newRecord) {
            newRecord = recordVect[i];
            recordCount++;
        }
    }
    cout << recordCount << "\n";
    return 0;
}
