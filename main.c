#include <stdio.h>

int main(void)
{
   
    int inputNumber;
    long long total = 0;
    long long currentNumber;

    scanf("%d", &inputNumber);
 // 入力された数が負の場合はNGを表示する
    if (inputNumber < 0) {
        printf("NG");
        return 0;
    }
 // 1から入力された数まで順番に調べる
    for (currentNumber = 1; ; currentNumber++) {
// 入力された数を超えたら繰り返しを終了する
        if (currentNumber > inputNumber) {
            break;
        } 
// 3または5の倍数は合計に加えない
        if (currentNumber % 3 == 0 ||
            currentNumber % 5 == 0) {
            continue;
        }
// 条件に当てはまらない数を合計する
        total += currentNumber;
    }
 // 計算した合計を表示する
    printf("%lld", total);

    return 0;
}
