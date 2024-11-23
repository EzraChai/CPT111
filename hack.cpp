#include <iostream>

int funcpos(int x, int y, int k){
    int area = x * y;

    int i = k;
    if(k>1){
        --i;
    }
    int width = 0;
    while(k >= i){
        if(k % i == 0){
            int div = k / i;
            if( div <= x && i <= y){
                width = div;
                break;
            } 
        }
        i--;
    }


    if(width == 0){
        return 0;
    }

    int height = i;

    int totalX = 0;
    int totalY = 0;

    while(x >= width){
        if((x - width) >= 0 && (y - height) >= 0 ){
            ++totalX;
        } 
        --x;
    }

    while((y >= height) ){
        
        if((y - height) >= 0 ){
            ++totalY;
        } 
        --y;
    }
   
    return totalX * totalY;
}

int main(){

    int x, y, k;
    x = 4;
    y = 4;
    k = 9;

    int count = funcpos(x,y,k);
    std::cout << "count " << count;
}