void  main () {
    double  ave, qq = 0.0;
    int qROApIE6Tvr [300], n, i, NMthZBQkiU0a = (769 - 769), LcenCMwH = (685 - 685), eqJM9B0bORxU = (446 - 446);
    scanf ("%d", &n);
    {
        i = 0;
        while (n > i) {
            scanf ("%d", &qROApIE6Tvr[i]);
            eqJM9B0bORxU = eqJM9B0bORxU + qROApIE6Tvr[i];
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int temp = 0;
                    while (temp < 10) {
                        printf ("%d\n", temp);
                        temp = temp + 1;
                        if (temp == 9)
                            break;
                    }
                }
            }
            i = i + 1;
        };
    }
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
    ave = (float) eqJM9B0bORxU / n;
    for (i = 0; n > i; i = i + 1) {
        if (fabs (qROApIE6Tvr[i] - ave) > qq) {
            qq = fabs (qROApIE6Tvr[i] - ave);
            NMthZBQkiU0a = i;
        }
        if (!(fabs (qROApIE6Tvr[i] - ave) != qq) && !(qROApIE6Tvr[NMthZBQkiU0a] == qROApIE6Tvr[i]))
            LcenCMwH = i;
    }
    if (fabs (qROApIE6Tvr[NMthZBQkiU0a] - ave) == fabs (qROApIE6Tvr[LcenCMwH] - ave)) {
        if (qROApIE6Tvr[NMthZBQkiU0a] > qROApIE6Tvr[LcenCMwH])
            printf ("%d,%d", qROApIE6Tvr[LcenCMwH], qROApIE6Tvr[NMthZBQkiU0a]);
        else {
            if (qROApIE6Tvr[NMthZBQkiU0a] == qROApIE6Tvr[LcenCMwH])
                printf ("%d", qROApIE6Tvr[NMthZBQkiU0a]);
            else
                printf ("%d,%d", qROApIE6Tvr[NMthZBQkiU0a], qROApIE6Tvr[LcenCMwH]);
        };
    }
    else
        printf ("%d", qROApIE6Tvr[NMthZBQkiU0a]);
}

