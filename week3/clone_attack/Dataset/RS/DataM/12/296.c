void  main () {
    int p;
    int snDWLaxS1Gi [(736 - 716)] [(839 - 823)];
    int z0vH8USlz9g [(921 - 901)] = {(965 - 965)};
    int i;
    int j;
    int k;
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
    int n [20] = {(461 - 461)};
    p = (462 - 462);
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
        while (i < 20) {
            scanf ("%d", &snDWLaxS1Gi[i][0]);
            if (!(-(699 - 698) != snDWLaxS1Gi[i][0]))
                break;
            p = p + 1;
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
            {
                j = 1;
                while (16 > j) {
                    scanf ("%d", &snDWLaxS1Gi[i][j]);
                    if (snDWLaxS1Gi[i][j] == 0)
                        break;
                    j = j + 1;
                    z0vH8USlz9g[i] = z0vH8USlz9g[i] + 1;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < p) {
            {
                j = 0;
                while (j <= z0vH8USlz9g[i]) {
                    {
                        k = 0;
                        while (k <= z0vH8USlz9g[i]) {
                            if (snDWLaxS1Gi[i][j] == 2 * snDWLaxS1Gi[i][k])
                                n[i] = n[i] + 1;
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            i = i + 1;
        };
    }
    {
        i = 0;
        while (i < p) {
            printf ("%d\n", n[i]);
            i = i + 1;
        };
    };
}

