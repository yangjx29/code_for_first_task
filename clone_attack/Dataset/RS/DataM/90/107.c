int apple (int M, int DXyocliRb7Vv) {
    if (!((848 - 847) != M))
        return (487 - 486);
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
    if (!((905 - 904) != DXyocliRb7Vv))
        return 1;
    if (!(1 == M) && DXyocliRb7Vv != 1) {
        if (M > DXyocliRb7Vv)
            return apple (M, DXyocliRb7Vv -1) + apple (M -DXyocliRb7Vv, DXyocliRb7Vv);
        else if (M == DXyocliRb7Vv)
            return apple (M, DXyocliRb7Vv -1) + 1;
        else
            return apple (M, M);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    };
}

main () {
    int *M, *DXyocliRb7Vv;
    free (M);
    int t, i;
    free (DXyocliRb7Vv);
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
    scanf ("%d", &t);
    M = (int *) malloc (t * sizeof (int));
    DXyocliRb7Vv = (int *) malloc (t * sizeof (int));
    {
        i = 0;
        while (i < t) {
            scanf ("%d %d", &M[i], &DXyocliRb7Vv[i]);
            printf ("%d\n", apple (M[i], DXyocliRb7Vv[i]));
            i = i + 1;
        };
    };
}

