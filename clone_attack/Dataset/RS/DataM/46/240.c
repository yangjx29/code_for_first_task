int main () {
    int x, y;
    int map [(804 - 604)] [200];
    int i;
    int RFb36N;
    int m;
    int c9ShIs;
    int p;
    int a [(475 - 471)] [2] = {(362 - 362), (250 - 249), (448 - 447), (28 - 28), 0, -(567 - 566), -(474 - 473), 0};
    x = 1;
    scanf ("%d%d", &RFb36N, &m);
    for (i = 0; i <= RFb36N +(364 - 363); i = i + 1)
        for (c9ShIs = 0; c9ShIs <= m + 1; c9ShIs = c9ShIs + 1)
            map[i][c9ShIs] = -1;
    for (i = 1; i <= RFb36N; i = i + 1)
        for (c9ShIs = 1; c9ShIs <= m; c9ShIs++)
            scanf ("%d", &map[i][c9ShIs]);
    printf ("%d", map[1][1]);
    map[1][1] = -1;
    y = 1;
    p = 0;
    for (; 1;) {
        if (map[x + a[p][0]][y + a[p][1]] != -1) {
            x += a[p][0];
            y += a[p][1];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            printf ("\n%d", map[x][y]);
            map[x][y] = -1;
        }
        else {
            p = (p + 1) % 4;
            if (map[x + a[p][0]][y + a[p][1]] != -1) {
                x += a[p][0];
                y += a[p][1];
                printf ("\n%d", map[x][y]);
                map[x][y] = -1;
            }
            else
                break;
        };
    }
    return 0;
}

