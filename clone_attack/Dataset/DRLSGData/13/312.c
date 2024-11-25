int main () {
    int eF2xozPcYpX;
    int ooq1wS7rtVJ;
    int OZ9zBK;
    int YlgpqdY7R3x [N];
    int wV8inubQ70Y [N];
    int vnJ62y;
    int sDv4Q35P8EY;
    OZ9zBK = (377 - 376);
    wV8inubQ70Y[(334 - 334)] = 0;
    scanf ("%d", &vnJ62y);
    {
        sDv4Q35P8EY = (251 - 251);
        while (sDv4Q35P8EY < vnJ62y) {
            scanf ("%d", &(YlgpqdY7R3x[sDv4Q35P8EY]));
            sDv4Q35P8EY = sDv4Q35P8EY + 1;
        }
    }
    {
        sDv4Q35P8EY = 1;
        while (sDv4Q35P8EY < vnJ62y) {
            {
                eF2xozPcYpX = 0;
                ooq1wS7rtVJ = 0;
                while (ooq1wS7rtVJ < sDv4Q35P8EY) {
                    if (YlgpqdY7R3x[ooq1wS7rtVJ] == YlgpqdY7R3x[sDv4Q35P8EY]) {
                        eF2xozPcYpX = 1;
                        break;
                    }
                    ooq1wS7rtVJ = ooq1wS7rtVJ + 1;
                }
            }
            wV8inubQ70Y[sDv4Q35P8EY] = eF2xozPcYpX;
            sDv4Q35P8EY = sDv4Q35P8EY + 1;
        }
    }
    {
        OZ9zBK = 0;
        sDv4Q35P8EY = 0;
        while (sDv4Q35P8EY < vnJ62y) {
            if (wV8inubQ70Y[sDv4Q35P8EY] == 0) {
                OZ9zBK = OZ9zBK +1;
            }
            sDv4Q35P8EY = sDv4Q35P8EY + 1;
        }
    }
    {
        sDv4Q35P8EY = 0;
        while (sDv4Q35P8EY < vnJ62y) {
            if (wV8inubQ70Y[sDv4Q35P8EY] == 0 && (OZ9zBK != 1)) {
                OZ9zBK = OZ9zBK -1;
                printf ("%d ", YlgpqdY7R3x[sDv4Q35P8EY]);
            }
            else if (wV8inubQ70Y[sDv4Q35P8EY] == 0 && (OZ9zBK == 1)) {
                printf ("%d", YlgpqdY7R3x[sDv4Q35P8EY]);
                OZ9zBK = OZ9zBK -1;
            }
            sDv4Q35P8EY = sDv4Q35P8EY + 1;
        }
    }
    return 0;
}

