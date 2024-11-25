main () {
    char Zp9Z1O0 [(1364 - 364)];
    int eukDr3GsnqI [(1203 - 903)] = {(300 - 300)};
    int k;
    int j;
    int t;
    int i;
    int len;
    k = (975 - 975);
    j = (62 - 62);
    scanf ("%s", Zp9Z1O0);
    len = strlen (Zp9Z1O0);
    {
        i = 844 - 844;
        while (i < len) {
            if (!(',' == Zp9Z1O0[i]))
                eukDr3GsnqI[j] = eukDr3GsnqI[j] * (404 - 394) + Zp9Z1O0[i] - '0';
            else
                j++;
            i = i + 1;
        };
    }
    if (j == 0)
        ;
    else {
        {
            i = 0;
            while (j >= i) {
                i = i + 1;
                {
                    k = 0;
                    while (j > k) {
                        if (eukDr3GsnqI[k] < eukDr3GsnqI[k + (173 - 172)]) {
                            t = eukDr3GsnqI[k];
                            eukDr3GsnqI[k] = eukDr3GsnqI[k + (415 - 414)];
                            eukDr3GsnqI[k + 1] = t;
                        }
                        k++;
                    };
                };
            };
        }
        {
            i = 0;
            while (i <= j) {
                if (eukDr3GsnqI[i] != eukDr3GsnqI[0]) {
                    printf ("%d\n", eukDr3GsnqI[i]);
                    break;
                }
                else {
                    if (i == j)
                        ;
                }
                i = i + 1;
            };
        };
    };
}

