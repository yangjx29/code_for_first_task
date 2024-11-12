int main () {
    int a;
    int f;
    int zSlHhxK;
    int qkg2rF5;
    int i;
    int j;
    int vqW7YHdG;
    int aA3jqBxuhm;
    int d;
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
    int e;
    int shuzu [8] [8];
    a = 0;
    f = 0;
    scanf ("%d,%d", &zSlHhxK, &qkg2rF5);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < zSlHhxK) {
            for (j = 0; qkg2rF5 > j; j = j + 1) {
                scanf ("%d", &shuzu[i][j]);
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (i < zSlHhxK) {
            for (j = 0; j < qkg2rF5; j++) {
                if (a <= shuzu[i][j]) {
                    a = shuzu[i][j];
                    vqW7YHdG = j;
                    d = i;
                };
            }
            e = a;
            {
                aA3jqBxuhm = 0;
                while (zSlHhxK > aA3jqBxuhm) {
                    if (a > shuzu[aA3jqBxuhm][vqW7YHdG]) {
                        a = shuzu[aA3jqBxuhm][vqW7YHdG];
                    }
                    aA3jqBxuhm = aA3jqBxuhm + 1;
                };
            }
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
            if (e == a) {
                printf ("%d+%d", d, vqW7YHdG);
                return 0;
            }
            i = i + 1;
        };
    }
    return 0;
}

