main () {
    int g [100000];
    char MNoBc5j4DxY8 [100000];
    int DHMSRrEU, c, EbLMy3g5, e, f, SXWkwq8;
    scanf ("%d", &DHMSRrEU);
    {
        c = 0;
        while (DHMSRrEU > c) {
            scanf ("%s", MNoBc5j4DxY8);
            {
                SXWkwq8 = 0;
                while (100000 > SXWkwq8) {
                    g[SXWkwq8] = 0;
                    SXWkwq8++;
                };
            }
            e = strlen (MNoBc5j4DxY8);
            {
                EbLMy3g5 = 0;
                while (EbLMy3g5 < e - 1) {
                    {
                        f = EbLMy3g5 +1;
                        while (f < e) {
                            if (MNoBc5j4DxY8[f] == MNoBc5j4DxY8[EbLMy3g5]) {
                                g[f]++;
                                g[EbLMy3g5]++;
                            }
                            f++;
                        };
                    }
                    if (!(e != f) && g[EbLMy3g5] == 0) {
                        printf ("%c\n", MNoBc5j4DxY8[EbLMy3g5]);
                        break;
                    }
                    EbLMy3g5++;
                };
            }
            c = c + 1;
            if (EbLMy3g5 == e - 1)
                ;
        };
    };
}

