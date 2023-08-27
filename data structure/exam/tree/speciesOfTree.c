//
// Created by 34043 on 2023/8/22.
//
#include <stdio.h>
void dpFunction(int dp[], int size){
    //0������1���������������Ϊ1
    dp[0]=dp[1]=1;
    //�Ӷ���ʼ
    for (int i = 2; i <= size; ++i) {
        //���ó�ֵ0
        dp[i] = 0;
        for (int j = 0; j < i; ++j) {
            //�����������,���������,�������������
            dp[i] += dp[j] * dp[i-j-1];
        }
    }
}
int main(){
    //�������
    int size;
    //¼��ڵ�����
    scanf("%d",&size);
    //��ʼ������
    int dp[size+1];
    //���ö�̬�滮����
    dpFunction(dp,size);
    //���������
    printf("%d",dp[size]);
    return 0;
}
