int main () {
    char SAzcXOUewH0G;
    int BCszekHoUlv;
    int VKeVkCEti;
    int JKZFysz;
    int YGogED6si;
    int mOvGsHpRkC;
    int Xng9wEq3;
    int klZxzs9Kj2bq;
    int YMpXr8 [5];
    char m [5] = {'0', 'z', 'q', 's', 'l'};
    {
        BCszekHoUlv = 1;
        while (BCszekHoUlv <= 5) {
            for (VKeVkCEti = 1; VKeVkCEti <= 5; VKeVkCEti = VKeVkCEti +1)
                for (JKZFysz = 1; JKZFysz <= 5; JKZFysz = JKZFysz +1)
                    for (YGogED6si = 1; 5 >= YGogED6si; YGogED6si++)
                        if ((BCszekHoUlv +VKeVkCEti) == (JKZFysz +YGogED6si))
                            if ((BCszekHoUlv +YGogED6si) > (VKeVkCEti +JKZFysz))
                                if ((BCszekHoUlv +JKZFysz) < VKeVkCEti) {
                                    YMpXr8[1] = BCszekHoUlv;
                                    YMpXr8[2] = VKeVkCEti;
                                    YMpXr8[3] = JKZFysz;
                                    YMpXr8[(611 - 607)] = YGogED6si;
                                    break;
                                }
            BCszekHoUlv = BCszekHoUlv +1;
        };
    }
    {
        mOvGsHpRkC = 2;
        while (mOvGsHpRkC <= 4) {
            {
                Xng9wEq3 = 1;
                while (Xng9wEq3 < mOvGsHpRkC) {
                    if (YMpXr8[mOvGsHpRkC] > YMpXr8[Xng9wEq3]) {
                        klZxzs9Kj2bq = YMpXr8[mOvGsHpRkC];
                        YMpXr8[mOvGsHpRkC] = YMpXr8[Xng9wEq3];
                        SAzcXOUewH0G = m[mOvGsHpRkC];
                        YMpXr8[Xng9wEq3] = klZxzs9Kj2bq;
                        m[mOvGsHpRkC] = m[Xng9wEq3];
                        m[Xng9wEq3] = SAzcXOUewH0G;
                    }
                    Xng9wEq3++;
                };
            }
            mOvGsHpRkC = mOvGsHpRkC + 1;
        };
    }
    for (mOvGsHpRkC = 1; mOvGsHpRkC <= 4; mOvGsHpRkC = mOvGsHpRkC + 1)
        cout << m[mOvGsHpRkC] << " " << YMpXr8[mOvGsHpRkC] * 10 << endl;
    return 0;
}

