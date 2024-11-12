struct   lib {
    int nJeyzI;
    char nKRofgqmBMc [26];
}
jqg39V1zMSCR [(1311 - 311)];

int main () {
    int HPcWUg8la2xX;
    int t7L9MX;
    int vKf1cvhP;
    int cflYcd01;
    int arqfDx7K3;
    int HAedHQYvg [1000] = {0};
    int own [1000] [1000];
    arqfDx7K3 = 0;
    scanf ("%d", &HPcWUg8la2xX);
    {
        t7L9MX = 0;
        while (HPcWUg8la2xX -1 >= t7L9MX) {
            scanf ("%d%s", &(jqg39V1zMSCR[t7L9MX].nJeyzI), jqg39V1zMSCR[t7L9MX].nKRofgqmBMc);
            t7L9MX = t7L9MX + 1;
        };
    }
    {
        vKf1cvhP = 'A';
        while ('Z' >= vKf1cvhP) {
            {
                t7L9MX = 0;
                while (HPcWUg8la2xX -1 >= t7L9MX) {
                    {
                        cflYcd01 = 0;
                        while (25 >= cflYcd01) {
                            if (!(jqg39V1zMSCR[t7L9MX].nKRofgqmBMc[cflYcd01] != vKf1cvhP)) {
                                HAedHQYvg[vKf1cvhP]++;
                                own[vKf1cvhP][t7L9MX] = jqg39V1zMSCR[t7L9MX].nJeyzI;
                            }
                            cflYcd01 = cflYcd01 + 1;
                        };
                    }
                    t7L9MX = t7L9MX + 1;
                };
            }
            vKf1cvhP = vKf1cvhP + 1;
        };
    }
    {
        t7L9MX = 'A';
        while (t7L9MX <= 'Z') {
            if (HAedHQYvg[t7L9MX] > arqfDx7K3) {
                arqfDx7K3 = HAedHQYvg[t7L9MX];
            }
            t7L9MX = t7L9MX + 1;
        };
    }
    {
        vKf1cvhP = 'A';
        while (vKf1cvhP <= 'Z') {
            if (HAedHQYvg[vKf1cvhP] == arqfDx7K3) {
                printf ("%c\n%d\n", vKf1cvhP, HAedHQYvg[vKf1cvhP]);
                {
                    cflYcd01 = 0;
                    while (cflYcd01 <= HPcWUg8la2xX -1) {
                        if (own[vKf1cvhP][cflYcd01] != 0) {
                            printf ("%d\n", own[vKf1cvhP][cflYcd01]);
                        }
                        cflYcd01 = cflYcd01 + 1;
                    };
                }
                break;
            }
            vKf1cvhP = vKf1cvhP + 1;
        };
    }
    return 0;
}

