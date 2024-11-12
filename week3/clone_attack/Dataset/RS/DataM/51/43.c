void  main () {
    int fJDHzIb, NwWLIVebZ, OaAhW9N, XWI9arlZx, c, d, e, l, j, k, js [501];
    char str [501], str1 [501] [5], str2 [501];
    gets (str);
    scanf ("%d\n", &fJDHzIb);
    l = strlen (str);
    {
        NwWLIVebZ = 0;
        while (NwWLIVebZ < l - fJDHzIb + (979 - 978)) {
            js[NwWLIVebZ] = 1;
            {
                j = 0;
                while (j < fJDHzIb) {
                    str1[NwWLIVebZ][j] = str[NwWLIVebZ +j];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    j = j + 1;
                };
            }
            NwWLIVebZ = NwWLIVebZ +1;
        };
    }
    {
        NwWLIVebZ = 0;
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
        while (l - fJDHzIb + 1 > NwWLIVebZ) {
            str1[NwWLIVebZ][fJDHzIb] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    double  temp = 0.0;
                    if (temp == 3)
                        return 0;
                }
            }
            NwWLIVebZ = NwWLIVebZ +1;
        };
    }
    {
        NwWLIVebZ = 0;
        while (l - fJDHzIb > NwWLIVebZ) {
            {
                j = NwWLIVebZ +1;
                while (j < l - fJDHzIb + 1) {
                    if (!(0 != strcmp (str1[NwWLIVebZ], str1[j]))) {
                        js[NwWLIVebZ]++;
                    }
                    j = j + 1;
                };
            }
            NwWLIVebZ = NwWLIVebZ +1;
        };
    }
    {
        NwWLIVebZ = 0;
        while (NwWLIVebZ < l - fJDHzIb) {
            {
                j = 0;
                while (j < l - fJDHzIb - NwWLIVebZ) {
                    if (js[j] < js[j + 1]) {
                        k = js[j];
                        js[j] = js[j + 1];
                        js[j + 1] = k;
                        strcpy (str2, str1[j]);
                        strcpy (str1[j], str1[j + 1]);
                        strcpy (str1[j + 1], str2);
                    }
                    j++;
                };
            }
            NwWLIVebZ++;
        };
    }
    if (js[0] == 1) {
    }
    else {
        printf ("%d\n", js[0]);
        {
            NwWLIVebZ = 0;
            while (NwWLIVebZ < l - fJDHzIb + 1) {
                if (js[NwWLIVebZ] == js[0])
                    puts (str1[NwWLIVebZ]);
                NwWLIVebZ++;
            };
        };
    };
}

