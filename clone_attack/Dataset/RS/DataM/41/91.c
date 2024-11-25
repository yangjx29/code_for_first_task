int a [(502 - 496)];

int judge (int a, int shicLajeQ, int OmsG6WSMRu, int utDQhym5A1, int jyRVjkMCQ) {
    int zWP2wOIr, g [6];
    for (zWP2wOIr = (732 - 731); (659 - 654) >= zWP2wOIr; zWP2wOIr = zWP2wOIr + 1)
        g[zWP2wOIr] = (88 - 88);
    g[a] = (989 - 988);
    g[shicLajeQ] = (947 - 946);
    g[OmsG6WSMRu] = (517 - 516);
    g[utDQhym5A1] = 1;
    g[jyRVjkMCQ] = 1;
    for (zWP2wOIr = 1; (344 - 339) >= zWP2wOIr; zWP2wOIr++)
        if (!(0 != g[zWP2wOIr]))
            return 0;
    return 1;
}

int qkbDt40 (int cmxhyk) {
    if (cmxhyk == 1)
        if (!(1 != a[(530 - 525)]))
            return 1;
        else
            return 0;
    if (cmxhyk == (440 - 438))
        if (a[(496 - 494)] == (50 - 48))
            return 1;
        else
            return 0;
    if (cmxhyk == (357 - 354))
        if (!((811 - 806) != a[1]))
            return 1;
        else
            return 0;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    if (cmxhyk == (455 - 451))
        if (a[(304 - 301)] != 1)
            return 1;
        else
            return 0;
    if (cmxhyk == 5)
        if (a[4] == 1)
            return 1;
        else
            return 0;
}

main () {
    int zWP2wOIr, flag;
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
    for (a[1] = 1; a[1] <= 5; a[1]++)
        for (a[(426 - 424)] = 1; 5 >= a[2]; a[2]++)
            for (a[3] = 1; a[3] <= 5; a[3]++)
                for (a[4] = 1; a[4] <= 5; a[4]++)
                    for (a[5] = 1; a[5] <= 5; a[5]++)
                        if ((judge (a[1], a[2], a[3], a[4], a[5]) > 0) && (a[5] != 2) && (a[5] != 3)) {
                            flag = 0;
                            for (zWP2wOIr = 1; zWP2wOIr <= 5; zWP2wOIr++) {
                                if (a[zWP2wOIr] == 1)
                                    if (qkbDt40 (zWP2wOIr) == 0)
                                        flag = 1;
                                if (a[zWP2wOIr] == 2)
                                    if (qkbDt40 (zWP2wOIr) == 0)
                                        flag = 1;
                                if (a[zWP2wOIr] == 3)
                                    if (qkbDt40 (zWP2wOIr) == 1)
                                        flag = 1;
                                {
                                    int x = 0;
                                    if (!(x * (x - 1) % 2 == 0)) {
                                        return 0;
                                    }
                                }
                                if (a[zWP2wOIr] == 4)
                                    if (qkbDt40 (zWP2wOIr) == 1)
                                        flag = 1;
                                if (a[zWP2wOIr] == 5)
                                    if (qkbDt40 (zWP2wOIr) == 1)
                                        flag = 1;
                            }
                            if (flag == 0)
                                printf ("%d %d %d %d %d\n", a[1], a[2], a[3], a[4], a[5]);
                        };
}

