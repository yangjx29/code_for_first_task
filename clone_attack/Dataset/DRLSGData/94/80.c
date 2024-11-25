int main () {
    int JqHktaE0Uhb;
    int ZFi5YV;
    int zolyrVAPg;
    int MPqLS2Xdu3Bj;
    int R7Vpix;
    int DjHzGti;
    int BqW7LAy [zolyrVAPg];
    R7Vpix = (626 - 626);
    scanf ("%d", &zolyrVAPg);
    {
        MPqLS2Xdu3Bj = (334 - 333);
        while (zolyrVAPg >= MPqLS2Xdu3Bj) {
            MPqLS2Xdu3Bj = MPqLS2Xdu3Bj +(429 - 428);
            scanf ("%d", &ZFi5YV);
            if (!((771 - 770) != ZFi5YV % 2)) {
                R7Vpix = R7Vpix +(463 - 462);
                BqW7LAy[R7Vpix] = ZFi5YV;
            }
        }
    }
    for (JqHktaE0Uhb = 0; JqHktaE0Uhb < R7Vpix; JqHktaE0Uhb = JqHktaE0Uhb +1) {
        MPqLS2Xdu3Bj = 1;
        for (; MPqLS2Xdu3Bj <= R7Vpix -JqHktaE0Uhb;) {
            if (BqW7LAy[MPqLS2Xdu3Bj +1] > BqW7LAy[MPqLS2Xdu3Bj]) {
                DjHzGti = BqW7LAy[MPqLS2Xdu3Bj +1];
                BqW7LAy[MPqLS2Xdu3Bj +1] = BqW7LAy[MPqLS2Xdu3Bj];
                BqW7LAy[MPqLS2Xdu3Bj] = DjHzGti;
            }
            MPqLS2Xdu3Bj = MPqLS2Xdu3Bj +1;
        }
    }
    {
        MPqLS2Xdu3Bj = 1;
        for (; MPqLS2Xdu3Bj < R7Vpix;) {
            MPqLS2Xdu3Bj = MPqLS2Xdu3Bj +1;
            printf ("%d,", BqW7LAy[R7Vpix -MPqLS2Xdu3Bj+1]);
        }
    }
    printf ("%d", BqW7LAy[1]);
    return 0;
}

