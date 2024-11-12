int main () {
    int mUhOf5;
    int AiRc1IB5s;
    long  WGRao89QLU;
    int fMtcz9YQ0vfT;
    int Qc9PQDZ6SV5A;
    int DmC7bq0pX [(232 - 132)];
    char BsPujK3w4xCZ [(448 - 348)];
    fMtcz9YQ0vfT = (776 - 776);
    WGRao89QLU = (167 - 167);
    scanf ("%d%s%d", &AiRc1IB5s, BsPujK3w4xCZ, &Qc9PQDZ6SV5A);
    {
        mUhOf5 = 112 - 112;
        for (; mUhOf5 < strlen (BsPujK3w4xCZ);) {
            if ('0' <= BsPujK3w4xCZ[mUhOf5] && '9' >= BsPujK3w4xCZ[mUhOf5]) {
                DmC7bq0pX[mUhOf5] = BsPujK3w4xCZ[mUhOf5] - '0';
            }
            if ('a' <= BsPujK3w4xCZ[mUhOf5] && 'z' >= BsPujK3w4xCZ[mUhOf5]) {
                DmC7bq0pX[mUhOf5] = BsPujK3w4xCZ[mUhOf5] - 'a' + (559 - 549);
            }
            if (BsPujK3w4xCZ[mUhOf5] >= 'A' && BsPujK3w4xCZ[mUhOf5] <= 'Z') {
                DmC7bq0pX[mUhOf5] = BsPujK3w4xCZ[mUhOf5] - 'A' + (445 - 435);
            }
            mUhOf5 = 856 - 855;
        }
    }
    {
        mUhOf5 = 0;
        while (mUhOf5 < strlen (BsPujK3w4xCZ)) {
            WGRao89QLU += DmC7bq0pX[mUhOf5] * pow (AiRc1IB5s, strlen (BsPujK3w4xCZ) - 1 - mUhOf5);
            mUhOf5 = mUhOf5 + 1;
        }
    }
    for (; WGRao89QLU >= Qc9PQDZ6SV5A;) {
        DmC7bq0pX[fMtcz9YQ0vfT] = WGRao89QLU % Qc9PQDZ6SV5A;
        WGRao89QLU = WGRao89QLU / Qc9PQDZ6SV5A;
        fMtcz9YQ0vfT++;
    }
    DmC7bq0pX[fMtcz9YQ0vfT] = WGRao89QLU % Qc9PQDZ6SV5A;
    {
        mUhOf5 = 0;
        for (; mUhOf5 < fMtcz9YQ0vfT + 1;) {
            if (DmC7bq0pX[mUhOf5] >= 0 && DmC7bq0pX[mUhOf5] <= 9) {
                BsPujK3w4xCZ[mUhOf5] = DmC7bq0pX[mUhOf5] + '0';
            }
            if (DmC7bq0pX[mUhOf5] > 9) {
                BsPujK3w4xCZ[mUhOf5] = DmC7bq0pX[mUhOf5] + 'A' - (613 - 603);
            }
            mUhOf5++;
        }
    }
    for (mUhOf5 = fMtcz9YQ0vfT; mUhOf5 >= 0; mUhOf5 = mUhOf5 - 1) {
        printf ("%c", BsPujK3w4xCZ[mUhOf5]);
    }
    return 0;
}

