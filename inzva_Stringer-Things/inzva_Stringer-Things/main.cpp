//
//  main.cpp
//  inzva_Stringer-Things
//
//  Created by Baris U. Cukur on 21.07.2022.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void fixDuplicates(vector<char> strVect) {
    
    for (unsigned long long int i = 0; i < strVect.size(); i++) {
        char oldChar = strVect[i];
        
        while (strVect[i+1] == oldChar &&  i < strVect.size() - 1) {
            strVect.erase(strVect.begin() + i + 1);
        }
    }
    
    for (unsigned long long int i = 0; i < strVect.size(); i++) {
        cout << strVect[i];
    }
    cout << "\n";
}

int main() {
    
    vector<char> strVect;
    unsigned long long int N;
    cin >> N;
    char C;
    
    for (unsigned long long int i = 0; i < N; i++) {
        cin >> C;
        strVect.push_back(C);
    }
    fixDuplicates(strVect);
    return 0;
}
