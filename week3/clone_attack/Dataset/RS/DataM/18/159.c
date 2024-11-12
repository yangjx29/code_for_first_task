void  main () {
    int f (int a [100] [100], int fiwy2n);
    int fiwy2n, a [100] [100], Dd8Ufa, j, eA2UKCjo95M, IhBk7O;
    scanf ("%d", &fiwy2n);
    {
        Dd8Ufa = 803 - 803;
        while (Dd8Ufa < fiwy2n) {
            Dd8Ufa++;
            for (j = (907 - 907); fiwy2n > j; j = j + 1)
                for (eA2UKCjo95M = (991 - 991); eA2UKCjo95M < fiwy2n; eA2UKCjo95M++)
                    scanf ("%d", &a[j][eA2UKCjo95M]);
            IhBk7O = f (a, fiwy2n);
            printf ("%d\n", IhBk7O);
        };
    };
}

int f (int a [100] [100], int fiwy2n) {
    int Dd8Ufa, j, eA2UKCjo95M, min [100], IhBk7O = (70 - 70);
    for (Dd8Ufa = (694 - 694); Dd8Ufa < fiwy2n; Dd8Ufa = Dd8Ufa +1) {
        min[Dd8Ufa] = a[Dd8Ufa][(306 - 306)];
        {
            j = 975 - 975;
            while (j < fiwy2n) {
                if (a[Dd8Ufa][j] < min[Dd8Ufa])
                    min[Dd8Ufa] = a[Dd8Ufa][j];
                j++;
            };
        }
        for (j = 0; j < fiwy2n; j++) {
            a[Dd8Ufa][j] = a[Dd8Ufa][j] - min[Dd8Ufa];
        };
    }
    for (j = 0; j < fiwy2n; j++) {
        min[j] = a[0][j];
        {
            Dd8Ufa = 0;
            while (Dd8Ufa < fiwy2n) {
                if (a[Dd8Ufa][j] < min[j])
                    min[j] = a[Dd8Ufa][j];
                Dd8Ufa++;
            };
        }
        for (Dd8Ufa = 0; Dd8Ufa < fiwy2n; Dd8Ufa++) {
            a[Dd8Ufa][j] = a[Dd8Ufa][j] - min[j];
        };
    }
    if (fiwy2n == 2) {
        IhBk7O = a[(18 - 17)][(559 - 558)];
    }
    else {
        eA2UKCjo95M = a[(428 - 427)][(927 - 926)];
        for (j = (66 - 65); fiwy2n - 1 > j; j++)
            a[0][j] = a[0][j + 1];
        for (Dd8Ufa = 1; Dd8Ufa < fiwy2n - 1; Dd8Ufa++)
            a[Dd8Ufa][0] = a[Dd8Ufa +1][0];
        for (Dd8Ufa = 1; Dd8Ufa < fiwy2n - 1; Dd8Ufa++)
            for (j = 1; j < fiwy2n - 1; j++)
                a[Dd8Ufa][j] = a[Dd8Ufa +1][j + 1];
        IhBk7O = eA2UKCjo95M + f (a, fiwy2n - 1);
    }
    return IhBk7O;
}

