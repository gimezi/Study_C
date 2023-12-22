// # include <stdio.h>
// # include <math.h>

// int main() {
//     int di = {0,0,1,-1};
//     int dj = {1,-1,0,0};
//     int tc,K;
//     int map[50][50] = {{0,},};
//     int N,M;
//     int a,b;
//     int cnt = 0;
//     int stack;
//     scanf("%d", &tc);
//     for (int i=0; i < tc; i++){
//         scanf("%d %d %d",&N,&M,&K);
//         for (int i=0; i < K; i++) {
//             scanf("%d %d",&a,&b);
//             map[a][b] = 1;
//         }
//         for (int i=0;i<N;i++) {
//             for (int j=0;j<M;j++) {
//                 if(map[i][j] == 1) {
//                     stack.append((i,j));
//                 }
//                 while
//             }
//         }
//     }
//     return 0;
// }


// DFS 풀이

# include <stdio.h>
# include <string.h>

int map[50][50], M,N;

void dfs(int x, int y) {
    // 방문했다면 0으로 바꾸기
    map[x][y] = 0;

    // 상하좌우탐색
    if (x + 1 < M && map[x+1][y] == 1)
        dfs(x+1,y);
    if (x - 1 >= 0 && map[x-1][y] == 1)
        dfs(x-1,y);
    if (y + 1 < N && map[x][y+1] == 1)
        dfs(x,y+1);
    if (y - 1 >= 0 && map[x][y-1] == 1)
        dfs(x,y-1);
}

int main() {
    int tc;
    scanf("%d", &tc);

    int K,x,y,cnt;
    for (int i=0; i< tc; i++) {
        // 배열 초기화 하는 함수
        memset(map,0,sizeof(map));
        scanf("%d %d %d", &M, &N, &K);

        // 배추 위치
        while (K--) {
            scanf("%d %d",&x,&y);
            map[x][y] = 1;
        }

        cnt = 0;
        for (int j=0; j<M; j++) {
            for (int k=0; k<N; k++) {
                if (map[j][k] == 1) {
                    dfs(j,k);
                    cnt++;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}