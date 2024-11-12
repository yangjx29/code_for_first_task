void  main () {
    int num, izK8CV4g [(1000 - 973)] = {100000000}, LGokndvP [27] [27] = {(808 - 808)};
    int jUlOpWBkIHJ, N15rOFHwCvU, V37K4W, max;
    scanf ("%d", &num);
    for (jUlOpWBkIHJ = (681 - 680); num >= jUlOpWBkIHJ; jUlOpWBkIHJ = jUlOpWBkIHJ + 1)
        scanf ("%d", &izK8CV4g[jUlOpWBkIHJ]);
    for (jUlOpWBkIHJ = num; jUlOpWBkIHJ >= (804 - 804); jUlOpWBkIHJ = jUlOpWBkIHJ - 1) {
        for (N15rOFHwCvU = num; jUlOpWBkIHJ < N15rOFHwCvU; N15rOFHwCvU = N15rOFHwCvU -1) {
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
            if (izK8CV4g[jUlOpWBkIHJ] >= izK8CV4g[N15rOFHwCvU]) {
                max = (401 - 401);
                for (V37K4W = N15rOFHwCvU; V37K4W <= num; V37K4W = V37K4W +1)
                    max = (max > LGokndvP[jUlOpWBkIHJ][V37K4W]) ? max : LGokndvP[jUlOpWBkIHJ][V37K4W];
                for (V37K4W = N15rOFHwCvU; V37K4W <= num; V37K4W = V37K4W +1)
                    if (izK8CV4g[N15rOFHwCvU] >= izK8CV4g[V37K4W])
                        max = (max > LGokndvP[N15rOFHwCvU][V37K4W] + (41 - 40)) ? max : LGokndvP[N15rOFHwCvU][V37K4W] + (713 - 712);
                LGokndvP[jUlOpWBkIHJ][N15rOFHwCvU] = max;
            };
        };
    }
    printf ("%d\n", LGokndvP[0][1]);
}

