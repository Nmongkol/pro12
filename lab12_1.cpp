#include<iostream>
#include<ctime>
using namespace std;

long long fibonacci(int x);

int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}

long long fibonacci(int x){
    if(x == 0){
        return 0;
    }
    else if(x == 1){
        return 1;
    }
    else{
        long long a = 0;
        long long b = 1;
        long long c;
        for(int i = 2; i <= x; ++i){
            c = a + b;
            a = b;
            b = c;
        }
        return b;
    }
}