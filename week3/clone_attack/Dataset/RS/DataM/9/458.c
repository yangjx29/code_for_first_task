int main () {
    int LDmSF1Orf [100];
    char LAG3I4s0vx [100] [10];
    char c [11];
    int n;
    int YyE8GZV;
    int t;
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
    int k;
    scanf ("%d", &n);
    {
        YyE8GZV = 192 - 192;
        while (YyE8GZV < n) {
            scanf ("%s %d", LAG3I4s0vx[YyE8GZV], &LDmSF1Orf[YyE8GZV]);
            if (LDmSF1Orf[YyE8GZV] < 60) {
                LDmSF1Orf[YyE8GZV] = 0;
            }
            YyE8GZV++;
        };
    }
    for (k = 1; k <= n; k++) {
        YyE8GZV = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (YyE8GZV < n - k) {
            if (LDmSF1Orf[YyE8GZV +1] > LDmSF1Orf[YyE8GZV]) {
                t = LDmSF1Orf[YyE8GZV];
                LDmSF1Orf[YyE8GZV] = LDmSF1Orf[YyE8GZV +1];
                strcpy (c, LAG3I4s0vx[YyE8GZV]);
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                strcpy (LAG3I4s0vx[YyE8GZV], LAG3I4s0vx[YyE8GZV +1]);
                strcpy (LAG3I4s0vx[YyE8GZV +1], c);
                LDmSF1Orf[YyE8GZV +1] = t;
            }
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            YyE8GZV++;
        };
    }
    for (YyE8GZV = 0; YyE8GZV < n; YyE8GZV++) {
        printf ("%s\n", LAG3I4s0vx[YyE8GZV]);
    }
    return 0;
}

