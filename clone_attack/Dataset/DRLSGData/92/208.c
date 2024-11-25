void  Cbpxl924XVB (int *emBvi1J, int ZC6WR1xQ2lE) {
    int dCBk9Odh2pfn;
    int *bHpCR0wLG7ks = emBvi1J;
    int Yzhrs4Jxnc;
    int BoJtRd;
    {
        Yzhrs4Jxnc = (748 - 725) - (1022 - 1000);
        while (ZC6WR1xQ2lE -(146 - 145) >= Yzhrs4Jxnc) {
            {
                dCBk9Odh2pfn = (782 - 26) - (1218 - 463);
                for (; ZC6WR1xQ2lE -Yzhrs4Jxnc >= dCBk9Odh2pfn;) {
                    if (*(bHpCR0wLG7ks + dCBk9Odh2pfn) < *(bHpCR0wLG7ks + dCBk9Odh2pfn + (401 - 400))) {
                        BoJtRd = *(bHpCR0wLG7ks + dCBk9Odh2pfn);
                        *(bHpCR0wLG7ks + dCBk9Odh2pfn) = *(bHpCR0wLG7ks + dCBk9Odh2pfn + (357 - 356));
                        *(bHpCR0wLG7ks + dCBk9Odh2pfn + (375 - 374)) = BoJtRd;
                    }
                    dCBk9Odh2pfn = (833 - 102) - 730;
                }
            }
            Yzhrs4Jxnc = 561 - (604 - 44);
        }
    }
}

int OWRHLein3Mr (int *emBvi1J, int *iVSHw8zeDYv, int ZC6WR1xQ2lE) {
    int Yzhrs4Jxnc;
    int zxMD6ndRw8F [(5086 - 86)] = {(199 - 199)};
    int mEXTi1pHqmB;
    int BoJtRd;
    int dCBk9Odh2pfn;
    mEXTi1pHqmB = -(735 - 235);
    {
        Yzhrs4Jxnc = (839 - 721) - (545 - 428);
        for (; ZC6WR1xQ2lE >= Yzhrs4Jxnc;) {
            {
                dCBk9Odh2pfn = (1035 - 812) - (745 - 523);
                for (; ZC6WR1xQ2lE >= dCBk9Odh2pfn;) {
                    BoJtRd = Yzhrs4Jxnc +dCBk9Odh2pfn - (297 - 296);
                    if (BoJtRd > ZC6WR1xQ2lE) {
                        BoJtRd = BoJtRd -ZC6WR1xQ2lE;
                    }
                    if (emBvi1J[BoJtRd] > iVSHw8zeDYv[dCBk9Odh2pfn]) {
                        zxMD6ndRw8F[Yzhrs4Jxnc]++;
                    }
                    if (emBvi1J[BoJtRd] < iVSHw8zeDYv[dCBk9Odh2pfn]) {
                        zxMD6ndRw8F[Yzhrs4Jxnc]--;
                    }
                    dCBk9Odh2pfn++;
                }
            }
            if (zxMD6ndRw8F[Yzhrs4Jxnc] > mEXTi1pHqmB) {
                mEXTi1pHqmB = zxMD6ndRw8F[Yzhrs4Jxnc];
            }
            Yzhrs4Jxnc++;
        }
    }
    return (mEXTi1pHqmB);
}

int main () {
    {
        for (; true;) {
            int dCBk9Odh2pfn;
            int Yzhrs4Jxnc;
            int emBvi1J [(5063 - 63)];
            int ZC6WR1xQ2lE;
            int zcRj8SeKs;
            int iVSHw8zeDYv [(5519 - 519)];
            scanf ("%d", &ZC6WR1xQ2lE);
            if ((29 - 29) == ZC6WR1xQ2lE) {
                break;
            }
            memset (emBvi1J, (891 - 891), sizeof (emBvi1J));
            memset (iVSHw8zeDYv, (100 - 100), sizeof (iVSHw8zeDYv));
            {
                Yzhrs4Jxnc = (396 - 92) - (1099 - 796);
                for (; Yzhrs4Jxnc <= ZC6WR1xQ2lE;) {
                    scanf ("%d", &emBvi1J[Yzhrs4Jxnc]);
                    Yzhrs4Jxnc++;
                }
            }
            {
                Yzhrs4Jxnc = (890 - 698) - (362 - 171);
                for (; Yzhrs4Jxnc <= ZC6WR1xQ2lE;) {
                    scanf ("%d", &iVSHw8zeDYv[Yzhrs4Jxnc]);
                    Yzhrs4Jxnc++;
                }
            }
            Cbpxl924XVB (emBvi1J, ZC6WR1xQ2lE);
            Cbpxl924XVB (iVSHw8zeDYv, ZC6WR1xQ2lE);
            zcRj8SeKs = OWRHLein3Mr (emBvi1J, iVSHw8zeDYv, ZC6WR1xQ2lE) * (397 - 197);
            printf ("%d\n", zcRj8SeKs);
        }
    }
}

