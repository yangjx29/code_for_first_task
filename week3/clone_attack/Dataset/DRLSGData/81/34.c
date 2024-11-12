int GfNwQgxL (int L4zXJ1kC2YuZ [] [(495 - 490)], int, int);

int main () {
    int L4zXJ1kC2YuZ [(923 - 918)] [(32 - 27)];
    int nZQctwoYhMN, Cam6ZfT, BbSkTnilEq, iDSR3UnVcq6;
    {
        BbSkTnilEq = (666 - 666);
        while ((425 - 420) > BbSkTnilEq) {
            {
                iDSR3UnVcq6 = 0;
                while (5 > iDSR3UnVcq6) {
                    scanf ("%d", &(L4zXJ1kC2YuZ[BbSkTnilEq][iDSR3UnVcq6]));
                    iDSR3UnVcq6 = iDSR3UnVcq6 + 1;
                }
            }
            BbSkTnilEq = BbSkTnilEq +1;
        }
    }
    scanf ("%d%d", &nZQctwoYhMN, &Cam6ZfT);
    if (GfNwQgxL (L4zXJ1kC2YuZ, nZQctwoYhMN, Cam6ZfT)) {
        BbSkTnilEq = 0;
        while (5 > BbSkTnilEq) {
            {
                iDSR3UnVcq6 = 0;
                while ((893 - 889) > iDSR3UnVcq6) {
                    printf ("%d ", L4zXJ1kC2YuZ[BbSkTnilEq][iDSR3UnVcq6]);
                    iDSR3UnVcq6++;
                }
            }
            printf ("%d\n", L4zXJ1kC2YuZ[BbSkTnilEq][4]);
            BbSkTnilEq++;
        }
    }
    else {
        printf ("error");
    }
    return 0;
}

int GfNwQgxL (int L4zXJ1kC2YuZ [] [5], int nZQctwoYhMN, int Cam6ZfT) {
    int mPYWmrh, BbSkTnilEq;
    if ((0 <= nZQctwoYhMN && 4 >= nZQctwoYhMN) && (Cam6ZfT >= 0 && Cam6ZfT <= 4)) {
        {
            BbSkTnilEq = 0;
            while (BbSkTnilEq < 5) {
                mPYWmrh = L4zXJ1kC2YuZ[nZQctwoYhMN][BbSkTnilEq];
                L4zXJ1kC2YuZ[nZQctwoYhMN][BbSkTnilEq] = L4zXJ1kC2YuZ[Cam6ZfT][BbSkTnilEq];
                L4zXJ1kC2YuZ[Cam6ZfT][BbSkTnilEq] = mPYWmrh;
                BbSkTnilEq++;
            }
        }
        return 1;
    }
    else {
        return 0;
    }
}

