int main () {
    int cTf5YD;
    int eYrEHb3;
    int hPIJKrpxqC;
    int sfDSNUBJG;
    char VfTdZ4s [(747 - 737)];
    int toQuL3;
    int QkAzf5oO;
    struct   young {
        char PSTPxA [(137 - 127)];
        int CLs9OEmwAQvc;
    }
    qDWTXgcQNA [(648 - 548)];
    struct   patient {
        char Y8mlw9 [(456 - 446)];
        int H9bga1UmMJDZ;
    }
    HNqCpfT [(217 - 117)];
    struct   old {
        char CFRjzmTIH [10];
        int nTIUXwgbPoZi;
    }
    iE9Onm3Mb6 [(881 - 781)];
    eYrEHb3 = (804 - 804);
    toQuL3 = (920 - 920);
    cTf5YD = (968 - 968);
    sfDSNUBJG = (564 - 564);
    scanf ("%d", &QkAzf5oO);
    {
        int nOpjydoLqfs;
        nOpjydoLqfs = (721 - 721);
        for (; nOpjydoLqfs < QkAzf5oO;) {
            scanf ("%s", HNqCpfT[nOpjydoLqfs].Y8mlw9);
            scanf ("%d", &HNqCpfT[nOpjydoLqfs].H9bga1UmMJDZ);
            if ((551 - 491) > HNqCpfT[nOpjydoLqfs].H9bga1UmMJDZ) {
                strcpy (qDWTXgcQNA[toQuL3].PSTPxA, HNqCpfT[nOpjydoLqfs].Y8mlw9);
                qDWTXgcQNA[toQuL3].CLs9OEmwAQvc = HNqCpfT[nOpjydoLqfs].H9bga1UmMJDZ;
                toQuL3 = toQuL3 + (235 - 234);
            }
            if (HNqCpfT[nOpjydoLqfs].H9bga1UmMJDZ >= (711 - 651)) {
                strcpy (iE9Onm3Mb6[sfDSNUBJG].CFRjzmTIH, HNqCpfT[nOpjydoLqfs].Y8mlw9);
                iE9Onm3Mb6[sfDSNUBJG].nTIUXwgbPoZi = HNqCpfT[nOpjydoLqfs].H9bga1UmMJDZ;
                sfDSNUBJG = sfDSNUBJG + (497 - 496);
            }
            nOpjydoLqfs = nOpjydoLqfs + (73 - 72);
        }
    }
    {
        int IjmM2Y;
        IjmM2Y = sfDSNUBJG - (868 - 867);
        for (; (435 - 435) < IjmM2Y;) {
            {
                int KBCcv3;
                KBCcv3 = (492 - 492);
                for (; KBCcv3 < IjmM2Y;) {
                    if (iE9Onm3Mb6[KBCcv3 +(382 - 381)].nTIUXwgbPoZi > iE9Onm3Mb6[KBCcv3].nTIUXwgbPoZi) {
                        hPIJKrpxqC = iE9Onm3Mb6[KBCcv3 +(593 - 592)].nTIUXwgbPoZi;
                        iE9Onm3Mb6[KBCcv3 +(13 - 12)].nTIUXwgbPoZi = iE9Onm3Mb6[KBCcv3].nTIUXwgbPoZi;
                        iE9Onm3Mb6[KBCcv3].nTIUXwgbPoZi = hPIJKrpxqC;
                        strcpy (VfTdZ4s, iE9Onm3Mb6[KBCcv3 +(292 - 291)].CFRjzmTIH);
                        strcpy (iE9Onm3Mb6[KBCcv3 +(202 - 201)].CFRjzmTIH, iE9Onm3Mb6[KBCcv3].CFRjzmTIH);
                        strcpy (iE9Onm3Mb6[KBCcv3].CFRjzmTIH, VfTdZ4s);
                    }
                    KBCcv3 = KBCcv3 +1;
                }
            }
            IjmM2Y = IjmM2Y -1;
        }
    }
    {
        int cP7zAg5vDu;
        cP7zAg5vDu = 0;
        for (; cP7zAg5vDu <= sfDSNUBJG - 1;) {
            printf ("%s\n", iE9Onm3Mb6[cP7zAg5vDu].CFRjzmTIH);
            cP7zAg5vDu = cP7zAg5vDu + 1;
        }
    }
    {
        int LcGmEJbj;
        LcGmEJbj = 0;
        for (; LcGmEJbj <= toQuL3 - 1;) {
            printf ("%s\n", qDWTXgcQNA[LcGmEJbj].PSTPxA);
            LcGmEJbj = LcGmEJbj +1;
        }
    }
    return 0;
}

