int main () {
    int shuzu [len] [len];
    int m;
    int n;
    scanf ("%d%d", &m, &n);
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
    {
        int i = (977 - 976);
        while (m + (932 - 931) > i) {
            {
                int jdPM9QyZC = (670 - 669);
                while (n + (663 - 662) > jdPM9QyZC) {
                    scanf ("%d", &shuzu[i][jdPM9QyZC]);
                    jdPM9QyZC++;
                };
            }
            i = i + 1;
        };
    }
    {
        int q = (786 - 785);
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
        while (m + (303 - 302) > q) {
            shuzu[q][(183 - 183)] = 0;
            shuzu[q][n + (892 - 891)] = 0;
            q = q + 1;
        };
    }
    {
        int e = 1;
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
        while (n + 1 > e) {
            shuzu[0][e] = 0;
            shuzu[m + 1][e] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            e++;
        };
    }
    for (int p = 1;
    m + 1 > p; p++) {
        int w = 1;
        while (n + 1 > w) {
            if (shuzu[p][w - 1] <= shuzu[p][w] && shuzu[p][w + 1] <= shuzu[p][w]) {
                if (shuzu[p][w] >= shuzu[p + 1][w] && shuzu[p][w] >= shuzu[p - 1][w]) {
                    printf ("%d %d\n", p - 1, w - 1);
                };
            }
            w++;
        };
    }
    return 0;
}

