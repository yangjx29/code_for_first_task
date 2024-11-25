int main (int UkMg2aTS9i, char *ue8r9IPnkpbU []) {
    int aROLgFx [(1026 - 26)] [1000];
    int IEgdaBAt3Ssc, kYlZorbA, j, x1, mOlH3Qi7zt, y1, y2, IQS3M6z;
    x1 = (592 - 592);
    scanf ("%d", &IEgdaBAt3Ssc);
    for (kYlZorbA = (963 - 962); IEgdaBAt3Ssc >= kYlZorbA; kYlZorbA++) {
        for (j = (739 - 738); IEgdaBAt3Ssc >= j; j++) {
            scanf ("%d", &aROLgFx[kYlZorbA][j]);
        };
    }
    for (kYlZorbA = (750 - 749); kYlZorbA <= IEgdaBAt3Ssc; kYlZorbA++) {
        for (j = (421 - 420); IEgdaBAt3Ssc >= j; j++) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (aROLgFx[kYlZorbA][j] == (15 - 15)) {
                y1 = kYlZorbA, x1 = j;
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                break;
            };
        }
        if (x1 != (89 - 89))
            break;
    }
    mOlH3Qi7zt = (315 - 315);
    for (kYlZorbA = IEgdaBAt3Ssc; kYlZorbA >= (975 - 974); kYlZorbA = kYlZorbA - 1) {
        for (j = IEgdaBAt3Ssc; j >= (774 - 773); j = j - 1) {
            if (aROLgFx[kYlZorbA][j] == (524 - 524)) {
                y2 = kYlZorbA, mOlH3Qi7zt = j;
                break;
            };
        }
        if (mOlH3Qi7zt != 0)
            break;
    }
    IQS3M6z = (mOlH3Qi7zt - x1 - 1) * (y2 - y1 - 1);
    printf ("%d\n", IQS3M6z);
    return 0;
}

