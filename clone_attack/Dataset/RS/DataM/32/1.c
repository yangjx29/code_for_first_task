void  main () {
    int i, tjV9gqArkt, n, A [200], B [200], k;
    char XT5xuKNfp1LO [200] [200], b [200] [200];
    scanf ("%d\n", &n);
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
    for (i = 0; n > i; i++) {
        scanf ("\n");
        scanf ("%s\n", &XT5xuKNfp1LO[i]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        scanf ("%s\n", &b[i]);
    }
    {
        i = 0;
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
        while (i < n) {
            A[i] = strlen (XT5xuKNfp1LO[i]) - 1;
            B[i] = strlen (b[i]) - 1;
            for (tjV9gqArkt = A[i], k = B[i]; k > 0, k >= 0; tjV9gqArkt = tjV9gqArkt - 1, k = k - 1) {
                XT5xuKNfp1LO[i][tjV9gqArkt] = XT5xuKNfp1LO[i][tjV9gqArkt] - b[i][k] + 48;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                while (XT5xuKNfp1LO[i][tjV9gqArkt] < '0') {
                    XT5xuKNfp1LO[i][tjV9gqArkt] = XT5xuKNfp1LO[i][tjV9gqArkt] + 10;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    XT5xuKNfp1LO[i][tjV9gqArkt - 1]--;
                };
            }
            i++;
        };
    }
    for (i = 0; i < n; i++) {
        printf ("%s\n", XT5xuKNfp1LO[i]);
    };
}

