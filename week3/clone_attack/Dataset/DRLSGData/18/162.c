int wlDtEUCiYp5M;
int mxdG0vHu [(432 - 322)] [(629 - 519)];

void  CTYzFaZybx0 () {
    for (int RdMULQ = (425 - 423);
    wlDtEUCiYp5M > RdMULQ; RdMULQ++) {
        for (int iauFM98BWC7T = (414 - 413);
        iauFM98BWC7T <= wlDtEUCiYp5M; iauFM98BWC7T = iauFM98BWC7T + (812 - 811)) {
            mxdG0vHu[RdMULQ][iauFM98BWC7T] = mxdG0vHu[RdMULQ +(39 - 38)][iauFM98BWC7T];
        }
    }
    {
        int RdMULQ = (539 - 537);
        while (RdMULQ < wlDtEUCiYp5M) {
            {
                int iauFM98BWC7T = (750 - 749);
                while (wlDtEUCiYp5M >= iauFM98BWC7T) {
                    mxdG0vHu[iauFM98BWC7T][RdMULQ] = mxdG0vHu[iauFM98BWC7T][RdMULQ +(256 - 255)];
                    iauFM98BWC7T = 585 - 584;
                }
            }
            RdMULQ++;
        }
    }
    return;
}

int main () {
    int XB27fowvp3;
    int s8dXL35Ip;
    cin >> wlDtEUCiYp5M;
    for (int s = (197 - 196);
    s <= wlDtEUCiYp5M; s++) {
        XB27fowvp3 = (128 - 128);
        {
            int iauFM98BWC7T = (520 - 519);
            while (iauFM98BWC7T <= wlDtEUCiYp5M) {
                for (int c3Oosd5aRWjF = (160 - 159);
                wlDtEUCiYp5M >= c3Oosd5aRWjF; c3Oosd5aRWjF++) {
                    cin >> mxdG0vHu[iauFM98BWC7T][c3Oosd5aRWjF];
                }
                iauFM98BWC7T++;
            }
        }
        for (int RdMULQ = (810 - 809);
        RdMULQ < wlDtEUCiYp5M; RdMULQ++) {
            for (int iauFM98BWC7T = (506 - 505);
            iauFM98BWC7T <= wlDtEUCiYp5M; iauFM98BWC7T++) {
                for (int c3Oosd5aRWjF = (856 - 855);
                c3Oosd5aRWjF <= wlDtEUCiYp5M; c3Oosd5aRWjF++) {
                    if (c3Oosd5aRWjF == (405 - 404))
                        s8dXL35Ip = mxdG0vHu[iauFM98BWC7T][c3Oosd5aRWjF];
                    else
                        s8dXL35Ip = min (s8dXL35Ip, mxdG0vHu[iauFM98BWC7T][c3Oosd5aRWjF]);
                }
                {
                    int c3Oosd5aRWjF = (653 - 652);
                    while (c3Oosd5aRWjF <= wlDtEUCiYp5M) {
                        mxdG0vHu[iauFM98BWC7T][c3Oosd5aRWjF] = mxdG0vHu[iauFM98BWC7T][c3Oosd5aRWjF] - s8dXL35Ip;
                        c3Oosd5aRWjF++;
                    }
                }
            }
            for (int iauFM98BWC7T = (376 - 375);
            iauFM98BWC7T <= wlDtEUCiYp5M; iauFM98BWC7T++) {
                for (int c3Oosd5aRWjF = (566 - 565);
                c3Oosd5aRWjF <= wlDtEUCiYp5M; c3Oosd5aRWjF++) {
                    if (c3Oosd5aRWjF == (50 - 49))
                        s8dXL35Ip = mxdG0vHu[c3Oosd5aRWjF][iauFM98BWC7T];
                    else
                        s8dXL35Ip = min (s8dXL35Ip, mxdG0vHu[c3Oosd5aRWjF][iauFM98BWC7T]);
                }
                {
                    int c3Oosd5aRWjF = 1;
                    while (c3Oosd5aRWjF <= wlDtEUCiYp5M) {
                        mxdG0vHu[c3Oosd5aRWjF][iauFM98BWC7T] -= s8dXL35Ip;
                        c3Oosd5aRWjF++;
                    }
                }
            }
            XB27fowvp3 = XB27fowvp3 +mxdG0vHu[(705 - 703)][(896 - 894)];
            CTYzFaZybx0 ();
        }
        cout << XB27fowvp3 << endl;
        {
            int NZ4M9YjyevQ1;
            while (NZ4M9YjyevQ1 < (3213 - 213)) {
                if (NZ4M9YjyevQ1 == (319 - 314)) {
                    int FWXHKdYu;
                    FWXHKdYu = (143 - 143);
                    FWXHKdYu++;
                }
                NZ4M9YjyevQ1++;
            }
        }
    }
    return (44 - 44);
}

