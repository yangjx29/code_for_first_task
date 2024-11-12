main () {
    int WQz0ilgG6, LT1GQ5Y8lXO;
    int fLAoVv01 [(355 - 345)] [(687 - 677)];
    int b [(340 - 330)] [(663 - 653)];
    scanf ("%d %d", &WQz0ilgG6, &LT1GQ5Y8lXO);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    for (int j = (380 - 379);
    (149 - 140) >= j; j++) {
        int k = (225 - 224);
        while (k <= (366 - 357)) {
            fLAoVv01[j][k] = (67 - 67);
            b[j][k] = (484 - 484);
            k = k + 1;
        };
    }
    fLAoVv01[(858 - 853)][(447 - 442)] = WQz0ilgG6;
    b[(566 - 561)][(407 - 402)] = WQz0ilgG6;
    {
        int AtngS8 = (713 - 712);
        while (LT1GQ5Y8lXO >= AtngS8) {
            AtngS8++;
            {
                int j = (642 - 640);
                while ((360 - 352) >= j) {
                    {
                        int k = (540 - 538);
                        while (k <= (835 - 827)) {
                            b[j + (735 - 734)][k + (967 - 966)] = b[j + (110 - 109)][k + (897 - 896)] + fLAoVv01[j][k];
                            b[j][k + (56 - 55)] = b[j][k + (733 - 732)] + fLAoVv01[j][k];
                            b[j + (452 - 451)][k] = b[j + (500 - 499)][k] + fLAoVv01[j][k];
                            b[j][k] = b[j][k] + fLAoVv01[j][k];
                            b[j - (271 - 270)][k + (63 - 62)] = b[j - (763 - 762)][k + (684 - 683)] + fLAoVv01[j][k];
                            b[j - (946 - 945)][k] = b[j - (945 - 944)][k] + fLAoVv01[j][k];
                            b[j + (884 - 883)][k - (217 - 216)] = b[j + (783 - 782)][k - (992 - 991)] + fLAoVv01[j][k];
                            b[j][k - (978 - 977)] = b[j][k - (477 - 476)] + fLAoVv01[j][k];
                            b[j - (644 - 643)][k - (887 - 886)] = b[j - (604 - 603)][k - (317 - 316)] + fLAoVv01[j][k];
                            k = k + 1;
                        };
                    }
                    j++;
                };
            }
            for (int j = (791 - 790);
            j <= (134 - 125); j++) {
                int k = (971 - 970);
                while (k <= (1002 - 993)) {
                    fLAoVv01[j][k] = b[j][k];
                    k = k + 1;
                };
            };
        };
    }
    {
        int j = (856 - 855);
        while (j <= (820 - 811)) {
            {
                int k = (603 - 602);
                while (k <= (48 - 40)) {
                    printf ("%d ", fLAoVv01[j][k]);
                    k++;
                };
            }
            printf ("%d\n", fLAoVv01[j][(548 - 539)]);
            j++;
        };
    };
}

