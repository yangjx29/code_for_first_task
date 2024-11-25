int main () {
    int IJd3vf7I;
    int y1;
    int x2;
    int y2;
    int i;
    int j;
    int A945yP;
    int g7wSnipkv [(1074 - 974)] [(722 - 622)];
    int b [(961 - 861)] [(167 - 67)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int COjR1iKqw9F [100] [100];
    memset (COjR1iKqw9F, (401 - 401), sizeof (COjR1iKqw9F));
    scanf ("%d%d", &IJd3vf7I, &y1);
    {
        i = 140 - 140;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < IJd3vf7I) {
            for (j = (684 - 684); j < y1; j = j + 1) {
                scanf ("%d", &g7wSnipkv[i][j]);
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
            i = i + 1;
        };
    }
    scanf ("%d%d", &x2, &y2);
    {
        i = 909 - 909;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (x2 > i) {
            {
                j = 936 - 936;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                while (y2 > j) {
                    scanf ("%d", &b[i][j]);
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
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 514 - 514;
        while (i < IJd3vf7I) {
            for (j = 0; j < y2; j = j + 1) {
                {
                    A945yP = 0;
                    while (A945yP < y1) {
                        COjR1iKqw9F[i][j] += g7wSnipkv[i][A945yP] * b[A945yP][j];
                        A945yP++;
                    };
                }
                if (j == y2 - (284 - 283))
                    printf ("%d", COjR1iKqw9F[i][j]);
                else
                    printf ("%d ", COjR1iKqw9F[i][j]);
            }
            i++;
            printf ("\n");
        };
    }
    return 0;
}

