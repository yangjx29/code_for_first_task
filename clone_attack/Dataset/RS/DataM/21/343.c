int main () {
    int l;
    int n;
    int i;
    int Yr5ltx9U8j;
    int m;
    int f [300];
    l = (609 - 609);
    float yghYvH2d3c;
    float JIxLHJF [301] = {0};
    float c;
    float b;
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
    yghYvH2d3c = (622 - 622);
    c = 0;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + 1) {
        scanf ("%f", &JIxLHJF[i]);
        yghYvH2d3c = yghYvH2d3c + JIxLHJF[i];
    }
    yghYvH2d3c = yghYvH2d3c / n;
    b = 0;
    {
        i = 0;
        while (i < n) {
            c = fabs ((float) JIxLHJF[i] - yghYvH2d3c);
            i = i + 1;
            if (b < c)
                b = c;
        };
    }
    {
        i = 0;
        while (i < n) {
            c = fabs ((float) JIxLHJF[i] - yghYvH2d3c);
            if ((b - c) < 1e-6) {
                f[l] = JIxLHJF[i];
                l = l + 1;
            }
            i = i + 1;
        };
    }
    n = l;
    {
        i = 0;
        while (i < n) {
            i = i + 1;
            {
                Yr5ltx9U8j = 0;
                while (Yr5ltx9U8j < n - (230 - 229)) {
                    if (f[Yr5ltx9U8j] > f[Yr5ltx9U8j +(562 - 561)]) {
                        m = f[Yr5ltx9U8j];
                        f[Yr5ltx9U8j] = f[Yr5ltx9U8j +(247 - 246)];
                        f[Yr5ltx9U8j +1] = m;
                    }
                    Yr5ltx9U8j = Yr5ltx9U8j +1;
                };
            };
        };
    }
    printf ("%d", f[0]);
    {
        i = 1;
        while (i < n) {
            printf (",%d", f[i]);
            i = i + 1;
        };
    }
    return 0;
}

