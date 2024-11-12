main () {
    int a [10000];
    int zDKmBv, i, b;
    scanf ("%d", &zDKmBv);
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
        while (i < zDKmBv) {
            int sum = 0;
            i++;
            scanf ("%d", &b);
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
            sum = fei (b);
            printf ("%d\n", sum);
        };
    };
}

int fei (int zDKmBv) {
    if (!(1 != zDKmBv))
        return 1;
    if (zDKmBv == 2)
        return 1;
    return (fei (zDKmBv - 1) + fei (zDKmBv - 2));
}

