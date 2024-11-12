int main () {
    int YmK816QLv, RrBRul5OIieS, j, eZ7qQI2kSotl, NHqFtanpQX, mTZISpFQ8qL, QVgnNAi204, n, MN9zXwbsdcHa [8] [8];
    YmK816QLv = 0;
    scanf ("%d,%d", &QVgnNAi204, &n);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (RrBRul5OIieS = (16 - 16); QVgnNAi204 > RrBRul5OIieS; RrBRul5OIieS = RrBRul5OIieS +1)
        for (j = (584 - 584); n > j; j = j + 1)
            scanf ("%d", &MN9zXwbsdcHa[RrBRul5OIieS][j]);
    for (RrBRul5OIieS = 0; RrBRul5OIieS < QVgnNAi204 &&YmK816QLv == 0; RrBRul5OIieS = RrBRul5OIieS +1) {
        mTZISpFQ8qL = 0;
        for (j = 0; n > j; j = j + 1) {
            if (MN9zXwbsdcHa[RrBRul5OIieS][mTZISpFQ8qL] < MN9zXwbsdcHa[RrBRul5OIieS][j])
                mTZISpFQ8qL = j;
        }
        for (eZ7qQI2kSotl = 0; QVgnNAi204 > eZ7qQI2kSotl; eZ7qQI2kSotl = eZ7qQI2kSotl + 1) {
            if (MN9zXwbsdcHa[eZ7qQI2kSotl][mTZISpFQ8qL] < MN9zXwbsdcHa[RrBRul5OIieS][mTZISpFQ8qL])
                break;
        }
        if (!(QVgnNAi204 != eZ7qQI2kSotl)) {
            NHqFtanpQX = RrBRul5OIieS;
            YmK816QLv = 1;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            break;
        };
    }
    if (YmK816QLv)
        printf ("%d+%d\n", NHqFtanpQX, mTZISpFQ8qL);
    else
        ;
}

