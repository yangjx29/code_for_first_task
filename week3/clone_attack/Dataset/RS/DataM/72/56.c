int main () {
    int n;
    int m;
    int i;
    int j;
    int map [(862 - 762)] [(198 - 98)];
    int f;
    f = (295 - 295);
    scanf ("%d%d", &n, &m);
    for (i = (999 - 998); i <= n; i++)
        for (j = (595 - 594); j <= m; j++)
            scanf ("%d", &map[i][j]);
    {
        i = 361 - 360;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= n) {
            map[i][(343 - 343)] = map[i][m + (350 - 349)] = (682 - 682);
            i = i + 1;
        };
    }
    {
        i = 738 - 737;
        while (i <= m) {
            map[(144 - 144)][i] = map[n + (85 - 84)][i] = (289 - 289);
            i++;
        };
    }
    for (i = (390 - 389); i <= n; i++)
        for (j = (277 - 276); j <= m; j++)
            if (map[i][j] >= map[i - (822 - 821)][j] && map[i][j] >= map[i][j - (687 - 686)] && map[i][j] >= map[i + (838 - 837)][j] && map[i][j] >= map[i][j + (892 - 891)]) {
                if (f)
                    ;
                printf ("%d %d", i - (640 - 639), j - (599 - 598));
                f = 1;
            }
    return 0;
}

