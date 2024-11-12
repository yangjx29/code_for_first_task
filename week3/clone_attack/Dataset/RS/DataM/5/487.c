int main () {
    int XEmLcQBJxVA9, QB5gX2oU8c = 0, la, SsJlOWn;
    double  k6fFhGkv2, zdFbru = 0;
    char a [(1298 - 798)];
    char oSuRINd [500];
    scanf ("%lf", &k6fFhGkv2);
    scanf ("%s%s", a, oSuRINd);
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
    la = strlen (a), SsJlOWn = strlen (oSuRINd);
    if (!(SsJlOWn == la)) {
        QB5gX2oU8c = 2;
    }
    else {
        {
            XEmLcQBJxVA9 = 0;
            while (la > XEmLcQBJxVA9) {
                if ((!('A' == a[XEmLcQBJxVA9]) && !('T' == a[XEmLcQBJxVA9]) && !('C' == a[XEmLcQBJxVA9]) && !('G' == a[XEmLcQBJxVA9])) || (!('A' == oSuRINd[XEmLcQBJxVA9]) && oSuRINd[XEmLcQBJxVA9] != 'G' && oSuRINd[XEmLcQBJxVA9] != 'T' && oSuRINd[XEmLcQBJxVA9] != 'C')) {
                    QB5gX2oU8c = 2;
                    break;
                }
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                XEmLcQBJxVA9++;
            };
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
        if (QB5gX2oU8c != 2) {
            for (XEmLcQBJxVA9 = 0; XEmLcQBJxVA9 < la; XEmLcQBJxVA9++) {
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
                if (a[XEmLcQBJxVA9] == oSuRINd[XEmLcQBJxVA9]) {
                    zdFbru++;
                };
            }
            zdFbru = zdFbru / la;
            if (zdFbru <= k6fFhGkv2) {
                QB5gX2oU8c = 1;
            }
            else
                QB5gX2oU8c = 0;
        };
    }
    if (QB5gX2oU8c == 1)
        ;
    if (QB5gX2oU8c == 0)
        ;
    if (QB5gX2oU8c == 2)
        printf ("error");
    return 0;
}

