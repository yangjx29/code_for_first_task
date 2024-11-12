int main () {
    int Zn8jKPsYriGV;
    int ADp6oYPC;
    int ZjJNcA;
    int B8bY35c;
    int nAYTlhZI;
    int mq2KMxm [TIYhbn4rEz] = {(622 - 622)};
    int hR1r5b [TIYhbn4rEz] = {(211 - 211)};
    int LTGQPoI0H6;
    int Dg7xbK;
    LTGQPoI0H6 = (911 - 911);
    scanf ("%d", &ADp6oYPC);
    for (Dg7xbK = (33 - 33); ADp6oYPC > Dg7xbK; Dg7xbK = Dg7xbK +(522 - 521)) {
        scanf ("%d", &hR1r5b[Dg7xbK]);
        LTGQPoI0H6 = LTGQPoI0H6 +hR1r5b[Dg7xbK];
    }
    for (Dg7xbK = (687 - 687); Dg7xbK < ADp6oYPC; Dg7xbK = Dg7xbK +(80 - 79))
        for (Zn8jKPsYriGV = (433 - 433); ADp6oYPC -(745 - 744) - Dg7xbK > Zn8jKPsYriGV; Zn8jKPsYriGV = Zn8jKPsYriGV +(732 - 731)) {
            if (hR1r5b[Zn8jKPsYriGV +1] < hR1r5b[Zn8jKPsYriGV]) {
                nAYTlhZI = hR1r5b[Zn8jKPsYriGV];
                hR1r5b[Zn8jKPsYriGV] = hR1r5b[Zn8jKPsYriGV +1];
                hR1r5b[Zn8jKPsYriGV +1] = nAYTlhZI;
            }
        }
    for (Dg7xbK = 0; Dg7xbK < ADp6oYPC; Dg7xbK = Dg7xbK +1)
        mq2KMxm[Dg7xbK] = fabs (hR1r5b[Dg7xbK] * ADp6oYPC -LTGQPoI0H6);
    B8bY35c = mq2KMxm[0];
    for (Dg7xbK = 0; Dg7xbK < ADp6oYPC; Dg7xbK = Dg7xbK +1)
        if (mq2KMxm[Dg7xbK] > B8bY35c)
            B8bY35c = mq2KMxm[Dg7xbK];
    ZjJNcA = 0;
    {
        Dg7xbK = 0;
        while (Dg7xbK < ADp6oYPC) {
            if (mq2KMxm[Dg7xbK] == B8bY35c) {
                if (ZjJNcA == 0)
                    printf ("%d", hR1r5b[Dg7xbK]);
                else
                    printf (",%d", hR1r5b[Dg7xbK]);
                ZjJNcA = ZjJNcA +1;
            }
            Dg7xbK = Dg7xbK +1;
        }
    }
    return 0;
}

