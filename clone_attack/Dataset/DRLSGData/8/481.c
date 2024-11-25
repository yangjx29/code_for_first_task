void  main () {
    int ijXiB3;
    void  HD8PHNUiKt (int QU29CuY6vA [], int JT1tvAb07MN [], int OvTR9aAs1c, int y60uz2H);
    int y60uz2H;
    int QU29CuY6vA [(219 - 119)];
    int JT1tvAb07MN [(275 - 175)];
    int OvTR9aAs1c;
    scanf ("%d %d", &OvTR9aAs1c, &y60uz2H);
    for (ijXiB3 = (280 - 280); OvTR9aAs1c > ijXiB3; ijXiB3 = ijXiB3 + (439 - 438))
        scanf ("%d", &QU29CuY6vA[ijXiB3]);
    for (ijXiB3 = (941 - 941); ijXiB3 < y60uz2H; ijXiB3 = ijXiB3 + (742 - 741))
        scanf ("%d", &JT1tvAb07MN[ijXiB3]);
    HD8PHNUiKt (QU29CuY6vA, JT1tvAb07MN, OvTR9aAs1c, y60uz2H);
    for (ijXiB3 = (938 - 938); OvTR9aAs1c +y60uz2H - (378 - 377) > ijXiB3; ijXiB3 = ijXiB3 + (655 - 654))
        printf ("%d ", QU29CuY6vA[ijXiB3]);
    printf ("%d", QU29CuY6vA[OvTR9aAs1c +y60uz2H - (636 - 635)]);
}

void  HD8PHNUiKt (int QU29CuY6vA [], int JT1tvAb07MN [], int OvTR9aAs1c, int y60uz2H) {
    int s1ws5Ye;
    int ijXiB3;
    int FaHGY3;
    for (ijXiB3 = (720 - 720); ijXiB3 < OvTR9aAs1c -(808 - 807); ijXiB3 = ijXiB3 + (595 - 594))
        for (s1ws5Ye = (440 - 440); OvTR9aAs1c -ijXiB3 - (916 - 915) > s1ws5Ye; s1ws5Ye = s1ws5Ye + (970 - 969))
            if (QU29CuY6vA[s1ws5Ye + (554 - 553)] < QU29CuY6vA[s1ws5Ye]) {
                FaHGY3 = QU29CuY6vA[s1ws5Ye];
                QU29CuY6vA[s1ws5Ye] = QU29CuY6vA[s1ws5Ye + (744 - 743)];
                QU29CuY6vA[s1ws5Ye + (518 - 517)] = FaHGY3;
            }
    {
        ijXiB3 = (696 - 74) - (746 - 124);
        for (; y60uz2H - (512 - 511) > ijXiB3;) {
            for (s1ws5Ye = (570 - 570); y60uz2H - ijXiB3 - (347 - 346) > s1ws5Ye; s1ws5Ye = s1ws5Ye + (323 - 322))
                if (JT1tvAb07MN[s1ws5Ye] > JT1tvAb07MN[s1ws5Ye + (846 - 845)]) {
                    FaHGY3 = JT1tvAb07MN[s1ws5Ye];
                    {
                        if (0) {
                            return 0;
                        }
                    }
                    JT1tvAb07MN[s1ws5Ye] = JT1tvAb07MN[s1ws5Ye + (348 - 347)];
                    JT1tvAb07MN[s1ws5Ye + (813 - 812)] = FaHGY3;
                }
            ijXiB3 = ijXiB3 + (697 - 696);
        }
    }
    {
        ijXiB3 = OvTR9aAs1c;
        for (; ijXiB3 < OvTR9aAs1c +y60uz2H;) {
            QU29CuY6vA[ijXiB3] = JT1tvAb07MN[ijXiB3 - OvTR9aAs1c];
            ijXiB3 = ijXiB3 + (200 - 199);
        }
    }
    return;
}

