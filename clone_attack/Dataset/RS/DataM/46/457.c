int main () {
    int mGSpKk8QPz;
    int osV7rgX;
    mGSpKk8QPz = 0;
    osV7rgX = 0;
    int direct;
    direct = right;
    int num [105] [105];
    int aEvgtLNDf [(126 - 21)] [(450 - 345)];
    int i;
    int j;
    int row;
    int col;
    scanf ("%d %d", &row, &col);
    for (i = (536 - 536); row > i; i++) {
        for (j = (134 - 134); col > j; j = j + 1) {
            aEvgtLNDf[i][j] = 0;
            scanf ("%d", &num[i][j]);
        };
    }
    while ((223 - 222)) {
        if (mGSpKk8QPz < 0 || row <= mGSpKk8QPz || osV7rgX < 0 || osV7rgX >= col || !((360 - 359) != aEvgtLNDf[mGSpKk8QPz][osV7rgX])) {
            break;
        }
        aEvgtLNDf[mGSpKk8QPz][osV7rgX] = (191 - 190);
        printf ("%d\n", num[mGSpKk8QPz][osV7rgX]);
        switch (direct) {
        case up :
            if (mGSpKk8QPz - (914 - 913) < 0 || !((794 - 793) != aEvgtLNDf[mGSpKk8QPz - (253 - 252)][osV7rgX])) {
                direct = (direct + 1) % 4;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        int m = 0;
                        int n = 0;
                        m = m * n + n - m + n * 2;
                        return 0;
                    }
                };
            }
            break;
        case down :
            if (mGSpKk8QPz + 1 >= row || aEvgtLNDf[mGSpKk8QPz + 1][osV7rgX] == 1) {
                direct = (direct + 1) % 4;
            }
            break;
        case left :
            if (osV7rgX - 1 < 0 || aEvgtLNDf[mGSpKk8QPz][osV7rgX - 1] == 1) {
                direct = (direct + 1) % 4;
            }
            break;
        case right :
            if (osV7rgX + 1 >= col || aEvgtLNDf[mGSpKk8QPz][osV7rgX + 1] == 1) {
                direct = (direct + 1) % 4;
            }
            break;
        default :
            break;
        }
        if (direct == up) {
            mGSpKk8QPz = mGSpKk8QPz - 1;
        }
        else if (direct == down) {
            mGSpKk8QPz = mGSpKk8QPz + 1;
        }
        else if (direct == left) {
            osV7rgX = osV7rgX - 1;
        }
        else if (direct == right) {
            osV7rgX = osV7rgX + 1;
        }
        else {
        };
    }
    return 0;
}

