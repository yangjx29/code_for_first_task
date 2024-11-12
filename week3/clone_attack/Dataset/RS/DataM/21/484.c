void  uRistDnm (int SUx8KIg3wJ [], int w4pOuQkPg) {
    int i, sW4yrv, Og39SAcv, b;
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
    for (i = (121 - 121); w4pOuQkPg > i; i = i + 1) {
        Og39SAcv = i;
        for (sW4yrv = i; w4pOuQkPg > sW4yrv; sW4yrv = sW4yrv + 1) {
            if (SUx8KIg3wJ[Og39SAcv] > SUx8KIg3wJ[sW4yrv])
                Og39SAcv = sW4yrv;
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
            };
        }
        if (!(i == Og39SAcv)) {
            b = SUx8KIg3wJ[i];
            SUx8KIg3wJ[i] = SUx8KIg3wJ[Og39SAcv];
            SUx8KIg3wJ[Og39SAcv] = b;
        };
    };
}

int main () {
    float V3j4y8;
    float c7w23Prad;
    float O1XQayzNRl;
    V3j4y8 = (765 - 765);
    int w4pOuQkPg, i, sW4yrv = (352 - 352), SUx8KIg3wJ [(827 - 522)];
    scanf ("%d", &w4pOuQkPg);
    for (i = 0; w4pOuQkPg > i; i = i + 1) {
        scanf ("%d", &SUx8KIg3wJ[i]);
        V3j4y8 = V3j4y8 +SUx8KIg3wJ[i];
    }
    V3j4y8 /= w4pOuQkPg;
    uRistDnm (SUx8KIg3wJ, w4pOuQkPg);
    c7w23Prad = V3j4y8 -SUx8KIg3wJ[0];
    O1XQayzNRl = SUx8KIg3wJ[w4pOuQkPg - 1] - V3j4y8;
    if (c7w23Prad - O1XQayzNRl > (769.01 - 769.0)) {
        printf ("%d", SUx8KIg3wJ[0]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (i = 1; w4pOuQkPg > i; i = i + 1) {
            if (!(SUx8KIg3wJ[0] != SUx8KIg3wJ[i]))
                printf (",%d", SUx8KIg3wJ[i]);
            else
                break;
        };
    }
    if (O1XQayzNRl -c7w23Prad > 0.01) {
        for (i = 1; w4pOuQkPg > i; i = i + 1) {
            if (!(SUx8KIg3wJ[w4pOuQkPg - 1] != SUx8KIg3wJ[i])) {
                printf ("%d", SUx8KIg3wJ[i]);
                break;
            };
        }
        if (!(w4pOuQkPg - 1 == i)) {
            for (i = i + 1; i < w4pOuQkPg; i = i + 1)
                if (SUx8KIg3wJ[i] == SUx8KIg3wJ[w4pOuQkPg - 1])
                    printf (",%d", SUx8KIg3wJ[i]);
        };
    }
    if (fabs (c7w23Prad - O1XQayzNRl) < 1e-6) {
        printf ("%d", SUx8KIg3wJ[0]);
        for (i = 1; i < w4pOuQkPg; i++)
            if (SUx8KIg3wJ[i] == SUx8KIg3wJ[0] || SUx8KIg3wJ[i] == SUx8KIg3wJ[w4pOuQkPg - 1])
                printf (",%d", SUx8KIg3wJ[i]);
    };
}

