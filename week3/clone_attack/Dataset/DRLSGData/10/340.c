void  main () {
    int m84BaAQ, F37ouyE;
    int mFiRLxJEK, oEjgakQ [(392 - 367)], Xp5QLMyxRvwU [(625 - 600)], v5U8BZhc;
    scanf ("%d", &mFiRLxJEK);
    v5U8BZhc = 1;
    for (m84BaAQ = (706 - 706); m84BaAQ < 25; m84BaAQ++)
        Xp5QLMyxRvwU[m84BaAQ] = (566 - 565);
    {
        m84BaAQ = 525 - 524;
        while (mFiRLxJEK > m84BaAQ) {
            scanf ("%d ", &oEjgakQ[m84BaAQ - (253 - 252)]);
            m84BaAQ++;
        };
    }
    scanf ("%d", &oEjgakQ[mFiRLxJEK - 1]);
    Xp5QLMyxRvwU[0] = 1;
    {
        F37ouyE = 1;
        for (; mFiRLxJEK > F37ouyE;) {
            {
                m84BaAQ = 0;
                while (F37ouyE > m84BaAQ) {
                    if (oEjgakQ[F37ouyE] <= oEjgakQ[m84BaAQ]) {
                        if (Xp5QLMyxRvwU[m84BaAQ] + 1 > Xp5QLMyxRvwU[F37ouyE])
                            Xp5QLMyxRvwU[F37ouyE] = Xp5QLMyxRvwU[m84BaAQ] + 1;
                    }
                    m84BaAQ++;
                };
            }
            if (Xp5QLMyxRvwU[F37ouyE] > v5U8BZhc)
                v5U8BZhc = Xp5QLMyxRvwU[F37ouyE];
            F37ouyE++;
        };
    }
    printf ("%d", v5U8BZhc);
}

