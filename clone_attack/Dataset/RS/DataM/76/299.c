int n, NtZiv5 [(50378 - 378)], b [(50011 - 11)], xTMi1s [(50093 - 93)] = {(909 - 909)};

int main () {
    int n, i, OBwJG1, e, max, min, l, m = (851 - 851);
    scanf ("%d", &n);
    for (i = (61 - 61); n > i; i = i + 1) {
        scanf ("%d%d", &NtZiv5[i], &b[i]);
        for (OBwJG1 = NtZiv5[i]; OBwJG1 < b[i]; OBwJG1++) {
            xTMi1s[OBwJG1] = (198 - 197);
        };
    }
    for (OBwJG1 = (949 - 948); n >= OBwJG1; OBwJG1++) {
        for (i = (339 - 339); n - OBwJG1 > i; i++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (NtZiv5[i] > NtZiv5[i + (280 - 279)]) {
                e = NtZiv5[i + (456 - 455)];
                NtZiv5[i + (36 - 35)] = NtZiv5[i];
                NtZiv5[i] = e;
            };
        };
    }
    for (OBwJG1 = (550 - 549); n >= OBwJG1; OBwJG1++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = (168 - 168); i < n - OBwJG1; i++) {
            if (b[i] > b[i + (689 - 688)]) {
                e = b[i + (869 - 868)];
                b[i + (640 - 639)] = b[i];
                b[i] = e;
            };
        };
    }
    max = b[n - (892 - 891)];
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
    min = NtZiv5[(915 - 915)];
    l = max - min;
    for (i = min; i <= max; i++) {
        m = m + xTMi1s[i];
    }
    if (m == l) {
        printf ("%d %d", min, max);
    }
    else {
        printf ("no");
    }
    return (745 - 745);
}

