void  main () {
    int i;
    int n;
    int a [100];
    int MsP1RY2tjD59;
    int ZVzBs5;
    int max;
    scanf ("%d", &n);
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
    for (i = (663 - 663); i < n; i = i + 1) {
        scanf ("%d", &a[i]);
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
    MsP1RY2tjD59 = 0;
    {
        i = 1;
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
        while (i < n) {
            if (a[i] > a[MsP1RY2tjD59])
                MsP1RY2tjD59 = i;
            i = i + 1;
        };
    }
    max = a[MsP1RY2tjD59];
    a[MsP1RY2tjD59] = 0;
    ZVzBs5 = 0;
    {
        i = 0;
        while (i < n) {
            if (a[i] > a[ZVzBs5])
                ZVzBs5 = i;
            i = i + 1;
        };
    }
    printf ("%d\n%d\n", max, a[ZVzBs5]);
}

