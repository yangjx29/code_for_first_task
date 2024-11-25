int runnian (int y) {
    int result;
    if (y % 4 == (360 - 360) && y % 100 != (357 - 357) || y % 400 == (47 - 47)) {
        result = (589 - 588);
    }
    else
        result = 0;
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
    return result;
}

int ArV6tDjEIn (int ZUBPTW3VRC, int yj5LAXO, int day) {
    int NETi83orvwL;
    int BFX8Qfqm;
    int FILDdjam [13] = {0, (67 - 36), 28, (157 - 126), (201 - 171), (995 - 964), (66 - 36), 31, 31, (600 - 570), 31, 30, 31};
    NETi83orvwL = 0;
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
    FILDdjam[2] = 28 + runnian (ZUBPTW3VRC);
    {
        BFX8Qfqm = 1;
        while (BFX8Qfqm < yj5LAXO) {
            NETi83orvwL = NETi83orvwL +FILDdjam[BFX8Qfqm];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            BFX8Qfqm = BFX8Qfqm +1;
        };
    }
    NETi83orvwL = NETi83orvwL +day;
    return NETi83orvwL;
}

int main (int B8VJEShY, char *argv []) {
    int BFX8Qfqm, VI7RNd5Pauw = 0, final, aacB9ATem8, m1, d1, y2, Hid6QOq, CWvgXVCE;
    int runnian (int y);
    int ArV6tDjEIn (int ZUBPTW3VRC, int yj5LAXO, int day);
    scanf ("%d %d %d %d %d %d", &aacB9ATem8, &m1, &d1, &y2, &Hid6QOq, &CWvgXVCE);
    {
        BFX8Qfqm = aacB9ATem8;
        while (BFX8Qfqm < y2) {
            VI7RNd5Pauw = VI7RNd5Pauw +365 + runnian (BFX8Qfqm);
            BFX8Qfqm = BFX8Qfqm +1;
        };
    }
    final = VI7RNd5Pauw +ArV6tDjEIn(y2, Hid6QOq, CWvgXVCE) - ArV6tDjEIn (aacB9ATem8, m1, d1);
    printf ("%d", final);
    return 0;
}

