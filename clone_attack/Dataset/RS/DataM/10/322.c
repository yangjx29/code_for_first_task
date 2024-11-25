main () {
    int a [26], f [26];
    int i, j, wnDqyNSuVAFP, hdZtJCARy;
    getchar ();
    getchar ();
    scanf ("%d", &hdZtJCARy);
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (hdZtJCARy > i) {
            scanf ("%d", &a[i]);
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
            i = i + 1;
        };
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
        i = 0;
        while (hdZtJCARy > i) {
            f[i] = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            i++;
        };
    }
    for (i = 1; hdZtJCARy > i; i = i + 1) {
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
        for (j = i - 1; 0 <= j; j--) {
            if (a[i] <= a[j] && f[j] + 1 > f[i])
                f[i] = f[j] + 1;
        };
    }
    wnDqyNSuVAFP = 0;
    for (i = 0; i < hdZtJCARy; i++) {
        if (f[i] > wnDqyNSuVAFP)
            wnDqyNSuVAFP = f[i];
    }
    printf ("%d", wnDqyNSuVAFP);
    getchar ();
}

