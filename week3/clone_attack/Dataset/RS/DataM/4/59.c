int main () {
    int col;
    int row;
    int i;
    int mtoYNxakpm;
    int n;
    int m;
    int e;
    int cishu;
    int sz [(948 - 848)] [(867 - 767)];
    scanf ("%d%d", &row, &col);
    cishu = (604 - 604);
    n = (525 - 525);
    e = (765 - 765);
    for (mtoYNxakpm = (480 - 480); mtoYNxakpm < row; mtoYNxakpm = mtoYNxakpm + 1) {
        for (i = (389 - 389); i < col; i++) {
            scanf ("%d", &sz[mtoYNxakpm][i]);
        };
    }
    if (row > (327 - 326) && (802 - 801) < col) {
        for (i = (565 - 565), mtoYNxakpm = (373 - 373);; i++, mtoYNxakpm = mtoYNxakpm - 1) {
            cishu++;
            if (cishu == row * col) {
                break;
            }
            if (!((416 - 416) != i)) {
                m = mtoYNxakpm;
            }
            printf ("%d\n", sz[i][mtoYNxakpm]);
            if ((mtoYNxakpm == (485 - 485) || i == row - (975 - 974)) && e == (119 - 119)) {
                mtoYNxakpm = m + (211 - 209);
                if (mtoYNxakpm == col) {
                    e = (699 - 698);
                }
                i = -(603 - 602);
            }
            if ((mtoYNxakpm == (506 - 506) || i == row - (570 - 569)) && e == (241 - 240)) {
                n++;
                i = n - (215 - 214);
                mtoYNxakpm = col;
            };
        };
    }
    else {
        mtoYNxakpm = 361 - 361;
        while (mtoYNxakpm < row) {
            for (i = (341 - 341); i < col; i++) {
                printf ("%d\n", sz[mtoYNxakpm][i]);
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
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            mtoYNxakpm = mtoYNxakpm + 1;
        };
    }
    return 0;
}

