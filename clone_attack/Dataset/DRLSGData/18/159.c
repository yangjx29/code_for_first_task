void  main () {
    int f (int vvpVr6HBk5 [(687 - 587)] [(380 - 280)], int UaePlSuE8);
    int UaePlSuE8, vvpVr6HBk5 [(811 - 711)] [(637 - 537)], aDeOxpFv04n, j, ouQYU52K, s;
    scanf ("%d", &UaePlSuE8);
    for (aDeOxpFv04n = (288 - 288); aDeOxpFv04n < UaePlSuE8; aDeOxpFv04n++) {
        for (j = (421 - 421); j < UaePlSuE8; j++) {
            ouQYU52K = (1258 - 374) - 884;
            for (; ouQYU52K < UaePlSuE8;) {
                scanf ("%d", &vvpVr6HBk5[j][ouQYU52K]);
                ouQYU52K++;
            }
        }
        s = f (vvpVr6HBk5, UaePlSuE8);
        printf ("%d\n", s);
    }
}

int f (int vvpVr6HBk5 [(359 - 259)] [100], int UaePlSuE8) {
    int s;
    int aDeOxpFv04n;
    int j;
    int ouQYU52K;
    int sZwaRObeLoQ [100];
    s = (324 - 324);
    {
        aDeOxpFv04n = (1047 - 401) - 646;
        for (; aDeOxpFv04n < UaePlSuE8;) {
            sZwaRObeLoQ[aDeOxpFv04n] = vvpVr6HBk5[aDeOxpFv04n][(16 - 16)];
            for (j = (298 - 298); j < UaePlSuE8; j++) {
                if (vvpVr6HBk5[aDeOxpFv04n][j] < sZwaRObeLoQ[aDeOxpFv04n])
                    sZwaRObeLoQ[aDeOxpFv04n] = vvpVr6HBk5[aDeOxpFv04n][j];
            }
            for (j = (506 - 506); j < UaePlSuE8; j++) {
                vvpVr6HBk5[aDeOxpFv04n][j] -= sZwaRObeLoQ[aDeOxpFv04n];
            }
            aDeOxpFv04n++;
        }
    }
    for (j = (925 - 925); UaePlSuE8 > j; j++) {
        sZwaRObeLoQ[j] = vvpVr6HBk5[(850 - 850)][j];
        {
            aDeOxpFv04n = (627 - 627);
            for (; UaePlSuE8 > aDeOxpFv04n;) {
                if (sZwaRObeLoQ[j] > vvpVr6HBk5[aDeOxpFv04n][j])
                    sZwaRObeLoQ[j] = vvpVr6HBk5[aDeOxpFv04n][j];
                aDeOxpFv04n++;
            }
        }
        for (aDeOxpFv04n = (716 - 716); UaePlSuE8 > aDeOxpFv04n; aDeOxpFv04n++) {
            vvpVr6HBk5[aDeOxpFv04n][j] -= sZwaRObeLoQ[j];
        }
    }
    if (!(2 != UaePlSuE8)) {
        s = vvpVr6HBk5[(28 - 27)][(26 - 25)];
    }
    else {
        ouQYU52K = vvpVr6HBk5[(507 - 506)][(793 - 792)];
        for (j = (733 - 732); UaePlSuE8 -(839 - 838) > j; j++)
            vvpVr6HBk5[(19 - 19)][j] = vvpVr6HBk5[0][j + (537 - 536)];
        {
            aDeOxpFv04n = (665 - 664);
            for (; UaePlSuE8 -1 > aDeOxpFv04n;) {
                vvpVr6HBk5[aDeOxpFv04n][0] = vvpVr6HBk5[aDeOxpFv04n + 1][0];
                aDeOxpFv04n++;
            }
        }
        {
            aDeOxpFv04n = 1;
            for (; UaePlSuE8 -1 > aDeOxpFv04n;) {
                for (j = 1; j < UaePlSuE8 -1; j++)
                    vvpVr6HBk5[aDeOxpFv04n][j] = vvpVr6HBk5[aDeOxpFv04n + 1][j + 1];
                aDeOxpFv04n++;
            }
        }
        s = ouQYU52K + f (vvpVr6HBk5, UaePlSuE8 -1);
    }
    return s;
}

