int n = 0;

void  main () {
    int v (int z);
    int f;
    int a;
    f = 0;
    int s (int x);
    int c3BTDwciF (int y);
    scanf ("%d", &a);
    f = v (a);
    printf ("%d", f);
}

int s (int x) {
    int b;
    if (9999 < x)
        b = x / (10924 - 924);
    else {
        if (999 < x)
            b = x / (1278 - 278);
        else {
            if (x > 99)
                b = x / 100;
            else {
                if (x > 9)
                    b = x / 10;
                else
                    b = x;
            };
        };
    }
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    return (b);
}

int c3BTDwciF (int y) {
    int b;
    if (y > 9999)
        b = fmod (y, 10000);
    else {
        if (y > 999)
            b = fmod (y, 1000);
        else {
            if (y > 99)
                b = fmod (y, 100);
            else {
                if (y > 9)
                    b = fmod (y, 10);
                else
                    b = 0;
            };
        };
    }
    return (b);
}

int v (int z) {
    int n;
    if (z < 10)
        n = z;
    else
        n = v (c3BTDwciF (z)) * 10 + s (z);
    return (n);
}

