#include <stdio.h>
#include <string.h>

#define MAX_N 100
#define MAX_K 1000
#define MAX_DIR 4

// 전역 변수: 맵과 바이러스 정보를 저장하는 배열
int map[MAX_N][MAX_N];
int viruses[5][MAX_K];
int dx[MAX_DIR] = { -1, 1, 0, 0 };
int dy[MAX_DIR] = { 0, 0, -1, 1 };

// 주어진 방향의 반대 방향으로 반환하는 함수
int reverseDirection(int d) {
    if (d == 0) return 1;
    if (d == 1) return 0;
    if (d == 2) return 3;
    return 2;
}

int main() {
    int T, N, M, K;
    scanf("%d", &T);

    for (int t = 1; t <= T; ++t) {
        if (t != 1) printf("\n");

        scanf("%d %d %d", &N, &M, &K);
        
        // 맵 초기화
        memset(map, -1, sizeof(map));

        // 바이러스 정보
        for (int i = 0; i < K; ++i) {
            scanf("%d %d %d %d", &viruses[0][i], &viruses[1][i], &viruses[2][i], &viruses[3][i]);
            viruses[3][i]--;
            map[viruses[0][i]][viruses[1][i]] = i;
        }

        // M번의 이동
        for (int i = 0; i < M; ++i) {
            int count = 0;
            for (int j = 0; j < K; ++j) {
                int d = viruses[3][j];
                int x = viruses[0][j];
                int y = viruses[1][j];
                int nx = x + dx[d];
                int ny = y + dy[d];
                if (map[x][y] == j) map[x][y] = -1;

                if (nx == 0 || nx == N - 1 || ny == 0 || ny == N - 1) {
                    viruses[0][count] = nx;
                    viruses[1][count] = ny;
                    viruses[2][count] = viruses[2][j] / 2;
                    viruses[3][count++] = reverseDirection(d);
                } else if (map[nx][ny] == -1 || map[nx][ny] > count) {
                    map[nx][ny] = count;
                    viruses[0][count] = nx;
                    viruses[1][count] = ny;
                    viruses[2][count] = viruses[2][j];
                    viruses[3][count] = d;
                    viruses[4][count++] = viruses[2][j];
                } else {
                    int temp = map[nx][ny];
                    if (viruses[2][j] > viruses[4][temp]) {
                        viruses[3][temp] = viruses[3][j];
                        viruses[4][temp] = viruses[2][j];
                        viruses[2][temp] = viruses[2][j] + viruses[2][temp];
                    } else {
                        viruses[2][temp] = viruses[2][j] + viruses[2][temp];
                    }
                }
            }
            K = count;
        }

        // 남아있는 바이러스의 크기의 합
        int sum = 0;
        for (int i = 0; i < K; ++i) {
            sum += viruses[2][i];
        }

        printf("#%d %d", t, sum);
    }

    return 0;
}
