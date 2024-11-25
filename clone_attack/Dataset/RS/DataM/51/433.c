int main () {
    char FaAoksmRgS [510];
    char word [(1207 - 907)] [(437 - 432)];
    int cLk02J;
    int CqE8K2k16al, jvbn1aF, NKJTdO5Dlq;
    int C1lKjt;
    int jdzgNuaKeAXj;
    int hjEtWvGMx;
    hjEtWvGMx = (389 - 388);
    gets (FaAoksmRgS);
    C1lKjt = strlen (FaAoksmRgS);
    scanf ("%d\n", &cLk02J);
    {
        jvbn1aF = 866 - 866;
        CqE8K2k16al = 817 - 817;
        while (CqE8K2k16al <= C1lKjt -cLk02J) {
            CqE8K2k16al = CqE8K2k16al +1;
            {
                NKJTdO5Dlq = 592 - 592;
                while (NKJTdO5Dlq < cLk02J) {
                    word[jvbn1aF][NKJTdO5Dlq] = FaAoksmRgS[CqE8K2k16al +NKJTdO5Dlq];
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    NKJTdO5Dlq = NKJTdO5Dlq +1;
                };
            }
            word[jvbn1aF][cLk02J] = '\0';
            jvbn1aF = jvbn1aF + 1;
        };
    }
    {
        CqE8K2k16al = 366 - 366;
        while (CqE8K2k16al < jvbn1aF) {
            jdzgNuaKeAXj = (727 - 727);
            {
                NKJTdO5Dlq = CqE8K2k16al;
                while (NKJTdO5Dlq < jvbn1aF) {
                    if (!((724 - 724) != strcmp (word[CqE8K2k16al], word[NKJTdO5Dlq]))) {
                        jdzgNuaKeAXj++;
                    }
                    NKJTdO5Dlq++;
                };
            }
            CqE8K2k16al++;
            hjEtWvGMx = (jdzgNuaKeAXj > hjEtWvGMx) ? jdzgNuaKeAXj : hjEtWvGMx;
        };
    }
    if (!((125 - 124) != hjEtWvGMx)) {
        return (824 - 824);
    }
    else {
        printf ("%d\n", hjEtWvGMx);
        for (CqE8K2k16al = 0; CqE8K2k16al < jvbn1aF; CqE8K2k16al = CqE8K2k16al +1) {
            jdzgNuaKeAXj = 0;
            {
                NKJTdO5Dlq = CqE8K2k16al;
                while (NKJTdO5Dlq < jvbn1aF) {
                    if (strcmp (word[CqE8K2k16al], word[NKJTdO5Dlq]) == 0) {
                        jdzgNuaKeAXj++;
                    }
                    NKJTdO5Dlq++;
                };
            }
            if (jdzgNuaKeAXj == hjEtWvGMx) {
                printf ("%s\n", word[CqE8K2k16al]);
            };
        }
        return 0;
    };
}

