main () {
    int *p, i, RwUd1kH4, bI1TpjAsotG, n, cycle, ii;
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
    scanf ("%d", &cycle);
    {
        ii = 0;
        while (ii < cycle) {
            free (p);
            ii = ii + 1;
            scanf ("%d %d", &bI1TpjAsotG, &n);
            p = (int *) calloc (bI1TpjAsotG * n, sizeof (int));
            for (i = 0; i < bI1TpjAsotG * n; i++)
                scanf ("%d", p + i);
            RwUd1kH4 = 0;
            {
                i = 0;
                while (n > i) {
                    RwUd1kH4 += *(p + i);
                    i = i + 1;
                };
            }
            if (bI1TpjAsotG > 1) {
                for (i = 0; n > i; i++)
                    RwUd1kH4 += *(p + i + (bI1TpjAsotG - 1) * n);
            }
            for (i = 2; bI1TpjAsotG > i; i++)
                RwUd1kH4 = RwUd1kH4 +*(p + (i - 1) * n);
            if (n > 1) {
                i = 2;
                while (i < bI1TpjAsotG) {
                    RwUd1kH4 += *(p + n - 1 + (i - 1) * n);
                    i++;
                };
            }
            printf ("%d\n", RwUd1kH4);
        };
    };
}

