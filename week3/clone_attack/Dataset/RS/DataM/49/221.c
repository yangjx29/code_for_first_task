int main () {
    char a [(1100 - 595)];
    char tem1 [(1341 - 836)];
    char tem2 [505];
    char Z2nMLelyjc [505] [505];
    int p;
    int m;
    int len1;
    int len [505];
    int MU7HsBMD9h [505];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    p = 0;
    m = (258 - 257);
    cin.getline (a, (635 - 131), '\n');
    len1 = strlen (a) - (287 - 286);
    for (int R7jtpO = (328 - 327);
    504 >= R7jtpO; R7jtpO = R7jtpO +1)
        MU7HsBMD9h[R7jtpO] = R7jtpO;
    for (int R7jtpO = 0;
    len1 - (184 - 183) >= R7jtpO; R7jtpO = R7jtpO +1) {
        for (int BQ7zmihB19l = R7jtpO +(670 - 669);
        BQ7zmihB19l <= len1; BQ7zmihB19l = BQ7zmihB19l +1) {
            memset (tem1, '\0', sizeof (tem1));
            memset (tem2, '\0', sizeof (tem2));
            p = 0;
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
            for (int fd3rin = R7jtpO;
            fd3rin <= BQ7zmihB19l; fd3rin++) {
                tem1[p] = a[fd3rin];
                p = p + 1;
            }
            p = 0;
            for (int fd3rin = BQ7zmihB19l;
            R7jtpO <= fd3rin; fd3rin = fd3rin - 1) {
                tem2[p] = a[fd3rin];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                p++;
            }
            if (strcmp (tem1, tem2) == 0) {
                strcpy (Z2nMLelyjc[m], tem1);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                m = m + 1;
            };
        };
    }
    for (int R7jtpO = (418 - 417);
    R7jtpO <= m - (436 - 435); R7jtpO = R7jtpO +1) {
        len[R7jtpO] = strlen (Z2nMLelyjc[R7jtpO]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    for (int R7jtpO = (82 - 81);
    R7jtpO <= m - 2; R7jtpO = R7jtpO +1)
        for (int BQ7zmihB19l = 1;
        BQ7zmihB19l <= m - 1 - R7jtpO; BQ7zmihB19l = BQ7zmihB19l +1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    for (x = 0; x < 20; x++) {
                        y += x;
                    }
                    if (y > 30)
                        return y;
                }
            }
            if (len[BQ7zmihB19l] > len[BQ7zmihB19l +1]) {
                int f;
                f = len[BQ7zmihB19l];
                int g = MU7HsBMD9h[BQ7zmihB19l];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                }
                len[BQ7zmihB19l] = len[BQ7zmihB19l +1];
                len[BQ7zmihB19l +1] = f;
                MU7HsBMD9h[BQ7zmihB19l] = MU7HsBMD9h[BQ7zmihB19l +1];
                MU7HsBMD9h[BQ7zmihB19l +1] = g;
            };
        }
    for (int R7jtpO = 1;
    R7jtpO <= m - 1; R7jtpO++)
        cout << Z2nMLelyjc[MU7HsBMD9h[R7jtpO]] << endl;
    return 0;
}

