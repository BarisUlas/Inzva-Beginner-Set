//
//  main.cpp
//  inzva_Harun-and-Sami
//
//  Created by Baris U. Cukur on 22.07.2022.
//

#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string game;
    char round;
    int N, K;
    int p1score = 0, p2score = 0;
    // p1 keeps track of H, p2 keeps track of S
    cin >> N >> K;
    
    for (unsigned long long int i = 0; i < K; i++) {
        cin >> round;
        game.push_back(round);
    }
    
    for (unsigned long long int i = 0; i < K; i++) {
        if (game[i] == 'H')
            p1score++;
        else
            p2score++;
    }
    if (p1score > p2score && p1score - p2score > N-K)
        cout << "Harun\n";
    else if (p2score > p1score && p2score - p1score > N-K)
        cout << "Sami\n";
    else
        cout << "Cilek\n";
    return 0;
}
