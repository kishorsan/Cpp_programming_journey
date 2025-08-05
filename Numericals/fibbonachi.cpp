#include <iostream>

int fibbo(int pos, int i, int j);
int nthfibb(int pos);

int main(){
    int pos;
    std::cout << "Enter the positon : ";
    std::cin >> pos;
    int out = fibbo(pos, 0, 1); 
    std::cout << pos << " fibbonachi is -> " << out;

    int result = nthfibb(pos);
    std::cout << '\n' << pos << " fibbonachi is -> " << result;
    return 0;

}


int fibbo(int pos, int i, int j){
    if (pos <= 0){
        std::cout << i << '\n';
        return i;
    }
    std::cout << i << "  ";
    return fibbo(pos - 1, j, i + j);
}


int nthfibb(int pos){
    if (pos == 0) return 0;
    if (pos == 1) return 1;
    return nthfibb(pos - 2) + nthfibb(pos - 1); 
}