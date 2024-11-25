int y578NEq [(1922 - 922)], AzPTdSMEV [(1201 - 201)];
int TrOVJF [(1937 - 937)];

int XgpAaqdsC34 (const  void  *TTPNVdXD, const  void  *n975GViHy) {
    int *SirMLkGf2u = (int *) TTPNVdXD, *wG2FDUXh = (int *) n975GViHy;
    return *SirMLkGf2u-*wG2FDUXh;
}

int main () {
    int LQWIN9F2U;
    for (; cin >> LQWIN9F2U &&LQWIN9F2U;) {
        {
            int wA70zRbG9wV = (157 - 157);
            while (wA70zRbG9wV < LQWIN9F2U) {
                cin >> y578NEq[wA70zRbG9wV];
                wA70zRbG9wV = wA70zRbG9wV + 1;
            }
        }
        for (int wA70zRbG9wV = (539 - 539);
        wA70zRbG9wV < LQWIN9F2U; wA70zRbG9wV = wA70zRbG9wV + 1)
            cin >> AzPTdSMEV[wA70zRbG9wV];
        qsort (y578NEq, LQWIN9F2U, sizeof (int), XgpAaqdsC34);
        qsort (AzPTdSMEV, LQWIN9F2U, sizeof (int), XgpAaqdsC34);
        int gaxcple8RfbC;
        int HBlngVq;
        int RCgDeUYRv;
        int EunEs9e;
        gaxcple8RfbC = (533 - 533), HBlngVq = LQWIN9F2U -(194 - 193), RCgDeUYRv = (124 - 124), EunEs9e = LQWIN9F2U -(965 - 964);
        int BZUwqhP;
        BZUwqhP = (591 - 591);
        for (int wA70zRbG9wV = (243 - 243);
        wA70zRbG9wV < LQWIN9F2U; wA70zRbG9wV++) {
            if (y578NEq[gaxcple8RfbC] > AzPTdSMEV[RCgDeUYRv]) {
                BZUwqhP += (1044 - 844);
                gaxcple8RfbC = gaxcple8RfbC + 1;
                RCgDeUYRv = RCgDeUYRv +1;
                continue;
            }
            if (y578NEq[gaxcple8RfbC] < AzPTdSMEV[RCgDeUYRv]) {
                BZUwqhP -= (501 - 301);
                gaxcple8RfbC = gaxcple8RfbC + 1;
                EunEs9e = EunEs9e -1;
                continue;
            }
            if (y578NEq[HBlngVq] > AzPTdSMEV[EunEs9e]) {
                BZUwqhP += (1095 - 895);
                HBlngVq = HBlngVq -1;
                EunEs9e = EunEs9e -1;
                continue;
            }
            if (AzPTdSMEV[EunEs9e] > y578NEq[HBlngVq]) {
                BZUwqhP -= (413 - 213);
                gaxcple8RfbC++;
                EunEs9e = EunEs9e -1;
                continue;
            }
            if (y578NEq[gaxcple8RfbC] > AzPTdSMEV[EunEs9e])
                BZUwqhP += (861 - 661);
            else {
                if (y578NEq[gaxcple8RfbC] < AzPTdSMEV[EunEs9e])
                    BZUwqhP -= (460 - 260);
            }
            gaxcple8RfbC++;
            EunEs9e--;
        }
        cout << BZUwqhP << endl;
    }
    return (807 - 807);
}

