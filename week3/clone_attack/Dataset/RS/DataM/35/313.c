int main () {
    int i, j, k;
    int juzhen [M] [M], y, x;
    int max = 0, maxy, maxx;
    scanf ("%d,%d", &y, &x);
    {
        i = 830 - 830;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < y) {
            {
                j = 0;
                while (j < x) {
                    scanf ("%d", &juzhen[i][j]);
                    j++;
                };
            }
            i++;
        };
    }
    for (i = 0; i < y; i++) {
        int jishu;
        jishu = 0;
        for (j = 0; j < x; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (juzhen[i][j] > max) {
                maxy = i;
                maxx = j;
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
                max = juzhen[i][j];
            };
        }
        {
            k = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            while (k < y) {
                if (juzhen[maxy][maxx] > juzhen[k][maxx]) {
                    break;
                }
                else {
                    jishu++;
                }
                if (jishu == y) {
                    printf ("%d+%d", maxy, maxx);
                    return 0;
                }
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
                k = k + 1;
            };
        };
    }
    if (i == y, j == x) {
        printf ("No");
    }
    return 0;
}

