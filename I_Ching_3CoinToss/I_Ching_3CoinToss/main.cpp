//
//  main.cpp
//  IChing3CoinToss
//
//  Created by shane wirkes on 19/06/2019.
//  Copyright © 2019 shane wirkes. All rights reserved.
//

#include <iostream>
using std::cout;
using std::endl;
#include <string>
using std::string;
#include <stdlib.h>
using std::rand;
#include <time.h>

int main() {
    // insert code here...
    srand (static_cast<unsigned int>(time(NULL)));
    
    int coin1, coin2, coin3, coins;
    string yin = "=== ===";
    string yang = "=======";
    string changing_yin = "===X===";
    string changing_yang = "===0===";
    string lines[6];
    for(int i = 0; i < 64000; i++){
        cout << "Hexagram " << i+1 << endl;
        for (int j = 0; j <= 5; j++) {
            coin1 = rand() % 2;
            coin2 = rand() % 2;
            coin3 = rand() % 2;
            coins = coin1 + coin2 + coin3;
            switch (coins) {
                case 0:
                    lines[j] = changing_yin;
                    break;
                case 1:
                    lines[j] = yang;
                    break;
                case 2:
                    lines[j] = yin;
                    break;
                case 3:
                    lines[j] = changing_yang;
                    break;
                default:
                    break;
            }
        }
        for(int k = 5; k >= 0; k--)
        {
            cout << lines[k] << endl;
        }
    }
            
    
}

