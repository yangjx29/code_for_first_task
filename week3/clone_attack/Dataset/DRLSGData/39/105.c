struct   student {
    char LZMgy1AEx [20];
    int Qka9FLE3cHY;
    int Sb4v1eVAk5cR;
    char c3zvNur5p2CE;
    char uK5cHgj;
    int BspQyNVB;
};
void  main () {
    int TuMTDHjfOLxt;
    int KDmhEP1Q6tW;
    int ln70Sw;
    int BxL4juad;
    int K05Us6 [100];
    int Kx8MuZwAQ;
    struct   student m6hbP2MD [100];
    scanf ("%d", &Kx8MuZwAQ);
    {
        TuMTDHjfOLxt = 0;
        while (Kx8MuZwAQ > TuMTDHjfOLxt) {
            scanf ("%s%d%d %c %c%d", m6hbP2MD[TuMTDHjfOLxt].LZMgy1AEx, &m6hbP2MD[TuMTDHjfOLxt].Qka9FLE3cHY, &m6hbP2MD[TuMTDHjfOLxt].Sb4v1eVAk5cR, &m6hbP2MD[TuMTDHjfOLxt].c3zvNur5p2CE, &m6hbP2MD[TuMTDHjfOLxt].uK5cHgj, &m6hbP2MD[TuMTDHjfOLxt].BspQyNVB);
            TuMTDHjfOLxt = TuMTDHjfOLxt +1;
        }
    }
    {
        KDmhEP1Q6tW = 0;
        TuMTDHjfOLxt = 0;
        while (TuMTDHjfOLxt < Kx8MuZwAQ) {
            ln70Sw = 0;
            if (m6hbP2MD[TuMTDHjfOLxt].Qka9FLE3cHY > 80 && m6hbP2MD[TuMTDHjfOLxt].BspQyNVB >= 1)
                ln70Sw = 8000;
            if (m6hbP2MD[TuMTDHjfOLxt].Qka9FLE3cHY > 85 && m6hbP2MD[TuMTDHjfOLxt].Sb4v1eVAk5cR > 80)
                ln70Sw = ln70Sw + 4000;
            if (m6hbP2MD[TuMTDHjfOLxt].Qka9FLE3cHY > 90)
                ln70Sw = ln70Sw + 2000;
            if (m6hbP2MD[TuMTDHjfOLxt].Qka9FLE3cHY > 85 && m6hbP2MD[TuMTDHjfOLxt].uK5cHgj == 'Y')
                ln70Sw = ln70Sw + 1000;
            if (m6hbP2MD[TuMTDHjfOLxt].Sb4v1eVAk5cR > 80 && m6hbP2MD[TuMTDHjfOLxt].c3zvNur5p2CE == 'Y')
                ln70Sw = ln70Sw + 850;
            K05Us6[TuMTDHjfOLxt] = ln70Sw;
            KDmhEP1Q6tW = KDmhEP1Q6tW +ln70Sw;
            TuMTDHjfOLxt++;
        }
    }
    ln70Sw = K05Us6[0];
    BxL4juad = 0;
    {
        TuMTDHjfOLxt = 0;
        while (TuMTDHjfOLxt < Kx8MuZwAQ) {
            if (ln70Sw < K05Us6[TuMTDHjfOLxt]) {
                ln70Sw = K05Us6[TuMTDHjfOLxt];
                BxL4juad = TuMTDHjfOLxt;
            }
            TuMTDHjfOLxt++;
        }
    }
    printf ("%s\n%d\n%d\n", m6hbP2MD[BxL4juad].LZMgy1AEx, ln70Sw, KDmhEP1Q6tW);
}

