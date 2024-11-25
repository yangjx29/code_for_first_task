void  main () {
    char gVJmlwTbGWj [300] = {0};
    int wCz8oR [(494 - 194)], Mak6SfKWJH, n, mJSeyqpF = 0, MoHBYSQMmyh7 = 0, Yi7vEQz9Xk6s;
    {
        Mak6SfKWJH = 0;
        while (1) {
            scanf ("%d", &wCz8oR[Mak6SfKWJH]);
            gVJmlwTbGWj[Mak6SfKWJH] = getchar ();
            n = Mak6SfKWJH;
            if (!('\n' != gVJmlwTbGWj[Mak6SfKWJH]))
                break;
            Mak6SfKWJH = Mak6SfKWJH +1;
        };
    }
    for (Mak6SfKWJH = 0; n + 1 > Mak6SfKWJH; Mak6SfKWJH = Mak6SfKWJH +1) {
        if (mJSeyqpF <= wCz8oR[Mak6SfKWJH])
            mJSeyqpF = wCz8oR[Mak6SfKWJH];
    }
    {
        Mak6SfKWJH = 0;
        while (Mak6SfKWJH < n + 1) {
            if (wCz8oR[Mak6SfKWJH] == mJSeyqpF)
                wCz8oR[Mak6SfKWJH] = 0;
            Mak6SfKWJH = Mak6SfKWJH +1;
        };
    }
    {
        Mak6SfKWJH = 0;
        while (Mak6SfKWJH < n + 1) {
            if (wCz8oR[Mak6SfKWJH] > MoHBYSQMmyh7)
                MoHBYSQMmyh7 = wCz8oR[Mak6SfKWJH];
            Yi7vEQz9Xk6s = Mak6SfKWJH;
            Mak6SfKWJH = Mak6SfKWJH +1;
        };
    }
    if (MoHBYSQMmyh7 != 0)
        printf ("%d\n", MoHBYSQMmyh7);
    if (MoHBYSQMmyh7 == 0)
        printf ("No\n");
}

