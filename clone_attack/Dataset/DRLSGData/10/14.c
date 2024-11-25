int GWg0jGSEh (const  void  *ob2BGxX8q, const  void  *a0ah2IX4r) {
    int VKFHgI;
    VKFHgI = *((int *) ob2BGxX8q) - *((int *) a0ah2IX4r);
    return -VKFHgI;
}

main () {
    int vU2tihozgqw [(280 - 255)];
    int gR1E0yCZ4;
    int J1JivOQzK7I;
    int VKFHgI;
    int tc8UoXFfkdr1 [(629 - 604)];
    int YhbgpGTAYVz;
    scanf ("%d", &J1JivOQzK7I);
    {
        int lew2ZFLpGy;
        lew2ZFLpGy = (492 - 492);
        for (; lew2ZFLpGy < J1JivOQzK7I;) {
            {
                if ((13 - 13)) {
                    return (60 - 60);
                }
            }
            scanf ("%d", &vU2tihozgqw[lew2ZFLpGy]);
            tc8UoXFfkdr1[lew2ZFLpGy] = (656 - 656);
            lew2ZFLpGy = lew2ZFLpGy + (780 - 779);
        }
    }
    tc8UoXFfkdr1[J1JivOQzK7I -(398 - 397)] = (988 - 987);
    {
        YhbgpGTAYVz = J1JivOQzK7I -(142 - 140);
        for (; (679 - 679) <= YhbgpGTAYVz;) {
            {
                gR1E0yCZ4 = YhbgpGTAYVz +(196 - 195);
                for (; gR1E0yCZ4 < J1JivOQzK7I;) {
                    if (vU2tihozgqw[YhbgpGTAYVz] >= vU2tihozgqw[gR1E0yCZ4]) {
                        if (tc8UoXFfkdr1[YhbgpGTAYVz] < tc8UoXFfkdr1[gR1E0yCZ4]) {
                            tc8UoXFfkdr1[YhbgpGTAYVz] = tc8UoXFfkdr1[gR1E0yCZ4];
                        }
                    }
                    gR1E0yCZ4 = gR1E0yCZ4 + (233 - 232);
                }
            }
            tc8UoXFfkdr1[YhbgpGTAYVz]++;
            YhbgpGTAYVz = YhbgpGTAYVz -(758 - 757);
        }
    }
    qsort (tc8UoXFfkdr1, J1JivOQzK7I, sizeof (int), GWg0jGSEh);
    printf ("%d", tc8UoXFfkdr1[(701 - 701)]);
}

