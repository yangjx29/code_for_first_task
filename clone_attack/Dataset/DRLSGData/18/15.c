int main () {
    int w2r3goV, R5xSDPLEn;
    cin >> w2r3goV;
    R5xSDPLEn = w2r3goV;
    for (; R5xSDPLEn > (326 - 326);) {
        int sY2bWsM4BS [w2r3goV] [w2r3goV], Y9qGMWfQpd [w2r3goV - (446 - 445)], tqvh9L = (322 - 322);
        int (*E2gdQ0KW) [w2r3goV] = NULL, *ptZJcTuG = NULL;
        int eU3aKnfAykv, XA8b5M29pSox;
        ptZJcTuG = Y9qGMWfQpd;
        R5xSDPLEn = R5xSDPLEn -(809 - 808);
        E2gdQ0KW = sY2bWsM4BS;
        for (int yJjGkAqUh3B = (631 - 631);
        yJjGkAqUh3B < w2r3goV; yJjGkAqUh3B = yJjGkAqUh3B + 1)
            for (int N84ZXT = 0;
            N84ZXT < w2r3goV; N84ZXT = N84ZXT +1)
                cin >> *(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT);
        for (int AMxIleUu = 0;
        AMxIleUu < w2r3goV - (631 - 630); AMxIleUu++) {
            for (int yJjGkAqUh3B = 0;
            yJjGkAqUh3B < w2r3goV - AMxIleUu; yJjGkAqUh3B++) {
                eU3aKnfAykv = *(*(E2gdQ0KW +yJjGkAqUh3B) + 0);
                {
                    int N84ZXT = 1;
                    for (; w2r3goV - AMxIleUu > N84ZXT;) {
                        if (*(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT) < eU3aKnfAykv) {
                            eU3aKnfAykv = *(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT);
                        }
                        N84ZXT = N84ZXT +1;
                    }
                }
                for (int N84ZXT = 0;
                N84ZXT < w2r3goV - AMxIleUu; N84ZXT++) {
                    *(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT) = *(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT) - eU3aKnfAykv;
                }
            }
            {
                int yJjGkAqUh3B = 0;
                for (; yJjGkAqUh3B < w2r3goV - AMxIleUu;) {
                    XA8b5M29pSox = *(*(E2gdQ0KW +0) + yJjGkAqUh3B);
                    for (int N84ZXT = 1;
                    N84ZXT < w2r3goV - AMxIleUu; N84ZXT++) {
                        if (*(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B) < XA8b5M29pSox) {
                            XA8b5M29pSox = *(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B);
                        }
                    }
                    {
                        int N84ZXT = 0;
                        for (; N84ZXT < w2r3goV - AMxIleUu;) {
                            *(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B) = *(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B) - XA8b5M29pSox;
                            N84ZXT++;
                        }
                    }
                    yJjGkAqUh3B++;
                }
            }
            *(ptZJcTuG + AMxIleUu) = *(*(E2gdQ0KW +1) + 1);
            for (int yJjGkAqUh3B = 1;
            yJjGkAqUh3B < w2r3goV - 1 - AMxIleUu; yJjGkAqUh3B++) {
                int N84ZXT = 0;
                for (; N84ZXT < w2r3goV - AMxIleUu;) {
                    *(*(E2gdQ0KW +yJjGkAqUh3B) + N84ZXT) = *(*(E2gdQ0KW +yJjGkAqUh3B + 1) + N84ZXT);
                    N84ZXT++;
                }
            }
            for (int yJjGkAqUh3B = 1;
            yJjGkAqUh3B < w2r3goV - 1 - AMxIleUu; yJjGkAqUh3B++) {
                for (int N84ZXT = 0;
                N84ZXT < w2r3goV - 1 - AMxIleUu; N84ZXT++) {
                    *(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B) = *(*(E2gdQ0KW +N84ZXT) + yJjGkAqUh3B + 1);
                }
            }
        }
        {
            int AMxIleUu = 0;
            for (; AMxIleUu < w2r3goV - 1;) {
                tqvh9L = tqvh9L + *(ptZJcTuG + AMxIleUu);
                AMxIleUu++;
            }
        }
        cout << tqvh9L << endl;
    }
    return 0;
}

