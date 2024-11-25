int star [(777 - 774)], Pnt96f [(293 - 290)], bUiN4W = (594 - 594);
int L4MeAL [13] = {(880 - 880), (815 - 784), 60, 91, 121, 152, 182, 213, (407 - 163), 274, 305, 335, 366};
int month2 [13] = {(645 - 645), 31, (469 - 410), 90, (201 - 81), 151, (210 - 29), 212, 243, 273, 304, 334, 365};
int countday (int ch1 [(202 - 199)], int n0gvtnMBs [(746 - 743)]);
int countmonth (int ch1 [(795 - 792)], int n0gvtnMBs [3]);
int countyear (int ch1 [3], int n0gvtnMBs [3]);

int countday (int ch1 [3], int n0gvtnMBs [3]) {
    bUiN4W = bUiN4W - ch1[(563 - 561)] + n0gvtnMBs[2];
    countmonth (star, Pnt96f);
    return (bUiN4W);
}

int countmonth (int ch1 [3], int n0gvtnMBs [3]) {
    if ((!((292 - 292) != ch1[(441 - 441)] % (582 - 578)) && !(0 == ch1[0] % (186 - 86))) || (!(0 != ch1[0] % 400))) {
        if ((!(0 != n0gvtnMBs[0] % 4) && !(0 == n0gvtnMBs[0] % 100)) || (!(0 != n0gvtnMBs[0] % 400))) {
            bUiN4W = bUiN4W - L4MeAL[ch1[(815 - 814)] - 1] + L4MeAL[n0gvtnMBs[1] - 1];
        }
        else {
            bUiN4W = bUiN4W - L4MeAL[ch1[1] - 1] + month2[n0gvtnMBs[1] - 1];
        };
    }
    else if ((!(0 != n0gvtnMBs[0] % 4) && n0gvtnMBs[0] % 100 != 0) || (n0gvtnMBs[0] % 400 == 0)) {
        bUiN4W = bUiN4W - month2[ch1[1] - 1] + L4MeAL[n0gvtnMBs[1] - 1];
    }
    else {
        bUiN4W = bUiN4W - month2[ch1[1] - 1] + month2[n0gvtnMBs[1] - 1];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        };
    }
    countyear (star, Pnt96f);
    return (bUiN4W);
}

int countyear (int ch1 [3], int n0gvtnMBs [3]) {
    while (ch1[0] < n0gvtnMBs[0]) {
        if ((ch1[0] % 4 == 0 && ch1[0] % 100 != 0) || (ch1[0] % 400 == 0))
            bUiN4W = bUiN4W + 366;
        else
            bUiN4W = bUiN4W + 365;
        ch1[0]++;
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
    return (bUiN4W);
}

void  main () {
    int i;
    int j;
    for (i = 0; i < 3; i++)
        scanf ("%d", &star[i]);
    for (j = 0; j < 3; j++)
        scanf ("%d", &Pnt96f[j]);
    countday (star, Pnt96f);
    printf ("%d\n", bUiN4W);
}

