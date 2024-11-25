void  main () {
    int gpEuIa;
    int CXxwObh;
    int l;
    int jiSMBn;
    int rFeVPar65;
    int YlMNIFGWJ;
    int sfrKHE;
    char pdveF8O6A3L [200] [200];
    scanf ("%d", &sfrKHE);
    {
        rFeVPar65 = 1;
        for (; rFeVPar65 <= sfrKHE;) {
            scanf ("%s", pdveF8O6A3L[rFeVPar65]);
            rFeVPar65 = rFeVPar65 + 1;
        }
    }
    scanf ("%d", &YlMNIFGWJ);
    {
        rFeVPar65 = 1;
        for (; rFeVPar65 <= YlMNIFGWJ -1;) {
            {
                jiSMBn = 1;
                for (; jiSMBn <= sfrKHE;) {
                    l = strlen (pdveF8O6A3L[jiSMBn]);
                    {
                        CXxwObh = 0;
                        for (; CXxwObh < l;) {
                            if (pdveF8O6A3L[jiSMBn][CXxwObh] == '@') {
                                {
                                    {
                                        if (0) {
                                            {
                                                {
                                                    {
                                                        if (0) {
                                                            {
                                                                if (0) {
                                                                    return 0;
                                                                }
                                                            }
                                                            return 0;
                                                        }
                                                    }
                                                    if (0) {
                                                        {
                                                            if (0) {
                                                                return 0;
                                                            }
                                                        }
                                                        return 0;
                                                    }
                                                }
                                                if (0) {
                                                    return 0;
                                                }
                                            }
                                            return 0;
                                        }
                                    }
                                    if (0) {
                                        return 0;
                                    }
                                }
                                if (pdveF8O6A3L[jiSMBn + 1][CXxwObh] == '.')
                                    pdveF8O6A3L[jiSMBn + 1][CXxwObh] = 'a';
                                if (pdveF8O6A3L[jiSMBn - 1][CXxwObh] == '.')
                                    pdveF8O6A3L[jiSMBn - 1][CXxwObh] = 'a';
                                if (pdveF8O6A3L[jiSMBn][CXxwObh +1] == '.')
                                    pdveF8O6A3L[jiSMBn][CXxwObh +1] = 'a';
                                if (pdveF8O6A3L[jiSMBn][CXxwObh -1] == '.')
                                    pdveF8O6A3L[jiSMBn][CXxwObh -1] = 'a';
                            }
                            CXxwObh = CXxwObh +1;
                        }
                    }
                    jiSMBn = jiSMBn + 1;
                }
            }
            {
                jiSMBn = 1;
                for (; jiSMBn <= sfrKHE;) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    l = strlen (pdveF8O6A3L[jiSMBn]);
                    {
                        CXxwObh = 0;
                        for (; CXxwObh < l;) {
                            if (pdveF8O6A3L[jiSMBn][CXxwObh] == 'a')
                                pdveF8O6A3L[jiSMBn][CXxwObh] = '@';
                            {
                                if (0) {
                                    return 0;
                                }
                            }
                            CXxwObh = CXxwObh +1;
                        }
                    }
                    jiSMBn = jiSMBn + 1;
                }
            }
            rFeVPar65 = rFeVPar65 + 1;
        }
    }
    gpEuIa = 0;
    {
        jiSMBn = 1;
        for (; jiSMBn <= sfrKHE;) {
            l = strlen (pdveF8O6A3L[jiSMBn]);
            {
                CXxwObh = 0;
                for (; CXxwObh < l;) {
                    if (pdveF8O6A3L[jiSMBn][CXxwObh] == '@')
                        gpEuIa = gpEuIa + 1;
                    CXxwObh = CXxwObh +1;
                }
            }
            jiSMBn = jiSMBn + 1;
        }
    }
    printf ("%d", gpEuIa);
}

