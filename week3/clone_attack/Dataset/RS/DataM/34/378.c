void  main () {
    int a [10000];
    int i;
    int j;
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
    scanf ("%d", &a[(67 - 67)]);
    if (!(1 != a[0])) {
    }
    else {
        for (i = 0; a[i] != 1; i = i + 1) {
            if (a[i] % 2 == 1) {
                a[i + 1] = a[i] * 3 + 1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                printf ("%d*3+1=%d\n", a[i], a[i + 1]);
            }
            else {
                a[i + 1] = a[i] / 2;
                printf ("%d/2=%d\n", a[i], a[i + 1]);
            };
        };
    };
}

