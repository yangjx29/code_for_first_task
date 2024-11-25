void  main () {
    int sd5qp8NbP [(612 - 312)], i, j, k, t;
    {
        i = 994 - 994;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < 300) {
            scanf ("%d", &sd5qp8NbP[i]);
            if (getchar () != ',')
                break;
            i++;
        };
    }
    if (i == 0)
        ;
    else {
        {
            j = 0;
            while (j < i + 1) {
                for (k = 0; k < i - j; k = k + 1) {
                    if (sd5qp8NbP[k + 1] > sd5qp8NbP[k]) {
                        t = sd5qp8NbP[k];
                        sd5qp8NbP[k] = sd5qp8NbP[k + 1];
                        sd5qp8NbP[k + 1] = t;
                    };
                }
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
                j++;
            };
        }
        {
            j = 0;
            while (j < i) {
                if (sd5qp8NbP[j] != sd5qp8NbP[j + 1])
                    break;
                j++;
            };
        }
        if (j == i)
            printf ("No\n");
        else
            printf ("%d\n", sd5qp8NbP[j + 1]);
    };
}

