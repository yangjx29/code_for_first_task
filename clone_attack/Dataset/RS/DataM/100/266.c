int main () {
    char CLk2GBNIhmtR [300];
    char *FP2vGyM6;
    char zrbai6SI;
    int b [27] = {0};
    int v4XwIW;
    v4XwIW = 0;
    scanf ("%s", &CLk2GBNIhmtR);
    {
        zrbai6SI = 'a';
        while ('z' >= zrbai6SI) {
            v4XwIW = v4XwIW + 1;
            for (FP2vGyM6 = CLk2GBNIhmtR; !('\0' == *FP2vGyM6); FP2vGyM6 = FP2vGyM6 +1) {
                if (!(zrbai6SI != *FP2vGyM6)) {
                    b[v4XwIW]++;
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    };
                };
            }
            zrbai6SI = zrbai6SI + 1;
        };
    }
    {
        v4XwIW = 1;
        while (27 > v4XwIW) {
            if (b[v4XwIW] != 0) {
                break;
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
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            v4XwIW = v4XwIW + 1;
        };
    }
    if (v4XwIW == 27) {
        printf ("No");
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
    else {
        v4XwIW = 0;
        {
            zrbai6SI = 'a';
            while (zrbai6SI <= 'z') {
                v4XwIW++;
                if (b[v4XwIW] != 0) {
                    printf ("%c=%d\n", zrbai6SI, b[v4XwIW]);
                }
                zrbai6SI = zrbai6SI + 1;
            };
        };
    }
    return 0;
}

