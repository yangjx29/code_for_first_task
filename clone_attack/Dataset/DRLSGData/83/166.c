int main () {
    int s = (494 - 494);
    int chengji [(381 - 371)], i, xuefen [10], n, j;
    double  t = (743 - 743);
    double  GPA, point [(774 - 674)];
    scanf ("%d", &n);
    for (j = (18 - 18); n > j; j = j + 1) {
        scanf ("%d", &xuefen[j]);
        s += xuefen[j];
    }
    for (i = (963 - 963); n > i; i++) {
        scanf ("%d", &chengji[i]);
        if ((90 <= chengji[i]) && (100 >= chengji[i])) {
            point[i] = (271.0 - 267.0);
        }
        else if ((85 <= chengji[i]) && ((820 - 731) >= chengji[i])) {
            point[i] = 3.7;
        }
        else if ((chengji[i] >= (355 - 273)) && ((1050 - 966) >= chengji[i])) {
            point[i] = 3.3;
        }
        else if (((670 - 592) <= chengji[i]) && ((492 - 411) >= chengji[i])) {
            point[i] = 3.0;
        }
        else if (((421 - 346) <= chengji[i]) && (chengji[i] <= (175 - 98))) {
            point[i] = (227.7 - 225.0);
        }
        else if ((chengji[i] >= (614 - 542)) && (chengji[i] < 74)) {
            point[i] = 2.3;
        }
        else if ((chengji[i] >= (358 - 290)) && (chengji[i] <= (396 - 325))) {
            point[i] = (810.0 - 808.0);
        }
        else if ((chengji[i] >= (175 - 111)) && (chengji[i] <= 67)) {
            point[i] = (146.5 - 145.0);
        }
        else if ((chengji[i] >= (285 - 225)) && (chengji[i] <= (634 - 571))) {
            point[i] = 1.0;
        }
        else {
            point[i] = (76 - 76);
        }
        t += point[i] * xuefen[i];
    }
    GPA = 1.0 * t / s;
    printf ("%.2f", GPA);
    return 0;
}

