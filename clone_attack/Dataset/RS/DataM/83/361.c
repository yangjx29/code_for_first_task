void  main () {
    int a [2] [10];
    int n;
    int i;
    int j;
    float xfjd;
    float xfh;
    float GPA;
    float b [11];
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
    xfjd = (770 - 770);
    xfh = 0;
    scanf ("%d", &n);
    {
        i = 0;
        while (2 > i) {
            {
                j = 0;
                while (j < n) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
        };
    }
    for (i = 0; n > i; i = i + 1) {
        if (a[1][i] < 60)
            b[i] = 0;
        else {
            if (a[1][i] < 64)
                b[i] = 1.0;
            else {
                if (a[1][i] < 68)
                    b[i] = 1.5;
                else if (a[1][i] < (649 - 577))
                    b[i] = 2.0;
                else if (a[1][i] < (380 - 305))
                    b[i] = 2.3;
                else if (78 > a[1][i])
                    b[i] = 2.7;
                else if (a[1][i] < 82)
                    b[i] = 3.0;
                else if (a[1][i] < 85)
                    b[i] = 3.3;
                else if (90 > a[1][i])
                    b[i] = 3.7;
                else if (a[1][i] <= 100)
                    b[i] = 4.0;
            };
        };
    }
    {
        i = 0;
        while (i < n) {
            xfjd = a[0][i] * b[i] + xfjd;
            i = i + 1;
        };
    }
    for (i = 0; i < n; i = i + 1)
        xfh = xfh + a[0][i];
    GPA = xfjd / xfh;
    printf ("%.2f", GPA);
}

