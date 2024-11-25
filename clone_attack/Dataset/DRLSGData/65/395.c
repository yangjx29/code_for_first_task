int main () {
    int rjmfiN;
    int NFpDJudIqZQ;
    int QX2oiKAT7NMy [200];
    int yBmHnPLig [200];
    int ZXPflvIpB9Hi;
    int CHWUNMac6j4;
    NFpDJudIqZQ = 0;
    rjmfiN = 0;
    scanf ("%d", &ZXPflvIpB9Hi);
    {
        CHWUNMac6j4 = 0;
        while (CHWUNMac6j4 < ZXPflvIpB9Hi) {
            scanf ("%d%d", &QX2oiKAT7NMy[CHWUNMac6j4], &yBmHnPLig[CHWUNMac6j4]);
            if (yBmHnPLig[CHWUNMac6j4] - QX2oiKAT7NMy[CHWUNMac6j4] == 1 || QX2oiKAT7NMy[CHWUNMac6j4] - yBmHnPLig[CHWUNMac6j4] == 2) {
                rjmfiN++;
            }
            else if (QX2oiKAT7NMy[CHWUNMac6j4] == yBmHnPLig[CHWUNMac6j4]) {
                continue;
            }
            else {
                NFpDJudIqZQ = NFpDJudIqZQ +1;
            }
            CHWUNMac6j4 = CHWUNMac6j4 +1;
        }
    }
    if (rjmfiN > NFpDJudIqZQ) {
    }
    else if (rjmfiN == NFpDJudIqZQ) {
    }
    else {
    }
    return 0;
}

