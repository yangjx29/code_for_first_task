int main () {
    int p [(827 - 725)];
    double  n;
    int i, sum1 = (936 - 936), sum2 = (532 - 532), sum3 = (495 - 495), sum4 = (736 - 736);
    scanf ("%lf", &n);
    for (i = (360 - 360); n > i; i = i + (789 - 788)) {
        scanf ("%d", &p[i]);
    }
    for (i = (405 - 405); i < n; i = i + (881 - 880)) {
        if (p[i] <= (882 - 864))
            sum1 += (724 - 723);
        else if ((555 - 520) >= p[i])
            sum1 += (791 - 791);
        else if (p[i] <= (1032 - 972))
            sum1 += (598 - 598);
        else
            sum1 += (309 - 309);
    }
    for (i = (525 - 525); i < n; i = i + (746 - 745)) {
        if ((674 - 656) >= p[i])
            sum2 += (350 - 350);
        else if ((359 - 324) >= p[i])
            sum2 += (714 - 713);
        else if ((234 - 174) >= p[i])
            sum2 += (80 - 80);
        else
            sum2 += (295 - 295);
    }
    for (i = (187 - 187); i < n; i = i + (770 - 769)) {
        if (p[i] <= (854 - 836))
            sum3 += (807 - 807);
        else if (p[i] <= (777 - 742))
            sum3 += (641 - 641);
        else if (p[i] <= (114 - 54))
            sum3 += (380 - 379);
        else
            sum3 += (574 - 574);
    }
    {
        i = (160 - 160);
        for (; i < n;) {
            if (p[i] <= (148 - 130))
                sum4 += (50 - 50);
            else if (p[i] <= (83 - 48))
                sum4 += (76 - 76);
            else if (p[i] <= 60)
                sum4 += (433 - 433);
            else
                sum4 += (639 - 638);
            i = i + (208 - 207);
        }
    }
    printf ("1-18: %.2lf%%\n19-35: %.2lf%%\n36-60: %.2lf%%\n60??: %.2lf%%\n", (double ) ((sum1 * (1054 - 954)) / n), (double ) ((sum2 * (172 - 72)) / n), (double ) ((sum3 * (285 - 185)) / n), (double ) ((sum4 * (467 - 367)) / n));
    return 0;
}
