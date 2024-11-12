void  main () {
    int a [100000];
    int Nqen29Safp;
    int k;
    int i;
    int j;
    int Y3pIoDkJ;
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
    scanf ("%d", &Nqen29Safp);
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
        while (Nqen29Safp > i) {
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
    Y3pIoDkJ = Nqen29Safp;
    scanf ("%d", &k);
    {
        i = 0;
        while (Y3pIoDkJ > i) {
            if (a[i] == k) {
                for (j = i; Y3pIoDkJ > j; j++)
                    a[j] = a[j + 1];
                i = i - 1;
                Y3pIoDkJ = Y3pIoDkJ -1;
            }
            i = i + 1;
        };
    }
    {
        i = Y3pIoDkJ;
        while (i <= Nqen29Safp -1) {
            a[i] = '*';
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < Y3pIoDkJ -1) {
            printf ("%d ", a[i]);
            i = i + 1;
        };
    }
    printf ("%d", a[Y3pIoDkJ -1]);
}

