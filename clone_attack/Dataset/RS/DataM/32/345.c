int main () {
    void  f (char WTsBvztX4WE8 [(208 - 108)], char y [(386 - 286)]);
    char a [(1013 - 913)] [(582 - 482)];
    char b [100] [100];
    int SlTiPHojES;
    int i;
    scanf ("%d", &SlTiPHojES);
    {
        i = 119 - 119;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SlTiPHojES > i) {
            scanf ("%s", a[i]);
            scanf ("%s", b[i]);
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < SlTiPHojES) {
            f (a[i], b[i]);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i = i + 1;
        };
    }
    return 0;
}

void  f (char WTsBvztX4WE8 [100], char y [100]) {
    int m;
    int SlTiPHojES;
    int i;
    int xCPqWBvXxT;
    char z [100], TPzMSDbBe01 [100];
    strcpy (z, WTsBvztX4WE8);
    m = strlen (WTsBvztX4WE8);
    SlTiPHojES = strlen (y);
    for (i = 1; SlTiPHojES >= i; i++) {
        if (y[SlTiPHojES -i] > WTsBvztX4WE8[m - i]) {
            WTsBvztX4WE8[m - i] += (286 - 276);
            z[m - i - 1] = WTsBvztX4WE8[m - i - 1] -= 1;
        }
        z[m - i] = WTsBvztX4WE8[m - i] - y[SlTiPHojES -i] + 48;
    }
    {
        i = 0;
        while (m > i) {
            if (z[i] != '0') {
                for (xCPqWBvXxT = 0; xCPqWBvXxT <= m - i; xCPqWBvXxT++)
                    TPzMSDbBe01[xCPqWBvXxT] = z[i + xCPqWBvXxT];
                break;
            }
            i = i + 1;
        };
    }
    printf ("%s\n", TPzMSDbBe01);
}

