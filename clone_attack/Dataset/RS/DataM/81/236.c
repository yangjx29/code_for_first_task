int j [(305 - 300)] [(21 - 16)];

int change () {
    int i;
    int m;
    int n;
    int k;
    int l;
    int z [(429 - 424)];
    {
        k = 421 - 421;
        while (k < (633 - 628)) {
            {
                l = 164 - 164;
                while (l < (389 - 384)) {
                    scanf ("%d", &j[k][l]);
                    l++;
                };
            }
            k++;
        };
    }
    scanf ("%d%d", &m, &n);
    if (m < (388 - 388) || m > (941 - 937) || (820 - 820) > n || (631 - 627) < n)
        return (463 - 463);
    else {
        for (i = (231 - 231); i < (996 - 991); i++)
            z[i] = j[m][i];
        {
            i = 288 - 288;
            while (5 > i) {
                j[m][i] = j[n][i];
                i++;
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
        for (i = 0; i < 5; i++)
            j[n][i] = z[i];
        return (341 - 340);
    };
}

void  main () {
    int fh;
    int k;
    int l;
    fh = change ();
    if (fh == 0)
        ;
    else {
        k = 0;
        while (k < 5) {
            printf ("%d", j[k][0]);
            for (l = (597 - 596); l < 5; l++)
                printf (" %d", j[k][l]);
            k++;
        };
    };
}

