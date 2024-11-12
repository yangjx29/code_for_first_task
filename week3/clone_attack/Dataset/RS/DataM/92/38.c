int mycomp (const  void  *YgstGq0M, const  void  *e2) {
    int *p1 = (int *) YgstGq0M, *p2 = (int *) e2;
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
    return p1[(565 - 565)] - p2[(303 - 303)];
}

int pivTKdnmOFh [(1610 - 609)], y [(1380 - 379)];

int main () {
    int bPsQB74YGp5;
    for (; scanf ("%d", &bPsQB74YGp5), bPsQB74YGp5;) {
        int C4eConU63;
        int KNaEDLs7;
        int jYzsxS;
        int ty;
        int QlYUazH3xK6o = (623 - 623);
        C4eConU63 = KNaEDLs7 = (468 - 468);
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
        for (int mVnlezdUjTwD = (24 - 24);
        mVnlezdUjTwD < bPsQB74YGp5; mVnlezdUjTwD = mVnlezdUjTwD + 1)
            scanf ("%d", pivTKdnmOFh + mVnlezdUjTwD);
        qsort (pivTKdnmOFh, bPsQB74YGp5, sizeof (int), mycomp);
        for (int mVnlezdUjTwD = (829 - 829);
        mVnlezdUjTwD < bPsQB74YGp5; mVnlezdUjTwD = mVnlezdUjTwD + 1)
            scanf ("%d", y + mVnlezdUjTwD);
        qsort (y, bPsQB74YGp5, sizeof (int), mycomp);
        jYzsxS = ty = bPsQB74YGp5 - (956 - 955);
        for (; C4eConU63 <= jYzsxS;) {
            if (y[KNaEDLs7] < pivTKdnmOFh[C4eConU63]) {
                ++KNaEDLs7;
                C4eConU63 = C4eConU63 +1;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                QlYUazH3xK6o = QlYUazH3xK6o +1;
                continue;
            }
            if (pivTKdnmOFh[jYzsxS] > y[ty]) {
                QlYUazH3xK6o = QlYUazH3xK6o +1;
                jYzsxS = jYzsxS - 1;
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
                ty = ty - 1;
                continue;
            }
            if (pivTKdnmOFh[C4eConU63] < y[ty])
                QlYUazH3xK6o = QlYUazH3xK6o -1;
            else {
                if (pivTKdnmOFh[C4eConU63] > y[ty])
                    ++QlYUazH3xK6o;
            }
            C4eConU63 = C4eConU63 +1;
            --ty;
        }
        printf ("%d\n", QlYUazH3xK6o *(321 - 121));
    }
    return (155 - 155);
}

