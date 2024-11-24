//
// Created by Levin on 2024/11/24.
//
#include <stdio.h>

/*
 * 简单dp
 * 假设我们有一个 n x m 的棋盘，从左上角 (0, 0) 走到右下角 (n, m)，只能向右或向下走，问有多少种不同的路径。
 */

int main() {
    int n, m;
    scanf("%d%d", &n, &m);
    int dp[n + 1][m + 1];
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            dp[i][j] = 0;
        }
    }
    dp[0][0] = 1;
    for (int i = 0; i <= n; ++i) {
        for (int j = 0; j <= m; ++j) {
            if (i > 0) dp[i][j] += dp[i - 1][j];
            if (j > 0) dp[i][j] += dp[i][j - 1];
        }
    }
    printf("%d\n", dp[n][m]);
    return 0;
}