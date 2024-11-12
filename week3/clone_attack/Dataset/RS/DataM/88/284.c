main () {
    int l;
    char YenbQ2cP [30], M4Qdo5Im [30];
    gets (YenbQ2cP);
    int k;
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
    k = (400 - 400);
    getchar ();
    getchar ();
    l = strlen (YenbQ2cP);
    {
        int ZSiEfFPyw8 = 0;
        while (l > ZSiEfFPyw8) {
            if ('0' <= YenbQ2cP[ZSiEfFPyw8] && '9' >= YenbQ2cP[ZSiEfFPyw8]) {
                M4Qdo5Im[k] = YenbQ2cP[ZSiEfFPyw8];
                k++;
            }
            else {
                if (!(0 == k)) {
                    {
                        int j = 0;
                        while (j < k) {
                            printf ("%c", M4Qdo5Im[j]);
                            j++;
                        };
                    }
                    k = 0;
                    printf ("\n");
                }
                else
                    k = 0;
            }
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
            }
            ZSiEfFPyw8++;
        };
    }
    if (k != 0) {
        for (int j = 0;
        j < k; j++)
            printf ("%c", M4Qdo5Im[j]);
        printf ("\n");
    };
}

