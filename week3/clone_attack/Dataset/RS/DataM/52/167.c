void  main () {
    int luBVEo9X;
    int cqMjtB;
    int fKNmut;
    int j;
    int a [(740 - 539)];
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
    char feOQRx [101];
    scanf ("%d%d", &luBVEo9X, &cqMjtB);
    {
        fKNmut = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (luBVEo9X > fKNmut) {
            scanf ("%d", &a[fKNmut]);
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
            fKNmut = fKNmut + 1;
        };
    }
    {
        fKNmut = 0;
        while (luBVEo9X > fKNmut) {
            if (fKNmut >= cqMjtB && fKNmut < luBVEo9X) {
                a[fKNmut + luBVEo9X] = *(a + fKNmut - cqMjtB);
            }
            else
                a[fKNmut + luBVEo9X] = *(a + fKNmut + luBVEo9X - cqMjtB);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            fKNmut = fKNmut + 1;
        };
    }
    {
        fKNmut = 0;
        while (fKNmut < luBVEo9X) {
            if (fKNmut != 0)
                printf (" %d", a[fKNmut + luBVEo9X]);
            else
                printf ("%d", a[fKNmut + luBVEo9X]);
            fKNmut = fKNmut + 1;
        };
    };
}

