#include <iostream>

using namespace std;

void coinToss(){
    int rand_num = rand() % 2 + 1;
    if(rand_num == 1){
        cout << "heads.\n";
    }else if(rand_num == 2){
        cout << "tails.\n";
    }
}

int main(){
    srand(time(0));

    int times;
    cout << "How many times the coin should be tossed? ";
    cin >> times;
    for (int i = 0; i < times; i++){
        coinToss();
    }
    return 0;
}