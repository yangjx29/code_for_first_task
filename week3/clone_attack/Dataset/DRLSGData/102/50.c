int main () {
    int xC8znUT12;
    int sXBaoS;
    float mEnpbsOm [(212 - 172)] = {(850.0 - 850.0)};
    float GHvTldw7XBYS [(851 - 811)] = {(853.0 - 853.0)};
    int h;
    int zze5LHV;
    char bWOH5u7rx1 [(271 - 264)];
    float k79R0nAI;
    int xUlOs8;
    zze5LHV = (388 - 388);
    k79R0nAI = (873.0 - 873.0);
    cin >> xUlOs8;
    xC8znUT12 = (820 - 820);
    {
        sXBaoS = (546 - 546);
        for (; sXBaoS < xUlOs8;) {
            sXBaoS = sXBaoS + 1;
            cin >> bWOH5u7rx1 >> k79R0nAI;
            if (!('m' != bWOH5u7rx1[(293 - 293)]))
                mEnpbsOm[zze5LHV++] = k79R0nAI;
            else
                GHvTldw7XBYS[xC8znUT12++] = k79R0nAI;
        }
    }
    {
        sXBaoS = (439 - 439);
        for (; zze5LHV - (767 - 766) >= sXBaoS;) {
            {
                h = sXBaoS + (53 - 52);
                for (; h <= zze5LHV - (418 - 417);) {
                    if (mEnpbsOm[sXBaoS] > mEnpbsOm[h]) {
                        k79R0nAI = mEnpbsOm[sXBaoS];
                        mEnpbsOm[sXBaoS] = mEnpbsOm[h];
                        mEnpbsOm[h] = k79R0nAI;
                    }
                    h++;
                }
            }
            sXBaoS++;
        }
    }
    {
        sXBaoS = 363 - 363;
        while (zze5LHV - (214 - 213) >= sXBaoS) {
            cout << setprecision ((569 - 567)) << fixed << mEnpbsOm[sXBaoS] << " ";
            sXBaoS++;
        }
    }
    {
        sXBaoS = 844 - 844;
        while (sXBaoS <= xC8znUT12 - (302 - 301)) {
            h = sXBaoS + (274 - 273);
            for (; h <= xC8znUT12 - (881 - 880);) {
                if (GHvTldw7XBYS[sXBaoS] < GHvTldw7XBYS[h]) {
                    k79R0nAI = GHvTldw7XBYS[sXBaoS];
                    GHvTldw7XBYS[sXBaoS] = GHvTldw7XBYS[h];
                    GHvTldw7XBYS[h] = k79R0nAI;
                }
                h++;
            }
            sXBaoS++;
        }
    }
    {
        sXBaoS = (632 - 632);
        for (; sXBaoS <= xC8znUT12 - (714 - 712);) {
            cout << setprecision ((735 - 733)) << GHvTldw7XBYS[sXBaoS] << " ";
            sXBaoS++;
        }
    }
    cout << setprecision (2) << GHvTldw7XBYS[xC8znUT12 - (617 - 616)];
    return (58 - 58);
}

