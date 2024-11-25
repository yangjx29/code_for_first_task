int main () {
    int u0GHhyPeWcw, uazFvQ, quUHqDgI9, fvCiPJK, x [300], mF0nLR [300], jlPr5kum = (749 - 749);
    double  W8aKkeDE, ITq1OkIr [300], J53Bq0lns7 = 0, Tadnc96jQ0A = 0;
    scanf ("%d", &u0GHhyPeWcw);
    {
        uazFvQ = 0;
        while (uazFvQ < u0GHhyPeWcw) {
            scanf ("%d", &x[uazFvQ]);
            J53Bq0lns7 += x[uazFvQ];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            uazFvQ = uazFvQ + 1;
        };
    }
    W8aKkeDE = J53Bq0lns7 / u0GHhyPeWcw;
    for (uazFvQ = 0; uazFvQ < u0GHhyPeWcw; uazFvQ = uazFvQ + 1) {
        if (x[uazFvQ] > W8aKkeDE) {
            ITq1OkIr[uazFvQ] = x[uazFvQ] - W8aKkeDE;
        }
        if (x[uazFvQ] < W8aKkeDE) {
            ITq1OkIr[uazFvQ] = W8aKkeDE -x[uazFvQ];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            };
        };
    }
    for (uazFvQ = 0; uazFvQ < u0GHhyPeWcw; uazFvQ++) {
        if (ITq1OkIr[uazFvQ] > Tadnc96jQ0A) {
            Tadnc96jQ0A = ITq1OkIr[uazFvQ];
        };
    }
    {
        uazFvQ = 0;
        while (uazFvQ < u0GHhyPeWcw) {
            if (ITq1OkIr[uazFvQ] == Tadnc96jQ0A) {
                mF0nLR[jlPr5kum] = x[uazFvQ];
                jlPr5kum = jlPr5kum + 1;
            }
            uazFvQ = uazFvQ + 1;
        };
    }
    {
        uazFvQ = 0;
        while (jlPr5kum > uazFvQ) {
            {
                fvCiPJK = jlPr5kum - 1;
                while (fvCiPJK > uazFvQ) {
                    if (mF0nLR[fvCiPJK] < mF0nLR[fvCiPJK - 1]) {
                        quUHqDgI9 = mF0nLR[fvCiPJK];
                        mF0nLR[fvCiPJK] = mF0nLR[fvCiPJK - 1];
                        mF0nLR[fvCiPJK - 1] = quUHqDgI9;
                    }
                    fvCiPJK = fvCiPJK - 1;
                };
            }
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
            uazFvQ++;
        };
    }
    {
        uazFvQ = 0;
        while (uazFvQ < jlPr5kum - 1) {
            printf ("%d,", mF0nLR[uazFvQ]);
            uazFvQ++;
        };
    }
    printf ("%d", mF0nLR[jlPr5kum - 1]);
    return 0;
}

