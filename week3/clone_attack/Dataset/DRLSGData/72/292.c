int main () {
    int Alt5vwF [100] [100], gP3IgoL954, QECBfGaFxz2i, eLu9TbvSKHW, mLGCed;
    {
        if (0) {
            return 0;
        }
    }
    cin >> gP3IgoL954 >> QECBfGaFxz2i;
    {
        eLu9TbvSKHW = 1;
        while (eLu9TbvSKHW <= gP3IgoL954) {
            {
                mLGCed = 1;
                while (mLGCed <= QECBfGaFxz2i) {
                    cin >> Alt5vwF[eLu9TbvSKHW][mLGCed];
                    mLGCed++;
                }
            }
            eLu9TbvSKHW++;
        }
    }
    {
        mLGCed = 0;
        while (QECBfGaFxz2i +1 >= mLGCed) {
            Alt5vwF[0][mLGCed] = 0;
            mLGCed++;
        }
    }
    {
        mLGCed = 1;
        while (gP3IgoL954 >= mLGCed) {
            Alt5vwF[mLGCed][0] = 0;
            mLGCed++;
        }
    }
    {
        mLGCed = 1;
        while (mLGCed <= gP3IgoL954) {
            Alt5vwF[mLGCed][QECBfGaFxz2i +1] = 0;
            mLGCed++;
        }
    }
    {
        mLGCed = 0;
        while (mLGCed <= QECBfGaFxz2i +1) {
            Alt5vwF[gP3IgoL954 + 1][mLGCed] = 0;
            mLGCed++;
        }
    }
    {
        eLu9TbvSKHW = 1;
        while (eLu9TbvSKHW <= gP3IgoL954) {
            {
                mLGCed = 1;
                while (mLGCed <= QECBfGaFxz2i) {
                    if (Alt5vwF[eLu9TbvSKHW][mLGCed] >= Alt5vwF[eLu9TbvSKHW][mLGCed - 1] && Alt5vwF[eLu9TbvSKHW][mLGCed] >= Alt5vwF[eLu9TbvSKHW][mLGCed + 1] && Alt5vwF[eLu9TbvSKHW][mLGCed] >= Alt5vwF[eLu9TbvSKHW + 1][mLGCed] && Alt5vwF[eLu9TbvSKHW][mLGCed] >= Alt5vwF[eLu9TbvSKHW - 1][mLGCed])
                        cout << eLu9TbvSKHW - 1 << ' ' << mLGCed - 1 << endl;
                    mLGCed++;
                }
            }
            eLu9TbvSKHW++;
        }
    }
    return 0;
}

