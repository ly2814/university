//
// Created by 34043 on 2023/8/22.
//
#include <stdio.h>
void dpFunction(int dp[], int size){
    //0个结点或1个结点的数的种类均为1
    dp[0]=dp[1]=1;
    //从二开始
    for (int i = 2; i <= size; ++i) {
        //设置初值0
        dp[i] = 0;
        for (int j = 0; j < i; ++j) {
            //计算所有情况,如三个结点,可能是三种情况
            dp[i] += dp[j] * dp[i-j-1];
        }
    }
}
int main(){
    //结点数量
    int size;
    //录入节点数量
    scanf("%d",&size);
    //初始化数组
    int dp[size+1];
    //调用动态规划函数
    dpFunction(dp,size);
    //输出可能性
    printf("%d",dp[size]);
    return 0;
}
