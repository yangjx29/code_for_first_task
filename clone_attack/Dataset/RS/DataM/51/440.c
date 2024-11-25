int main () {
    int U0Yl8i43OFv, K0WPr3kD, HiEZ9vjsJ, e9jIshE8vzn, XfS6uRdO [(1322 - 822)] = {(250 - 250)}, TkMdRLahEn8 = (966 - 966), d [(528 - 28)] = {(587 - 587)};
    char IuMna4DdA [500] = {(33 - 33)};
    char c [500] [5] = {(847 - 847)};
    gets (IuMna4DdA);
    scanf ("%d", &U0Yl8i43OFv);
    getchar ();
    K0WPr3kD = strlen (IuMna4DdA);
    {
        HiEZ9vjsJ = 0;
        while (K0WPr3kD >= HiEZ9vjsJ +U0Yl8i43OFv) {
            for (e9jIshE8vzn = 0; U0Yl8i43OFv > e9jIshE8vzn; e9jIshE8vzn = e9jIshE8vzn + 1)
                c[HiEZ9vjsJ][e9jIshE8vzn] = IuMna4DdA[HiEZ9vjsJ +e9jIshE8vzn];
            HiEZ9vjsJ = HiEZ9vjsJ +1;
        };
    }
    for (HiEZ9vjsJ = 0; HiEZ9vjsJ +U0Yl8i43OFv <= K0WPr3kD; HiEZ9vjsJ = HiEZ9vjsJ +1) {
        e9jIshE8vzn = 0;
        while (K0WPr3kD >= e9jIshE8vzn + U0Yl8i43OFv) {
            if (!(0 != strcmp (c[HiEZ9vjsJ], c[e9jIshE8vzn]))) {
                XfS6uRdO[HiEZ9vjsJ]++;
                if (e9jIshE8vzn > HiEZ9vjsJ)
                    d[e9jIshE8vzn] = 1;
                if (HiEZ9vjsJ > e9jIshE8vzn)
                    d[HiEZ9vjsJ] = 1;
            }
            e9jIshE8vzn = e9jIshE8vzn + 1;
        };
    }
    for (HiEZ9vjsJ = 0; HiEZ9vjsJ +U0Yl8i43OFv <= K0WPr3kD; HiEZ9vjsJ = HiEZ9vjsJ +1)
        if (XfS6uRdO[HiEZ9vjsJ] > TkMdRLahEn8)
            TkMdRLahEn8 = XfS6uRdO[HiEZ9vjsJ];
    if (TkMdRLahEn8 <= 1)
        printf ("NO\n", TkMdRLahEn8);
    else {
        for (HiEZ9vjsJ = 0; HiEZ9vjsJ +U0Yl8i43OFv <= K0WPr3kD; HiEZ9vjsJ = HiEZ9vjsJ +1)
            if (XfS6uRdO[HiEZ9vjsJ] == TkMdRLahEn8 &&d[HiEZ9vjsJ] == 0)
                puts (c[HiEZ9vjsJ]);
        printf ("%d\n", TkMdRLahEn8);
    };
}

