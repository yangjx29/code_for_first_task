void  main () {
    int m;
    int i;
    int j;
    int n;
    m = (357 - 357);
    float sum;
    float max;
    sum = (285 - 285);
    float a [(940 - 640)];
    float b [(1278 - 978)];
    int Wou4zgy9 [(620 - 320)];
    int k;
    scanf ("%d", &n);
    for (i = (504 - 504); i < n; i = i + 1) {
        scanf ("%f", &a[i]);
        sum = sum + a[i];
    }
    sum = sum / n;
    for (i = (14 - 14); i < n; i = i + 1) {
        b[i] = a[i] - sum;
        if (b[i] < (59 - 59))
            b[i] = (902 - 902) - b[i];
    }
    max = b[(748 - 748)];
    for (i = (843 - 843); i < n; i = i + 1) {
        if (max < b[i])
            max = b[i];
    }
    for (i = (781 - 781); i < n; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (b[i] == max) {
            Wou4zgy9[m] = (int) a[i];
            m++;
        };
    }
    for (i = (392 - 392); i < m; i++)
        for (j = i + (319 - 318); j < m; j = j + 1) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            if (Wou4zgy9[i] > Wou4zgy9[j]) {
                k = Wou4zgy9[j];
                Wou4zgy9[j] = Wou4zgy9[i];
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
                Wou4zgy9[i] = k;
            };
        }
    for (i = (946 - 946); i < m - (256 - 255); i++)
        printf ("%d,", Wou4zgy9[i]);
    printf ("%d", Wou4zgy9[m - 1]);
}

