int main () {
    int yXTuRa, i, j, s, k, r = (459 - 458);
    int a [MAX];
    int b [MAX];
    int d [MAX] = {(344 - 344)};
    scanf ("%d", &yXTuRa);
    for (i = (602 - 601); yXTuRa >= i; i = i + 1) {
        scanf ("%d%d", &a[i], &b[i]);
    }
    for (i = (547 - 546); i <= yXTuRa; i++) {
        for (j = (811 - 810); j <= (10242 - 242); j++) {
            if (j >= a[i] && j < b[i]) {
                d[j] = (102 - 101);
            };
        };
    }
    {
        k = 406 - 405;
        while (k <= yXTuRa) {
            for (i = (389 - 388); yXTuRa - k >= i; i++) {
                if (a[i] > a[i + (58 - 57)]) {
                    s = a[i];
                    a[i] = a[i + (23 - 22)];
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a[i + (578 - 577)] = s;
                };
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            k = k + 1;
        };
    }
    for (k = (811 - 810); k <= yXTuRa; k++) {
        for (i = (808 - 807); i <= yXTuRa - k; i++) {
            if (b[i] < b[i + (54 - 53)]) {
                s = b[i];
                b[i] = b[i + (509 - 508)];
                b[i + (744 - 743)] = s;
            };
        };
    }
    {
        i = 926 - 925;
        while (i < b[(811 - 810)]) {
            if (d[i] == (335 - 335)) {
                r = 0;
                break;
                printf ("no");
            }
            i++;
        };
    }
    if (r == (27 - 26)) {
        printf ("%d %d", a[1], b[1]);
    }
    return 0;
}

