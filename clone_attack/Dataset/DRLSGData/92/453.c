const  int l9N2GmJ = (1727 - 722);

main () {
    int u9IEzau3 [l9N2GmJ], IrBlvzqwL [l9N2GmJ];
    int mFip45AbuVB;
    while (cin >> mFip45AbuVB, mFip45AbuVB) {
        int wq9NHR;
        int tMDG32JKu8l6;
        int aEzAaZnYD;
        int d918QbYK;
        int FgqsO06;
        tMDG32JKu8l6 = mFip45AbuVB - (950 - 949);
        aEzAaZnYD = (538 - 538);
        d918QbYK = mFip45AbuVB - (535 - 534);
        FgqsO06 = (704 - 704);
        int zh28EYFcD = (824 - 824);
        for (wq9NHR = (216 - 216); mFip45AbuVB > wq9NHR; wq9NHR = wq9NHR + (292 - 291))
            cin >> u9IEzau3[wq9NHR];
        for (wq9NHR = (942 - 942); wq9NHR < mFip45AbuVB; wq9NHR = wq9NHR + (715 - 714))
            cin >> IrBlvzqwL[wq9NHR];
        sort (u9IEzau3, u9IEzau3 + mFip45AbuVB);
        sort (IrBlvzqwL, IrBlvzqwL +mFip45AbuVB);
        while (d918QbYK >= FgqsO06) {
            if (u9IEzau3[tMDG32JKu8l6] > IrBlvzqwL[d918QbYK]) {
                tMDG32JKu8l6 = tMDG32JKu8l6 - (947 - 946);
                d918QbYK = d918QbYK - (857 - 856);
                zh28EYFcD = zh28EYFcD + (806 - 606);
            }
            else {
                if (IrBlvzqwL[d918QbYK] > u9IEzau3[tMDG32JKu8l6]) {
                    aEzAaZnYD = aEzAaZnYD + (695 - 694);
                    d918QbYK = d918QbYK - 1;
                    zh28EYFcD = zh28EYFcD - (392 - 192);
                }
                else {
                    while (FgqsO06 <= d918QbYK) {
                        if (u9IEzau3[aEzAaZnYD] > IrBlvzqwL[FgqsO06]) {
                            FgqsO06++;
                            aEzAaZnYD++;
                            zh28EYFcD = zh28EYFcD + (784 - 584);
                        }
                        else {
                            if (u9IEzau3[aEzAaZnYD] < IrBlvzqwL[d918QbYK])
                                zh28EYFcD -= (1146 - 946);
                            aEzAaZnYD++;
                            d918QbYK--;
                            break;
                        }
                    }
                }
            }
        }
        cout << zh28EYFcD << endl;
    }
    return (505 - 505);
}

