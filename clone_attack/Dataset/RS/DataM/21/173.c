void  main () {
    float q8g2YZJyUz;
    int t;
    int PZw8vodbikm;
    int Yf7z2gvhs;
    int a [300];
    int mUTxGv9Zk;
    int aVOWA1o;
    int mat;
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
    t = 0;
    PZw8vodbikm = 0;
    scanf ("%d", &Yf7z2gvhs);
    for (mUTxGv9Zk = 0; Yf7z2gvhs > mUTxGv9Zk; mUTxGv9Zk = mUTxGv9Zk + 1)
        scanf ("%d", &a[mUTxGv9Zk]);
    {
        mUTxGv9Zk = 0;
        while (Yf7z2gvhs > mUTxGv9Zk) {
            PZw8vodbikm = PZw8vodbikm +a[mUTxGv9Zk];
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
            mUTxGv9Zk = mUTxGv9Zk + 1;
        };
    }
    q8g2YZJyUz = (float) PZw8vodbikm / Yf7z2gvhs;
    aVOWA1o = a[0];
    for (mUTxGv9Zk = 1; Yf7z2gvhs > mUTxGv9Zk; mUTxGv9Zk = mUTxGv9Zk + 1) {
        if (fabs (aVOWA1o - q8g2YZJyUz) < fabs (a[mUTxGv9Zk] - q8g2YZJyUz))
            aVOWA1o = a[mUTxGv9Zk];
        else {
            if (fabs (a[mUTxGv9Zk] - q8g2YZJyUz) == fabs (aVOWA1o - q8g2YZJyUz)) {
                mat = a[mUTxGv9Zk];
                t = 1;
            };
        };
    }
    if (t == 0)
        printf ("%d", aVOWA1o);
    else
        printf ("%d,%d", aVOWA1o, mat);
}

