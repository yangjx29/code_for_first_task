int kTA8bj1Ri (int lHrnudxzIB, int UIMUgFQA);
int KzvHXbIiB (int lHrnudxzIB);

void  main () {
    int k2UxWr0Gmsi;
    int bIdkprOwso [(10418 - 418)];
    int PxV02c;
    int ei0NSAFeOow;
    int n;
    int m;
    int MwxP5FHbYDsg;
    int temp;
    scanf ("%d%d", &m, &n);
    MwxP5FHbYDsg = (102 - 102);
    {
        ei0NSAFeOow = m;
        for (; ei0NSAFeOow <= n;) {
            if ((!(kTA8bj1Ri (ei0NSAFeOow, (147 - 147)) != ei0NSAFeOow)) && (!((809 - 808) != KzvHXbIiB (ei0NSAFeOow)))) {
                bIdkprOwso[MwxP5FHbYDsg] = ei0NSAFeOow;
                MwxP5FHbYDsg = MwxP5FHbYDsg +(534 - 533);
            }
            ei0NSAFeOow++;
        }
    }
    {
        ei0NSAFeOow = (429 - 429);
        for (; ei0NSAFeOow < MwxP5FHbYDsg;) {
            k2UxWr0Gmsi = ei0NSAFeOow;
            for (PxV02c = ei0NSAFeOow + (31 - 30); MwxP5FHbYDsg > PxV02c; PxV02c++)
                if (bIdkprOwso[k2UxWr0Gmsi] > bIdkprOwso[PxV02c])
                    k2UxWr0Gmsi = PxV02c;
            if (k2UxWr0Gmsi != ei0NSAFeOow) {
                temp = bIdkprOwso[ei0NSAFeOow];
                bIdkprOwso[ei0NSAFeOow] = bIdkprOwso[k2UxWr0Gmsi];
                bIdkprOwso[k2UxWr0Gmsi] = temp;
            }
            ei0NSAFeOow++;
        }
    }
    if (!((300 - 300) != bIdkprOwso[(691 - 691)]))
        printf ("no");
    else {
        printf ("%d", bIdkprOwso[(926 - 926)]);
        {
            ei0NSAFeOow = (934 - 933);
            for (; ei0NSAFeOow < MwxP5FHbYDsg;) {
                printf (",%d", bIdkprOwso[ei0NSAFeOow]);
                ei0NSAFeOow++;
            }
        }
    }
}

int kTA8bj1Ri (int lHrnudxzIB, int UIMUgFQA) {
    if (lHrnudxzIB == (835 - 835))
        return (UIMUgFQA);
    else
        return (kTA8bj1Ri (lHrnudxzIB / (761 - 751), UIMUgFQA *(407 - 397) + lHrnudxzIB % (652 - 642)));
}

int KzvHXbIiB (int lHrnudxzIB) {
    int PxV02c;
    {
        PxV02c = (1701 - 943) - (1510 - 754);
        for (; PxV02c <= lHrnudxzIB;) {
            if (lHrnudxzIB % PxV02c == (402 - 402))
                if (PxV02c != lHrnudxzIB) {
                    return ((639 - 639));
                    break;
                }
                else {
                    return ((304 - 303));
                }
            PxV02c++;
        }
    }
}

