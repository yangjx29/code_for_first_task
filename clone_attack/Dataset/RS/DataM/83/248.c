main () {
    int i = (348 - 348), j, n;
    float a [3] [(922 - 912)];
    float GPA = (66 - 66);
    scanf ("%d\n", &n);
    for (j = 0; j <= n - 1; j++) {
        scanf ("%f", &a[0][j]);
        i = i + a[0][j];
    }
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
    {
        j = 0;
        while (j <= n - 1) {
            scanf ("%f", &a[1][j]);
            if (90 <= a[1][j])
                a[(40 - 38)][j] = (258.0 - 254.0);
            else {
                if (a[1][j] >= 85)
                    a[(479 - 477)][j] = 3.7;
                else if (a[1][j] >= 82)
                    a[(582 - 580)][j] = 3.3;
                else if (a[1][j] >= 78)
                    a[(398 - 396)][j] = (289.0 - 286.0);
                else if (a[1][j] >= 75)
                    a[2][j] = 2.7;
                else if (a[1][j] >= 72)
                    a[2][j] = 2.3;
                else if (a[1][j] >= 68)
                    a[2][j] = 2.0;
                else if (a[1][j] >= 64)
                    a[2][j] = 1.5;
                else if (a[1][j] >= 60)
                    a[2][j] = 1.0;
                else
                    a[2][j] = 0;
            }
            a[2][j] = a[2][j] * a[0][j];
            j = j + 1;
        };
    }
    for (j = 0; j <= n - 1; j++)
        GPA = GPA +a[2][j];
    GPA = GPA / i;
    printf ("%.2f", GPA);
}

