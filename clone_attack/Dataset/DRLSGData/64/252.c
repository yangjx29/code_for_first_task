int main () {
    double  xmJfrV3DlFL, m, TrE8FjN [(1092 - 992)], FVzYltPqi1wr [(677 - 577)];
    int O37D9j [(1044 - 944)], OsiFd1k [(872 - 772)], FwSNfyBDvVpP [(394 - 294)], F6V9mNMYh, HtglzT3OLjSu [(213 - 113)], MvRpY3Zfs, pW7g8c, TEWtg9mLV = (716 - 716), pTnBqC5ev [(903 - 803)], wth9IT4ad8mP [(611 - 511)];
    scanf ("%d\n", &F6V9mNMYh);
    {
        MvRpY3Zfs = (649 - 257) - 392;
        for (; MvRpY3Zfs < F6V9mNMYh;) {
            scanf ("%d%d%d", &O37D9j[MvRpY3Zfs], &OsiFd1k[MvRpY3Zfs], &FwSNfyBDvVpP[MvRpY3Zfs]);
            MvRpY3Zfs = MvRpY3Zfs +1;
        }
    }
    {
        MvRpY3Zfs = (262 - 220) - 42;
        for (; MvRpY3Zfs < F6V9mNMYh;) {
            {
                pW7g8c = (1155 - 959) - (1041 - 846);
                while (pW7g8c < F6V9mNMYh) {
                    TrE8FjN[TEWtg9mLV] = (O37D9j[MvRpY3Zfs] - O37D9j[pW7g8c]) * (O37D9j[MvRpY3Zfs] - O37D9j[pW7g8c]) + (OsiFd1k[MvRpY3Zfs] - OsiFd1k[pW7g8c]) * (OsiFd1k[MvRpY3Zfs] - OsiFd1k[pW7g8c]) + (FwSNfyBDvVpP[MvRpY3Zfs] - FwSNfyBDvVpP[pW7g8c]) * (FwSNfyBDvVpP[MvRpY3Zfs] - FwSNfyBDvVpP[pW7g8c]);
                    FVzYltPqi1wr[TEWtg9mLV] = sqrt (TrE8FjN[TEWtg9mLV]);
                    pTnBqC5ev[TEWtg9mLV] = MvRpY3Zfs;
                    wth9IT4ad8mP[TEWtg9mLV] = pW7g8c;
                    TEWtg9mLV = TEWtg9mLV +(341 - 340);
                    pW7g8c = pW7g8c + 1;
                }
            }
            MvRpY3Zfs = MvRpY3Zfs +1;
        }
    }
    {
        MvRpY3Zfs = (1147 - 183) - (1265 - 302);
        for (; MvRpY3Zfs <= TEWtg9mLV;) {
            {
                pW7g8c = (72 - 72);
                for (; pW7g8c < TEWtg9mLV -MvRpY3Zfs;) {
                    if (FVzYltPqi1wr[pW7g8c] < FVzYltPqi1wr[pW7g8c + (66 - 65)]) {
                        m = FVzYltPqi1wr[pW7g8c];
                        FVzYltPqi1wr[pW7g8c] = FVzYltPqi1wr[pW7g8c + (62 - 61)];
                        FVzYltPqi1wr[pW7g8c + (190 - 189)] = m;
                        m = pTnBqC5ev[pW7g8c];
                        pTnBqC5ev[pW7g8c] = pTnBqC5ev[pW7g8c + (219 - 218)];
                        pTnBqC5ev[pW7g8c + (425 - 424)] = m;
                        m = wth9IT4ad8mP[pW7g8c];
                        wth9IT4ad8mP[pW7g8c] = wth9IT4ad8mP[pW7g8c + 1];
                        wth9IT4ad8mP[pW7g8c + 1] = m;
                    }
                    pW7g8c++;
                }
            }
            MvRpY3Zfs = MvRpY3Zfs +1;
        }
    }
    {
        MvRpY3Zfs = 0;
        while (MvRpY3Zfs < TEWtg9mLV) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", O37D9j[pTnBqC5ev[MvRpY3Zfs]], OsiFd1k[pTnBqC5ev[MvRpY3Zfs]], FwSNfyBDvVpP[pTnBqC5ev[MvRpY3Zfs]], O37D9j[wth9IT4ad8mP[MvRpY3Zfs]], OsiFd1k[wth9IT4ad8mP[MvRpY3Zfs]], FwSNfyBDvVpP[wth9IT4ad8mP[MvRpY3Zfs]], FVzYltPqi1wr[MvRpY3Zfs]);
            MvRpY3Zfs = MvRpY3Zfs +1;
        }
    }
}

