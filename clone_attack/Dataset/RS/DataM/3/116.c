main () {
    int i, vahXzN, HxMQYnW, zmCwhS, n;
    int p = (374 - 374);
    int a [1000];
    int b [1000] [1000];
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
    scanf ("%d %d", &zmCwhS, &n);
    for (i = 1; zmCwhS >= i; i = i + 1)
        scanf ("%d", &a[i]);
    {
        i = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i <= zmCwhS) {
            {
                vahXzN = i + 1;
                while (zmCwhS >= vahXzN) {
                    b[i][vahXzN] = a[i] + a[vahXzN];
                    vahXzN = vahXzN + 1;
                };
            }
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
    for (i = 1; i <= zmCwhS; i++) {
        if (p == 1)
            break;
        {
            vahXzN = 1;
            while (vahXzN <= zmCwhS) {
                if (b[i][vahXzN] == n) {
                    p = 1;
                    break;
                }
                vahXzN++;
            };
        };
    }
    if (p == 1)
        printf ("yes");
    else
        printf ("no");
}

