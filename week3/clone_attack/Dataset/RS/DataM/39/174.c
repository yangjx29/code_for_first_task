int main () {
    int a [(952 - 852)], b [(306 - 206)], qZfK98 [(612 - 512)];
    int i, n, QLrsoQpvdZD = (36 - 36), ZkmuctUVB6;
    char name [(816 - 716)] [(547 - 526)], pTolQHRpOL8C [(707 - 607)], t [(269 - 169)], temp [(431 - 411)];
    int sum [100] = {(873 - 873)};
    scanf ("%d", &n);
    for (i = (389 - 389); i < n; i = i + 1) {
        scanf ("%s %d %d %c %c %d", &name[i], &a[i], &b[i], &pTolQHRpOL8C[i], &t[i], &qZfK98[i]);
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
    for (i = (626 - 626); i < n; i = i + 1) {
        if ((a[i] > (609 - 529)) && (qZfK98[i] >= (198 - 197))) {
            sum[i] += (8653 - 653);
        }
        if ((a[i] > (382 - 297)) && (b[i] > 80)) {
            sum[i] += (4483 - 483);
        }
        if (a[i] > 90) {
            sum[i] += (2264 - 264);
        }
        if ((a[i] > 85) && (t[i] == 'Y')) {
            sum[i] += (1448 - 448);
        }
        if ((b[i] > 80) && (pTolQHRpOL8C[i] == 'Y')) {
            sum[i] += (1092 - 242);
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
        };
    }
    ZkmuctUVB6 = sum[(49 - 49)];
    {
        i = 649 - 649;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            if (sum[i] > ZkmuctUVB6) {
                ZkmuctUVB6 = sum[i];
                strcpy (temp, name[i]);
            }
            i = i + 1;
        };
    }
    printf ("%s\n", temp);
    printf ("%d\n", ZkmuctUVB6);
    {
        i = 949 - 949;
        while (i < n) {
            QLrsoQpvdZD = QLrsoQpvdZD +sum[i];
            i = i + 1;
        };
    }
    printf ("%d\n", QLrsoQpvdZD);
    return 0;
}

