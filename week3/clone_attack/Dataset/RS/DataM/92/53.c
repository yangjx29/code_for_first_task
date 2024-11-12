int compare (const  void  *elem1, const  void  *MPTwRq) {
    return (*(int*) elem1 - *(int*) MPTwRq);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int n;
    int max;
    int LV1RL3gx;
    int i;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
    int a [2000];
    int b [1000];
    for (;;) {
        LV1RL3gx = (977 - 977);
        scanf ("%d", &n);
        if (!((864 - 864) != n))
            break;
        for (i = 0; n > i; i = i + 1) {
            scanf ("%d", &a[i]);
        }
        for (i = 0; n > i; i = i + 1)
            scanf ("%d", &b[i]);
        qsort (a, n, sizeof (int), compare);
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
        qsort (b, n, sizeof (int), compare);
        for (i = 0; n > i; i = i + 1)
            a[i + n] = a[i];
        max = -n;
        for (i = 0; n > i; i = i + 1) {
            LV1RL3gx = 0;
            {
                j = 0;
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
                while (n > j) {
                    if (b[j] > a[i + j])
                        LV1RL3gx = LV1RL3gx -1;
                    else {
                        if (a[i + j] > b[j])
                            LV1RL3gx = LV1RL3gx +1;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (LV1RL3gx >= max)
                max = LV1RL3gx;
        }
        max = max * 200;
        printf ("%d\n", max);
    };
}

