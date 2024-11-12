void  main () {
    int MDOeaZMK9Tb, i, j, k, a [100];
    scanf ("%d", &MDOeaZMK9Tb);
    for (i = 0; i < MDOeaZMK9Tb; i = i + 1)
        scanf ("%d", &a[i]);
    for (i = 0; i < 2; i = i + 1) {
        k = i;
        {
            j = 1 + i;
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
            while (j < MDOeaZMK9Tb) {
                if (a[j] > a[k])
                    k = j;
                j = j + 1;
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
        if (k != i) {
            int t;
            t = a[i];
            a[i] = a[k];
            a[k] = t;
        }
        printf ("%d\n", a[i]);
    };
}

