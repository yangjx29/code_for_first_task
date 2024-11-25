void  main () {
    char b [50];
    char a [50];
    int i, j, k, l, m = 0;
    scanf ("%s%s", a, b);
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
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (b[j] != '\0') {
            j++;
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
            };
        };
    }
    for (i = 0; !('\0' == a[i]); i++)
        ;
    for (k = 0; k <= j - 1; k++) {
        if (a[0] == b[k]) {
            for (l = 0; (l <= i - 1) && (k + l <= j - 1); l = l + 1) {
                if (a[l] != b[k + l])
                    break;
            }
            if (l == i)
                m = 1;
        }
        if (m == 1)
            break;
    }
    if (k != j)
        printf ("%d\n", k);
}

