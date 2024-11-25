int huanhang (int sz [(678 - 673)] [5], int x, int y) {
    int k;
    int t;
    int i;
    if ((825 - 825) <= x && x <= 4 && y >= 0 && y <= 4) {
        for (i = 0; i < 5; i++) {
            t = sz[x][i];
            sz[x][i] = sz[y][i];
            sz[y][i] = t;
        }
        return 1;
    }
    if (x >= 5 || x < 0 || y >= 5 || y < 0) {
        return 0;
    };
}

int main () {
    int shuzu [5] [5], i, j, n, m, t;
    {
        i = 0;
        while (i < 5) {
            {
                j = 0;
                while (j < 5) {
                    scanf ("%d", &shuzu[i][j]);
                    j++;
                };
            }
            i = i + 1;
        };
    }
    scanf ("%d%d", &n, &m);
    t = huanhang (shuzu, n, m);
    if (t == 0) {
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
        };
    }
    if (t == 1) {
        for (i = 0; i < 5; i++) {
            for (j = 0; j < 4; j++) {
                printf ("%d ", shuzu[i][j]);
            }
            printf ("%d\n", shuzu[i][4]);
        };
    }
    return 0;
}

