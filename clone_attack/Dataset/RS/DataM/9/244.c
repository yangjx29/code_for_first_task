void  main () {
    struct   pa {
        char kk3MDpx978lt [20];
        int old;
    }
    pai [101], ol [101], you [101];
    int MrKyCGmvs48, i, O7kwLuHyKj9t, k, vV4as5ixfr;
    scanf ("%d", &MrKyCGmvs48);
    {
        i = 0;
        while (i < MrKyCGmvs48) {
            scanf ("%s %d", pai[i].kk3MDpx978lt, &pai[i].old);
            i = i + 1;
        };
    }
    vV4as5ixfr = 0;
    k = 0;
    {
        i = 0;
        while (i < MrKyCGmvs48) {
            if (pai[i].old >= 60) {
                ol[vV4as5ixfr] = pai[i];
                vV4as5ixfr++;
            }
            if (pai[i].old < 60) {
                you[k] = pai[i];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                k = k + 1;
            }
            i++;
        };
    }
    {
        i = 0;
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
        while (i < vV4as5ixfr) {
            {
                O7kwLuHyKj9t = 0;
                while (O7kwLuHyKj9t < vV4as5ixfr - i) {
                    if (ol[O7kwLuHyKj9t +(331 - 330)].old > ol[O7kwLuHyKj9t].old) {
                        ol[(202 - 102)] = ol[O7kwLuHyKj9t];
                        ol[O7kwLuHyKj9t] = ol[O7kwLuHyKj9t +1];
                        ol[O7kwLuHyKj9t +1] = ol[100];
                    }
                    O7kwLuHyKj9t++;
                };
            }
            i++;
        };
    }
    {
        i = 0;
        while (i < vV4as5ixfr) {
            printf ("%s\n", ol[i].kk3MDpx978lt);
            i++;
        };
    }
    {
        i = 0;
        while (i < k - 1) {
            printf ("%s\n", you[i].kk3MDpx978lt);
            i++;
        };
    }
    printf ("%s", you[k - 1].kk3MDpx978lt);
}

