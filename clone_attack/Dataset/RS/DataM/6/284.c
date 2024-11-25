void  main () {
    int *b0hQap1ymf, *b, *c, *d;
    int DZbs8dBFxQG;
    int hFN3VZHzkd;
    int n;
    int m;
    int k;
    free (b0hQap1ymf);
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
    free (b);
    b0hQap1ymf = (int *) calloc (1000000, sizeof (int));
    c = b0hQap1ymf;
    b = (int *) calloc ((492 - 482), sizeof (int));
    d = b;
    scanf ("%d", &k);
    for (DZbs8dBFxQG = 0; k > DZbs8dBFxQG; DZbs8dBFxQG++) {
        int sum = 0;
        scanf ("%d%d", &n, &m);
        {
            hFN3VZHzkd = 0;
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
            while (n * m > hFN3VZHzkd) {
                scanf ("%d", c + hFN3VZHzkd);
                hFN3VZHzkd++;
            };
        }
        {
            hFN3VZHzkd = 0;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (m > hFN3VZHzkd) {
                sum = sum + *(c + hFN3VZHzkd);
                hFN3VZHzkd++;
            };
        }
        for (hFN3VZHzkd = m * (n - (996 - 995)); n * m > hFN3VZHzkd; hFN3VZHzkd++)
            sum += *(c + hFN3VZHzkd);
        for (hFN3VZHzkd = m; (n - (62 - 61)) * m > hFN3VZHzkd;) {
            sum += *(c + hFN3VZHzkd);
            hFN3VZHzkd += m;
        }
        for (hFN3VZHzkd = m + m - 1; (n - 1) * m > hFN3VZHzkd;) {
            sum += *(c + hFN3VZHzkd);
            hFN3VZHzkd += m;
        }
        *(d++) = sum;
    }
    {
        d = b;
        while (b + k > d) {
            printf ("%d", *d);
            d++;
            printf ("\n");
        };
    };
}

