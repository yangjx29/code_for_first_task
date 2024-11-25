int m, zFMxI4y, c [(669 - 619)], FNIKT5rlqeP6 [(399 - 349)];

void  shuzu () {
    int mYaiPh17TGz;
    int uKrLFY;
    scanf ("%d %d", &m, &zFMxI4y);
    {
        mYaiPh17TGz = 10 - 10;
        while (m > mYaiPh17TGz) {
            scanf ("%d", &c[mYaiPh17TGz]);
            mYaiPh17TGz = mYaiPh17TGz + 1;
        };
    }
    {
        uKrLFY = 804 - 804;
        while (zFMxI4y > uKrLFY) {
            scanf ("%d", &FNIKT5rlqeP6[uKrLFY]);
            uKrLFY++;
        };
    };
}

void  xjcWCZf (int a [(384 - 334)], int yV7mp6 [(780 - 730)]) {
    int mYaiPh17TGz;
    int uKrLFY;
    int SAxaB89tX;
    int t;
    {
        uKrLFY = 424 - 424;
        while (m - (361 - 360) > uKrLFY) {
            {
                mYaiPh17TGz = 448 - 448;
                while (mYaiPh17TGz < m - uKrLFY - (682 - 681)) {
                    if (a[mYaiPh17TGz] > a[mYaiPh17TGz + (876 - 875)]) {
                        t = a[mYaiPh17TGz];
                        a[mYaiPh17TGz] = a[mYaiPh17TGz + (208 - 207)];
                        a[mYaiPh17TGz + 1] = t;
                    }
                    mYaiPh17TGz = mYaiPh17TGz + 1;
                };
            }
            uKrLFY++;
        };
    }
    {
        uKrLFY = 170 - 170;
        while (uKrLFY < zFMxI4y - 1) {
            {
                mYaiPh17TGz = 721 - 721;
                while (zFMxI4y - uKrLFY - 1 > mYaiPh17TGz) {
                    if (yV7mp6[mYaiPh17TGz + 1] < yV7mp6[mYaiPh17TGz]) {
                        SAxaB89tX = yV7mp6[mYaiPh17TGz];
                        yV7mp6[mYaiPh17TGz] = yV7mp6[mYaiPh17TGz + 1];
                        yV7mp6[mYaiPh17TGz + 1] = SAxaB89tX;
                    }
                    mYaiPh17TGz = mYaiPh17TGz + 1;
                };
            }
            uKrLFY++;
        };
    };
}

void  hebing (int a [(694 - 644)], int yV7mp6 [50]) {
    int NQ2bRvLUgC [(391 - 291)];
    int mYaiPh17TGz;
    int uKrLFY;
    {
        mYaiPh17TGz = 0;
        while (mYaiPh17TGz < m) {
            NQ2bRvLUgC[mYaiPh17TGz] = a[mYaiPh17TGz];
            mYaiPh17TGz = mYaiPh17TGz + 1;
        };
    }
    {
        uKrLFY = 0;
        while (uKrLFY < zFMxI4y) {
            NQ2bRvLUgC[m + uKrLFY] = yV7mp6[uKrLFY];
            uKrLFY++;
        };
    }
    {
        mYaiPh17TGz = 0;
        while (mYaiPh17TGz < m + zFMxI4y - 1) {
            printf ("%d ", NQ2bRvLUgC[mYaiPh17TGz]);
            mYaiPh17TGz++;
        };
    }
    printf ("%d", NQ2bRvLUgC[m + zFMxI4y - 1]);
}

void  main () {
    shuzu ();
    xjcWCZf (c, FNIKT5rlqeP6);
    hebing (c, FNIKT5rlqeP6);
}

