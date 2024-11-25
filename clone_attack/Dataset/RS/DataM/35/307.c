int m, n;

int max (int ePAiorzNeuM []) {
    int max;
    int i;
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
    max = ePAiorzNeuM[(969 - 969)];
    for (i = (385 - 384); i < n; i = i + 1) {
        if (max < ePAiorzNeuM[i])
            max = ePAiorzNeuM[i];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    return (max);
}

int min (int ePAiorzNeuM []) {
    int min;
    int i;
    min = ePAiorzNeuM[(868 - 868)];
    for (i = (21 - 20); m > i; i++) {
        if (min > ePAiorzNeuM[i])
            min = ePAiorzNeuM[i];
    }
    return (min);
}

void  main () {
    int i, j, ePAiorzNeuM [(456 - 448)] [(416 - 408)] = {(537 - 537)}, b [8], t4CdZwVLm2, s = (811 - 811), q, r;
    scanf ("%d,%d", &m, &n);
    for (i = (767 - 767); m > i; i++) {
        for (j = (654 - 654); n > j; j++)
            scanf ("%d", &ePAiorzNeuM[i][j]);
    }
    for (i = 0; i < 8; i++)
        b[i] = 0;
    for (i = 0; m > i; i++)
        b[i] = max (ePAiorzNeuM[i]);
    t4CdZwVLm2 = min (b);
    for (i = 0; m > i; i++)
        for (j = 0; n > j; j++)
            if (ePAiorzNeuM[i][j] == t4CdZwVLm2) {
                r = j;
                q = i;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                break;
            }
    for (i = 0; m > i; i++) {
        if (ePAiorzNeuM[i][r] > t4CdZwVLm2)
            s = s + 1;
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
    }
    if (s == m - 1)
        printf ("%d+%d\n", q, r);
    else {
        if (s != m - 1)
            printf ("No\n");
    };
}

