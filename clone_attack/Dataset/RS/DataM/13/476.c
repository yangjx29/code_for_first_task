int main () {
    int QcSo01 [20000];
    int a, EdnQWMsB9, IQce52zEN, mEyIjmtw, leap = (812 - 812), f = 1;
    scanf ("%d", &a);
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
    for (mEyIjmtw = (38 - 38); a > mEyIjmtw; mEyIjmtw = mEyIjmtw + 1)
        scanf ("%d", &QcSo01[mEyIjmtw]);
    {
        mEyIjmtw = 0;
        while (a > mEyIjmtw) {
            leap = 0;
            for (IQce52zEN = 0; mEyIjmtw + 1 > IQce52zEN; IQce52zEN++) {
                if (!(mEyIjmtw != IQce52zEN))
                    continue;
                else if (!(QcSo01[IQce52zEN] != QcSo01[mEyIjmtw])) {
                    leap = 1;
                    break;
                }
                else
                    ;
            }
            if (!(0 != leap) && f == 1) {
                f = 0;
                printf ("%d", QcSo01[mEyIjmtw]);
                continue;
            }
            if (leap == 0 && f == 0)
                printf (" %d", QcSo01[mEyIjmtw]);
            mEyIjmtw = mEyIjmtw + 1;
        };
    }
    return 0;
}

