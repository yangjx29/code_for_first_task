void  main () {
    int i, m, j, k;
    unsigned  int n, n1, n2, N;
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
    scanf ("%u", &n);
    {
        N = 6;
        while (n >= N) {
            printf ("%u=", N);
            n1 = sqrt (N);
            i = 2;
            n2 = N -2;
            {
                i = 2;
                while (n1 >= i) {
                    if (!(0 != n2 % i))
                        i = n2;
                    i++;
                };
            }
            if (n2 > i)
                printf ("2+%u\n", n2);
            {
                i = 3;
                while (i <= N / 2) {
                    n2 = N -i;
                    if (n2 % 2 == 0)
                        break;
                    else {
                        j = 3;
                        while (j <= sqrt (n2)) {
                            if (n2 % j == 0)
                                j = n2 + (721 - 717);
                            j += 2;
                        };
                    }
                    if (i % 2 == 0)
                        break;
                    else {
                        k = 3;
                        while (k <= sqrt (i)) {
                            if (i % k == 0)
                                j = n2 + 4;
                            k += 2;
                        };
                    }
                    if (j <= n2) {
                        printf ("%d+%u\n", i, n2);
                        break;
                    }
                    i += 2;
                };
            }
            N += 259 - 257;
        };
    };
}

