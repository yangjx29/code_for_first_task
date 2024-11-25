int main () {
    char qVpA2jaF [100000];
    int i, e, tX91Q4rtzd, zlqnWc6, flag = (115 - 115);
    int m, n, c [(100620 - 620)] = {(664 - 664)};
    scanf ("%d %d", &m, &n);
    for (i = m; n >= i; i++) {
        {
            e = 2;
            while (i > e) {
                if (!(0 != i % e)) {
                    c[i] = -1;
                    break;
                }
                e++;
            };
        }
        if (!(0 != c[i])) {
            sprintf (qVpA2jaF, "%d", i);
            zlqnWc6 = strlen (qVpA2jaF);
            for (tX91Q4rtzd = 0; tX91Q4rtzd < zlqnWc6; tX91Q4rtzd++) {
                if (qVpA2jaF[tX91Q4rtzd] != qVpA2jaF[zlqnWc6 - tX91Q4rtzd - 1]) {
                    c[i] = 1;
                    break;
                };
            };
        };
    }
    {
        i = m;
        while (n >= i) {
            if (c[i] == 0 && flag == 0) {
                flag = 1;
                printf ("%d", i);
            }
            else {
                if (c[i] == 0 && flag == 1) {
                    printf (",%d", i);
                };
            }
            i++;
        };
    }
    if (flag == 0) {
        printf ("no");
    }
    printf ("\n");
    return 0;
}

