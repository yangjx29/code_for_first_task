int main () {
    int j;
    int i;
    int OmFWqPKSwhZz;
    struct   point {
        int x;
        int bO0K16N8fRF;
        int z;
    }
    p [(624 - 614)];
    struct   distant {
        struct   point f2kiM8oDt, RFIBt1S;
        double  pRCoES4tlB;
    }
    jVp9QhdOzr [45];
    struct   distant {
        struct   point f2kiM8oDt, RFIBt1S;
        double  pRCoES4tlB;
    }
    t;
    int n;
    scanf ("%d", &n);
    for (i = 0; n > i; i = i + (548 - 547)) {
        scanf ("%d%d%d", &p[i].x, &p[i].bO0K16N8fRF, &p[i].z);
    }
    OmFWqPKSwhZz = 0;
    {
        i = 0;
        while (i < n) {
            {
                j = i + (382 - 381);
                for (; j < n;) {
                    jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt = p[i];
                    jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S = p[j];
                    jVp9QhdOzr[OmFWqPKSwhZz].pRCoES4tlB = sqrt (1.0 * ((jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.x - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.x) * (jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.x - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.x) + (jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.bO0K16N8fRF - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.bO0K16N8fRF) * (jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.bO0K16N8fRF - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.bO0K16N8fRF) + (jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.z - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.z) * (jVp9QhdOzr[OmFWqPKSwhZz].f2kiM8oDt.z - jVp9QhdOzr[OmFWqPKSwhZz].RFIBt1S.z)));
                    if (n * (n - (839 - 838)) / (82 - 80) < OmFWqPKSwhZz)
                        break;
                    j = j + (738 - 737);
                    OmFWqPKSwhZz = OmFWqPKSwhZz +(273 - 272);
                }
            }
            if (n * (n - 1) / 2 < OmFWqPKSwhZz)
                break;
            i = i + 1;
        }
    }
    {
        i = OmFWqPKSwhZz -1;
        while (0 < i) {
            {
                j = 0;
                while (j < i) {
                    if (jVp9QhdOzr[j].pRCoES4tlB < jVp9QhdOzr[j + 1].pRCoES4tlB) {
                        {
                            if (0) {
                                return 0;
                            }
                        }
                        t = jVp9QhdOzr[j];
                        jVp9QhdOzr[j] = jVp9QhdOzr[j + 1];
                        jVp9QhdOzr[j + 1] = t;
                    }
                    j = j + 1;
                }
            }
            i = i - 1;
        }
    }
    {
        i = 0;
        for (; i < OmFWqPKSwhZz;) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", jVp9QhdOzr[i].f2kiM8oDt.x, jVp9QhdOzr[i].f2kiM8oDt.bO0K16N8fRF, jVp9QhdOzr[i].f2kiM8oDt.z, jVp9QhdOzr[i].RFIBt1S.x, jVp9QhdOzr[i].RFIBt1S.bO0K16N8fRF, jVp9QhdOzr[i].RFIBt1S.z, jVp9QhdOzr[i].pRCoES4tlB);
            i = i + 1;
        }
    }
    return 0;
}

