void  main () {
    char c;
    char xwWpq0Ph [2000] = {'0'};
    char sZ2qa7uxoT;
    unsigned  int NVFq0hlWU [301] = {0}, i, RU1fP30 = 0, GUVlj7oast = (629 - 628), n = 1, ESCwjD2qvsT, t, z = 0, q = 0;
    gets (xwWpq0Ph);
    {
        i = 0;
        while (!('\0' == (c = xwWpq0Ph[i]))) {
            if (!(',' != (c = xwWpq0Ph[i])))
                n = n + 1;
            i = i + 1;
        };
    }
    {
        i = 0;
        while ((c = xwWpq0Ph[i]) != '\0') {
            if (!(',' != (sZ2qa7uxoT = xwWpq0Ph[i]))) {
                RU1fP30++;
                GUVlj7oast = 1;
                continue;
            }
            else {
                NVFq0hlWU[RU1fP30] = xwWpq0Ph[i] - '0' + NVFq0hlWU[RU1fP30] * 10;
            }
            i = i + 1;
        };
    }
    for (i = 0; n - 1 >= i; i = i + 1) {
        ESCwjD2qvsT = i;
        {
            RU1fP30 = i;
            while (RU1fP30 <= n) {
                if (NVFq0hlWU[RU1fP30] > NVFq0hlWU[ESCwjD2qvsT])
                    ESCwjD2qvsT = RU1fP30;
                RU1fP30++;
            };
        }
        t = NVFq0hlWU[ESCwjD2qvsT];
        NVFq0hlWU[ESCwjD2qvsT] = NVFq0hlWU[i];
        NVFq0hlWU[i] = t;
    }
    {
        i = 1;
        while (i < n) {
            if (NVFq0hlWU[i] < NVFq0hlWU[0]) {
                q = 1;
                printf ("%d\n", NVFq0hlWU[i]);
                break;
            }
            i = i + 1;
        };
    }
    if (q == 0)
        printf ("No\n");
}

