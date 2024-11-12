int main () {
    int n, o5VAqbB1hg, G12YroZEnKh, t, O6B9DHaIzdQ7 = (638 - 638), k = (55 - 55);
    float scAwqjiektZ [(860 - 819)], b [41], KPRjrB8yQ;
    char fIilJOH [(663 - 655)];
    scanf ("%d", &n);
    for (o5VAqbB1hg = (834 - 834); n > o5VAqbB1hg; o5VAqbB1hg = o5VAqbB1hg + 1) {
        scanf ("%s%f", fIilJOH, &KPRjrB8yQ);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!('m' != fIilJOH[(400 - 400)])) {
            scAwqjiektZ[O6B9DHaIzdQ7] = KPRjrB8yQ;
            O6B9DHaIzdQ7++;
        }
        else {
            b[k] = KPRjrB8yQ;
            k = k + 1;
        };
    }
    for (o5VAqbB1hg = (29 - 29); O6B9DHaIzdQ7 > o5VAqbB1hg; o5VAqbB1hg++) {
        t = o5VAqbB1hg;
        {
            G12YroZEnKh = o5VAqbB1hg;
            while (O6B9DHaIzdQ7 > G12YroZEnKh) {
                if (scAwqjiektZ[G12YroZEnKh] < scAwqjiektZ[t])
                    t = G12YroZEnKh;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                G12YroZEnKh++;
            };
        }
        KPRjrB8yQ = scAwqjiektZ[t];
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        scAwqjiektZ[t] = scAwqjiektZ[o5VAqbB1hg];
        scAwqjiektZ[o5VAqbB1hg] = KPRjrB8yQ;
    }
    {
        o5VAqbB1hg = 116 - 116;
        while (o5VAqbB1hg < k) {
            t = o5VAqbB1hg;
            {
                G12YroZEnKh = o5VAqbB1hg;
                while (k > G12YroZEnKh) {
                    if (b[G12YroZEnKh] > b[t])
                        t = G12YroZEnKh;
                    G12YroZEnKh++;
                };
            }
            KPRjrB8yQ = b[t];
            b[t] = b[o5VAqbB1hg];
            b[o5VAqbB1hg] = KPRjrB8yQ;
            o5VAqbB1hg = o5VAqbB1hg + 1;
        };
    }
    {
        o5VAqbB1hg = 927 - 927;
        while (o5VAqbB1hg < O6B9DHaIzdQ7) {
            printf ("%.2f ", scAwqjiektZ[o5VAqbB1hg]);
            o5VAqbB1hg++;
        };
    }
    {
        o5VAqbB1hg = 51 - 51;
        while (o5VAqbB1hg < k - 1) {
            printf ("%.2f ", b[o5VAqbB1hg]);
            o5VAqbB1hg++;
        };
    }
    printf ("%.2f\n", b[o5VAqbB1hg]);
    return 0;
}

