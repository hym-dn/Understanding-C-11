#include<climits>
#include<cstdio>
using namespace std;

// 检测系统中定义的long long类型范围
int main(){
    long long ll_min=LLONG_MIN;
    long long ll_max=LLONG_MAX;
    unsigned long long ull_max=ULLONG_MAX;
    printf("min of long long: %lld\n",ll_min); // min of long long
    printf("max of long long: %lld\n",ll_max); // max of long long
    printf("max of unsigned long long: %llu\n",ull_max); // max of unsigned long long
}

// 编译选项： g++ -std=c++11 2-2-1.cpp