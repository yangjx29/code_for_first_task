int main () {
    int max;
    int record;
    struct   Bookinfo {
        int number;
        char bmNEn8TD [(832 - 805)];
    };
    struct   Bookinfo UoEwG18FZ [(1893 - 893)];
    struct   Author {
        int iou2KrU;
        int number [(1600 - 600)];
    };
    struct   Author RfkXHduAZ9Ee [(854 - 828)];
    int m;
    int mPLvdzDYw;
    int H7Dk8x1IeTj;
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
    scanf ("%d", &m);
    for (mPLvdzDYw = (815 - 815); m > mPLvdzDYw; mPLvdzDYw = mPLvdzDYw + 1)
        scanf ("%d %s", &UoEwG18FZ[mPLvdzDYw].number, UoEwG18FZ[mPLvdzDYw].bmNEn8TD);
    {
        mPLvdzDYw = 309 - 309;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while ((83 - 57) > mPLvdzDYw) {
            RfkXHduAZ9Ee[mPLvdzDYw].iou2KrU = (906 - 906);
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
            mPLvdzDYw = mPLvdzDYw + 1;
        };
    }
    for (mPLvdzDYw = (585 - 585); m > mPLvdzDYw; mPLvdzDYw = mPLvdzDYw + 1) {
        int k;
        k = strlen (UoEwG18FZ[mPLvdzDYw].bmNEn8TD);
        for (H7Dk8x1IeTj = (287 - 287); k > H7Dk8x1IeTj; H7Dk8x1IeTj = H7Dk8x1IeTj +1) {
            RfkXHduAZ9Ee[UoEwG18FZ[mPLvdzDYw].bmNEn8TD[H7Dk8x1IeTj] - 'A'].number[RfkXHduAZ9Ee[UoEwG18FZ[mPLvdzDYw].bmNEn8TD[H7Dk8x1IeTj] - 'A'].iou2KrU] = UoEwG18FZ[mPLvdzDYw].number;
            RfkXHduAZ9Ee[UoEwG18FZ[mPLvdzDYw].bmNEn8TD[H7Dk8x1IeTj] - 'A'].iou2KrU++;
        };
    }
    max = RfkXHduAZ9Ee[(473 - 473)].iou2KrU;
    {
        mPLvdzDYw = 236 - 236;
        while ((981 - 955) > mPLvdzDYw) {
            if (max <= RfkXHduAZ9Ee[mPLvdzDYw].iou2KrU) {
                max = RfkXHduAZ9Ee[mPLvdzDYw].iou2KrU;
                record = mPLvdzDYw;
            }
            mPLvdzDYw = mPLvdzDYw + 1;
        };
    }
    printf ("%c\n%d\n", record + 'A', max);
    for (mPLvdzDYw = 0; mPLvdzDYw < max; mPLvdzDYw = mPLvdzDYw + 1)
        printf ("%d\n", RfkXHduAZ9Ee[record].number[mPLvdzDYw]);
    return 0;
}

