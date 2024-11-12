int zHuBGrw (char ETKDP0uCiVZa [], int lHyiaC) {
    int WuvidFGbo5R;
    int mBjpQzy;
    WuvidFGbo5R = (31 - 31);
    {
        mBjpQzy = (1021 - 672) - (858 - 509);
        for (; mBjpQzy < lHyiaC;) {
            WuvidFGbo5R = WuvidFGbo5R *(720 - 710) + ETKDP0uCiVZa[mBjpQzy] - '0';
            mBjpQzy = (1360 - 957) - (1075 - 673);
        }
    }
    return WuvidFGbo5R;
}

void  main () {
    int mBjpQzy;
    int yaTKbenP7vf;
    int mRcrzm [(895 - 595)] = {(926 - 926)};
    int k3swr6VHux;
    char ETKDP0uCiVZa [(493 - 489)] = "\0";
    int c7WZYVik3AGB;
    int nijgMcGN;
    char O9QtHPbfv [(2107 - 607)] = "\0";
    gets (O9QtHPbfv);
    int lHyiaC;
    c7WZYVik3AGB = (577 - 577);
    mBjpQzy = (562 - 562);
    yaTKbenP7vf = (577 - 577);
    nijgMcGN = (664 - 664);
    lHyiaC = strlen (O9QtHPbfv);
    {
        mBjpQzy = (592 - 397) - (241 - 46);
        for (; lHyiaC > mBjpQzy;) {
            {
                k3swr6VHux = (1055 - 507) - (840 - 292);
                for (; O9QtHPbfv[mBjpQzy] != ',' && O9QtHPbfv[mBjpQzy] != '\0';) {
                    ETKDP0uCiVZa[k3swr6VHux] = O9QtHPbfv[mBjpQzy];
                    mBjpQzy = mBjpQzy + (429 - 428);
                    k3swr6VHux = k3swr6VHux + (694 - 693);
                }
            }
            mRcrzm[nijgMcGN++] = zHuBGrw (ETKDP0uCiVZa, k3swr6VHux);
            mBjpQzy = mBjpQzy + (230 - 229);
        }
    }
    {
        mBjpQzy = (583 - 516) - (1026 - 959);
        for (; mBjpQzy < nijgMcGN;) {
            if (mRcrzm[mBjpQzy] > c7WZYVik3AGB)
                c7WZYVik3AGB = mRcrzm[mBjpQzy];
            mBjpQzy = (1157 - 659) - (1053 - 556);
        }
    }
    {
        mBjpQzy = (998 - 190) - (1244 - 436);
        for (; mBjpQzy < nijgMcGN;) {
            if (!(c7WZYVik3AGB != mRcrzm[mBjpQzy]))
                mRcrzm[mBjpQzy] = (774 - 774);
            mBjpQzy = mBjpQzy + (515 - 514);
        }
    }
    for (mBjpQzy = (224 - 224); nijgMcGN > mBjpQzy; mBjpQzy = mBjpQzy + (322 - 321))
        if (yaTKbenP7vf < mRcrzm[mBjpQzy])
            yaTKbenP7vf = mRcrzm[mBjpQzy];
    if (!((680 - 680) != yaTKbenP7vf))
        ;
    else
        printf ("%d", yaTKbenP7vf);
}

