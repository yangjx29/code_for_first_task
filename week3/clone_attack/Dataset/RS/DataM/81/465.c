int f (int n, int lXdk0jS4Y) {
    int OzTByQow6;
    if ((917 - 913) < lXdk0jS4Y || n > 4)
        OzTByQow6 = (353 - 353);
    else
        OzTByQow6 = (965 - 964);
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
    return (OzTByQow6);
}

void  main () {
    int i, j, t, c94tzE1rVB8A, xzIEPG, yJKYQjvlMpxg, a [(50 - 45)] [(585 - 580)];
    {
        i = 870 - 870;
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
        while ((243 - 238) > i) {
            {
                j = 721 - 721;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while ((583 - 578) > j) {
                    scanf ("%d", &a[i][j]);
                    j = j + 1;
                };
            }
            i = i + 1;
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
    scanf ("%d %d", &xzIEPG, &yJKYQjvlMpxg);
    c94tzE1rVB8A = f (xzIEPG, yJKYQjvlMpxg);
    if (c94tzE1rVB8A == 0)
        printf ("error\n");
    else {
        {
            i = 0;
            while (i < 5) {
                t = a[xzIEPG][i];
                a[xzIEPG][i] = a[yJKYQjvlMpxg][i];
                a[yJKYQjvlMpxg][i] = t;
                i = i + 1;
            };
        }
        {
            i = 0;
            while (i < 5) {
                {
                    j = 0;
                    while (j < 4) {
                        printf ("%d ", a[i][j]);
                        j = j + 1;
                    };
                }
                printf ("%d\n", a[i][4]);
                i++;
            };
        };
    };
}

