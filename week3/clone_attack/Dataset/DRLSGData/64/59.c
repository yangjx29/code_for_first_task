int main () {
    float exJ6LihBu [100];
    int HhXJnxWZ2RVc [10], y [10], jfZHwJ2g [10];
    int mSHwYmnQ4WKo, TpKEOkt, k, gdHew9lcPAJ, m, mjCvBxWt, xqd9L1, LyvoKp;
    float FQUoYPCIub7e;
    int mPm0EdXS6BG [100], KcMQLyORTUHC [100];
    xqd9L1 = -1;
    scanf ("%d", &mjCvBxWt);
    {
        mSHwYmnQ4WKo = 0;
        while (mSHwYmnQ4WKo < mjCvBxWt) {
            scanf ("%d%d%d", &HhXJnxWZ2RVc[mSHwYmnQ4WKo], &y[mSHwYmnQ4WKo], &jfZHwJ2g[mSHwYmnQ4WKo]);
            mSHwYmnQ4WKo = mSHwYmnQ4WKo + 1;
        }
    }
    {
        mSHwYmnQ4WKo = 0;
        while (mSHwYmnQ4WKo < mjCvBxWt - 1) {
            TpKEOkt = mSHwYmnQ4WKo + 1;
            while (TpKEOkt < mjCvBxWt) {
                xqd9L1 = xqd9L1 + 1;
                exJ6LihBu[xqd9L1] = sqrt ((HhXJnxWZ2RVc[mSHwYmnQ4WKo] - HhXJnxWZ2RVc[TpKEOkt]) * (HhXJnxWZ2RVc[mSHwYmnQ4WKo] - HhXJnxWZ2RVc[TpKEOkt]) + (y[mSHwYmnQ4WKo] - y[TpKEOkt]) * (y[mSHwYmnQ4WKo] - y[TpKEOkt]) + (jfZHwJ2g[mSHwYmnQ4WKo] - jfZHwJ2g[TpKEOkt]) * (jfZHwJ2g[mSHwYmnQ4WKo] - jfZHwJ2g[TpKEOkt]));
                mPm0EdXS6BG[xqd9L1] = mSHwYmnQ4WKo;
                KcMQLyORTUHC[xqd9L1] = TpKEOkt;
                TpKEOkt = TpKEOkt +1;
            }
            mSHwYmnQ4WKo = mSHwYmnQ4WKo + 1;
        }
    }
    xqd9L1 = xqd9L1 + 1;
    {
        mSHwYmnQ4WKo = 0;
        while (mSHwYmnQ4WKo < xqd9L1 - 1) {
            {
                TpKEOkt = mSHwYmnQ4WKo + 1;
                while (TpKEOkt < xqd9L1) {
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    if (exJ6LihBu[TpKEOkt] > exJ6LihBu[mSHwYmnQ4WKo]) {
                        FQUoYPCIub7e = exJ6LihBu[TpKEOkt];
                        exJ6LihBu[TpKEOkt] = exJ6LihBu[mSHwYmnQ4WKo];
                        exJ6LihBu[mSHwYmnQ4WKo] = FQUoYPCIub7e;
                        LyvoKp = mPm0EdXS6BG[mSHwYmnQ4WKo];
                        mPm0EdXS6BG[mSHwYmnQ4WKo] = mPm0EdXS6BG[TpKEOkt];
                        mPm0EdXS6BG[TpKEOkt] = LyvoKp;
                        LyvoKp = KcMQLyORTUHC[mSHwYmnQ4WKo];
                        KcMQLyORTUHC[mSHwYmnQ4WKo] = KcMQLyORTUHC[TpKEOkt];
                        KcMQLyORTUHC[TpKEOkt] = LyvoKp;
                    }
                    if (exJ6LihBu[TpKEOkt] == exJ6LihBu[mSHwYmnQ4WKo] && (mPm0EdXS6BG[TpKEOkt] < mPm0EdXS6BG[mSHwYmnQ4WKo] || mPm0EdXS6BG[TpKEOkt] == mPm0EdXS6BG[mSHwYmnQ4WKo] && KcMQLyORTUHC[TpKEOkt] < KcMQLyORTUHC[mSHwYmnQ4WKo])) {
                        FQUoYPCIub7e = exJ6LihBu[TpKEOkt];
                        exJ6LihBu[TpKEOkt] = exJ6LihBu[mSHwYmnQ4WKo];
                        exJ6LihBu[mSHwYmnQ4WKo] = FQUoYPCIub7e;
                        LyvoKp = mPm0EdXS6BG[mSHwYmnQ4WKo];
                        mPm0EdXS6BG[mSHwYmnQ4WKo] = mPm0EdXS6BG[TpKEOkt];
                        mPm0EdXS6BG[TpKEOkt] = LyvoKp;
                        LyvoKp = KcMQLyORTUHC[mSHwYmnQ4WKo];
                        KcMQLyORTUHC[mSHwYmnQ4WKo] = KcMQLyORTUHC[TpKEOkt];
                        KcMQLyORTUHC[TpKEOkt] = LyvoKp;
                    }
                    TpKEOkt++;
                }
            }
            mSHwYmnQ4WKo = mSHwYmnQ4WKo + 1;
        }
    }
    {
        mSHwYmnQ4WKo = 0;
        while (mSHwYmnQ4WKo < xqd9L1) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", HhXJnxWZ2RVc[mPm0EdXS6BG[mSHwYmnQ4WKo]], y[mPm0EdXS6BG[mSHwYmnQ4WKo]], jfZHwJ2g[mPm0EdXS6BG[mSHwYmnQ4WKo]], HhXJnxWZ2RVc[KcMQLyORTUHC[mSHwYmnQ4WKo]], y[KcMQLyORTUHC[mSHwYmnQ4WKo]], jfZHwJ2g[KcMQLyORTUHC[mSHwYmnQ4WKo]], exJ6LihBu[mSHwYmnQ4WKo]);
            mSHwYmnQ4WKo++;
        }
    }
}

