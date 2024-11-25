int main () {
    int TEC15A [26] = {(766 - 766), (488 - 488), (438 - 438), (856 - 856), 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
    char dqd6Ix [26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z'};
    int ZiIhQzRon6, k;
    struct   {
        char b [26];
    }
    p [1000];
    int n;
    int yG6fKbp7;
    int a [1000];
    int m [1000];
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
    int max = 0, MLusCz = 0;
    scanf ("%d", &n);
    {
        yG6fKbp7 = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (n > yG6fKbp7) {
            scanf ("%d %s", &a[yG6fKbp7], p[yG6fKbp7].b);
            m[yG6fKbp7] = strlen (p[yG6fKbp7].b);
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
            {
                k = 0;
                while (k < 26) {
                    {
                        ZiIhQzRon6 = 0;
                        while (ZiIhQzRon6 < m[yG6fKbp7]) {
                            if (p[yG6fKbp7].b[ZiIhQzRon6] == dqd6Ix[k])
                                TEC15A[k]++;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            ZiIhQzRon6 = ZiIhQzRon6 +1;
                        };
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    k++;
                };
            }
            yG6fKbp7++;
        };
    }
    for (k = 0; k < 26; k++) {
        if (TEC15A[k] > max) {
            max = TEC15A[k];
            MLusCz = k;
        };
    }
    printf ("%c\n", dqd6Ix[MLusCz]);
    printf ("%d\n", max);
    {
        yG6fKbp7 = 0;
        while (yG6fKbp7 < n) {
            {
                ZiIhQzRon6 = 0;
                while (ZiIhQzRon6 < m[yG6fKbp7]) {
                    if (p[yG6fKbp7].b[ZiIhQzRon6] == dqd6Ix[MLusCz])
                        printf ("%d\n", a[yG6fKbp7]);
                    ZiIhQzRon6++;
                };
            }
            yG6fKbp7++;
        };
    }
    return 0;
}

