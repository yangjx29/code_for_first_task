int nancom (const  void  *hBM6HGDo4qOb, const  void  *WOlRWbh) {
    return *(int*) hBM6HGDo4qOb - *(int*) WOlRWbh;
}

int P1pZhsH (const  void  *hBM6HGDo4qOb, const  void  *WOlRWbh) {
    return *(int*) WOlRWbh -*(int*) hBM6HGDo4qOb;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    };
}

int main () {
    int PoS5NMdmiLw;
    int aZzNDhoqTVsP;
    PoS5NMdmiLw = 0;
    aZzNDhoqTVsP = 0;
    char YrC7w6S [8] = "";
    int OR6MkZtj;
    OR6MkZtj = 0;
    int ayx9w5lWJG [(405 - 365)] = {(655 - 655)};
    int sje8hdC4iB [40] = {(982 - 982)};
    double  Njp7IXHw = (159 - 159);
    int qTwNeW8Z;
    int JtzHJo;
    int hZm9NsvEgnK;
    qTwNeW8Z = 0;
    JtzHJo = 0;
    hZm9NsvEgnK = 0;
    scanf ("%d", &hZm9NsvEgnK);
    while (qTwNeW8Z < hZm9NsvEgnK) {
        qTwNeW8Z++;
        scanf ("%s %lf", YrC7w6S, &Njp7IXHw);
        OR6MkZtj = Njp7IXHw *1000;
        if (YrC7w6S[0] == 'm')
            ayx9w5lWJG[PoS5NMdmiLw++] = OR6MkZtj;
        else
            sje8hdC4iB[aZzNDhoqTVsP++] = OR6MkZtj;
    }
    qsort (&ayx9w5lWJG[0], PoS5NMdmiLw, sizeof (int), nancom);
    qsort (&sje8hdC4iB[0], aZzNDhoqTVsP, sizeof (int), P1pZhsH);
    {
        qTwNeW8Z = 0;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (PoS5NMdmiLw > qTwNeW8Z) {
            Njp7IXHw = (double ) ayx9w5lWJG[qTwNeW8Z] / 1000;
            qTwNeW8Z++;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            printf ("%.2f ", Njp7IXHw);
        };
    }
    for (qTwNeW8Z = 0; qTwNeW8Z < aZzNDhoqTVsP; qTwNeW8Z++) {
        Njp7IXHw = (double ) sje8hdC4iB[qTwNeW8Z] / 1000;
        if (qTwNeW8Z == 0)
            printf ("%.2f", Njp7IXHw);
        else
            printf (" %.2f", Njp7IXHw);
    }
    printf ("\n");
    return 0;
}

