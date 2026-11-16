#include <stdio.h>
#include <stdlib.h>
 
int gcd(int m, int x);
 
int main(void) {
int n;
 
if (scanf("%d", &n) != 1) {
return 0;
}
 
// 9966990を超える場合はNGなどの仕様に合わせる
if (n > 9966990) {
printf("NG\n");
return 0;
}
 
// 負の数は絶対値にする
int abs_n = abs(n);
 
// 最大公約数を求める
int ans = gcd(9966990, abs_n);
 
// 結果の出力
printf("%d\n", ans);
 
return 0;
}
 
/* ユークリッドの互除法による最大公約数を求める関数 */
int gcd(int m, int x) {
int r;
int a = m;
int b = x;
 
while (b != 0) {
r = a % b;
a = b;
b = r;
}
 
return a;
}