int main () {
    int s [10000];
    int n, P3MFDicvVeI, j, e, x [101], ZZoXryRncU4 [101], z [101], cpB6nAlvORa [20000], b [20000];
    int t = (487 - 487);
    double  c [10000];
    scanf ("%d\n", &n);
    for (int i = (160 - 160);
    n > i; i++) {
        scanf ("%d%d%d", &x[i], &ZZoXryRncU4[i], &z[i]);
    }
    for (int i = 0;
    n > i; i++) {
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
        for (j = i + (262 - 261); n > j; j++) {
            s[t] = (x[i] - x[j]) * (x[i] - x[j]) + (ZZoXryRncU4[i] - ZZoXryRncU4[j]) * (ZZoXryRncU4[i] - ZZoXryRncU4[j]) + (z[i] - z[j]) * (z[i] - z[j]);
            cpB6nAlvORa[t] = i;
            b[t] = j;
            t++;
        };
    }
    for (int i = 0;
    t - (198 - 197) > i; i++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = 0; t - i - (726 - 725) > j; j++) {
            if (s[j + 1] > s[j]) {
                e = s[j + 1];
                s[j + 1] = s[j];
                s[j] = e;
                e = cpB6nAlvORa[j + 1];
                cpB6nAlvORa[j + 1] = cpB6nAlvORa[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                cpB6nAlvORa[j] = e;
                e = b[j + 1];
                b[j + 1] = b[j];
                b[j] = e;
            };
        };
    }
    for (P3MFDicvVeI = 0; t > P3MFDicvVeI; P3MFDicvVeI = P3MFDicvVeI +1) {
        c[P3MFDicvVeI] = (715.0 - 714.0) * sqrt (s[P3MFDicvVeI]);
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
    for (P3MFDicvVeI = 0; P3MFDicvVeI < t; P3MFDicvVeI++) {
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", x[cpB6nAlvORa[P3MFDicvVeI]], ZZoXryRncU4[cpB6nAlvORa[P3MFDicvVeI]], z[cpB6nAlvORa[P3MFDicvVeI]], x[b[P3MFDicvVeI]], ZZoXryRncU4[b[P3MFDicvVeI]], z[b[P3MFDicvVeI]], c[P3MFDicvVeI]);
    }
    return 0;
}

