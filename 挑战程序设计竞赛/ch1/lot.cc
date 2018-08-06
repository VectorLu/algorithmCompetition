/**********************************************
你的朋友提议玩一个游戏:将写有数字的 n 个纸片放入口袋中,你可以从口袋中抽取 4 次纸 片,每次记下纸片上的数字后都将其放回口袋中。如果这 4 个数字的和是 m,就是你赢,否 则就是你的朋友赢。你挑战了好几回,结果一次也没赢过,于是怒而撕破口袋,取出所有纸 片,检查自己是否真的有赢的可能性。请你编写一个程序,判断当纸片上所写的数字是 k1, k2, ..., kn 时,是否存在抽取 4 次和为 m 的方案。如果存在,输出 Yes;否则,输出 No。

限制条件：
1 ≤ n ≤ 50  1≤m≤108  1 ≤ k[i] ≤ 10^8

eg1.               
input:
n = 3
m = 10
k = {1, 3, 5}
output:
Yes 

eg2.
input:
n = 3
m = 9
k = {1, 3, 5}
output:
No
**********************************************/

#include <cstdio>

const int MAX_N = 50;

int main() {
  int n, m, k[MAX_N];

  scanf("%d %d", &n, &m);
  for (int i = 0; i < n; i++) {
    scanf("%d", &k[i]);
  }

  // 是否找到和为 m 的组合的标记
  bool f = false;
  // 通过四重循环枚举所有的方案
  for (int a = 0; a < n; a++) {
    for (int b = 0; b < n; b++) {
      for (int c = 0; c < n; c++) {
        for (int d =0;  d< n;  d++) {
          if (k[a]+k[b]+k[c]+k[d]==m) {
            f = true;
            break;
          }
        }
      }
    }
  }
  if (f) {
    puts("Yes");
  }
  else {
    puts("No");
  }
  return 0;
}