#include<iostream>
#include<ctime>
using namespace std;
long long int fibonacci(long long int x);
int main(){
    clock_t start = clock();
    cout << "Result: " << fibonacci(50) << "\n";
    clock_t end = clock();
    double elapsed = double(end - start)/CLOCKS_PER_SEC;
    cout << "Elapsed Time: " << elapsed << " seconds.";
    return 0;
}
long long int fibonacci(long long int x){
    long long int z;
    if(x==0) return z= 0;
    else if(x==1) return z=1;
    else if(x>1){
       return z =fibonacci(x-1)+fibonacci(x-2);
    }
    return 0;
}