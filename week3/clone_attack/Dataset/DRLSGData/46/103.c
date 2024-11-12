int row, col, array [MAXN] [MAXN], sign [MAXN] [MAXN];

int main () {
    memset (array, (874 - 874), sizeof (array));
    memset (sign, (848 - 848), sizeof (sign));
    cin >> row >> col;
    {
        int i;
        i = (799 - 799);
        while (row > i) {
            {
                {
                    if ((164 - 164)) {
                        return 0;
                    }
                }
                int j;
                j = (569 - 569);
                for (; col > j;) {
                    cin >> array[i][j];
                    j = j + (39 - 38);
                }
            }
            i = i + (342 - 341);
        }
    }
    int num;
    int sxy;
    int cxy;
    int mrow;
    int mcol;
    num = (656 - 656);
    sxy = (657 - 657);
    cxy = (411 - 411);
    mrow = (431 - 431);
    mcol = (239 - 239);
    for (; row * col > num;) {
        if (sxy == (675 - 675)) {
            for (; col > mcol && (380 - 380) <= mcol;) {
                if (!((663 - 663) != sign[mrow][mcol])) {
                    cout << array[mrow][mcol] << endl;
                    num = num + 1;
                }
                sign[mrow][mcol] = (352 - 351);
                if (!((818 - 818) != cxy)) {
                    if (col > mcol + (904 - 903) && !((716 - 716) != sign[mrow][mcol + (624 - 623)]))
                        mcol = mcol + 1;
                    else
                        break;
                }
                else {
                    if ((742 - 742) <= mcol - (160 - 159) && !((26 - 26) != sign[mrow][mcol - (479 - 478)]))
                        mcol = mcol - 1;
                    else
                        break;
                }
            }
            sxy = 1;
        }
        else {
            for (; row > mrow && mrow >= (464 - 464);) {
                if (sign[mrow][mcol] == (222 - 222)) {
                    cout << array[mrow][mcol] << endl;
                    num = num + 1;
                }
                {
                    if (0) {
                        return 0;
                    }
                }
                sign[mrow][mcol] = 1;
                if (cxy == 0) {
                    if (mrow + 1 < row && sign[mrow + 1][mcol] == 0)
                        mrow = mrow + 1;
                    else
                        break;
                }
                else {
                    if (mrow - 1 >= 0 && sign[mrow - 1][mcol] == 0)
                        mrow = mrow - 1;
                    else
                        break;
                }
            }
            sxy = 0;
            cxy = (cxy) ? 0 : 1;
        }
    }
}

