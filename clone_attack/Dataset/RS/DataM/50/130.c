void  main () {
    int a [13];
    int w;
    int i;
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
    scanf ("%d", &w);
    a[1] = w + 12 % 7;
    if (7 < a[1])
        a[1] = a[1] - 7;
    {
        i = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (12 >= i) {
            if (!(2 != i) || i == 4 || !(6 != i) || !(8 != i) || i == 9 || i == 11) {
                a[i] = a[i - 1] + 31 % 7;
            }
            if (i == 3) {
                a[i] = a[i - 1] + 28 % 7;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (i == 5 || i == 7 || i == 10 || i == 12) {
                a[i] = a[i - 1] + 30 % 7;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
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
            if (a[i] > 7)
                a[i] = a[i] - 7;
            i = i + 1;
        };
    }
    for (i = 1; i <= 12; i++) {
        if (a[i] == 5)
            printf ("%d\n", i);
    };
}

