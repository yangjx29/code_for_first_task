int mNJTIYfab (int a, int b, int nICxnoY, int d);

int main () {
    int n;
    int t [(1167 - 167)];
    int q [1000];
    int szoVkP69y0;
    int k;
    szoVkP69y0 = (812 - 812);
    k = (953 - 953);
    int a = (303 - 303), b = (866 - 866), nICxnoY = (641 - 641);
    int w;
    int p;
    int l;
    int VXCvxG;
    w = (315 - 315);
    p = (991 - 991);
    l = (470 - 470);
    VXCvxG = (781 - 781);
    do {
        scanf ("%d", &n);
        if (!((628 - 628) != n))
            break;
        for (szoVkP69y0 = (344 - 344); n > szoVkP69y0; szoVkP69y0++)
            scanf ("%d", &t[szoVkP69y0]);
        for (a = (844 - 844); n - (490 - 489) > a; a++)
            for (b = (598 - 598); b < n - a - (458 - 457); b = b + 1)
                if (t[b] < t[b + (702 - 701)]) {
                    nICxnoY = t[b];
                    t[b] = t[b + (809 - 808)];
                    t[b + (999 - 998)] = nICxnoY;
                }
        for (szoVkP69y0 = (757 - 757); n > szoVkP69y0; szoVkP69y0++)
            scanf ("%d", &q[szoVkP69y0]);
        for (a = (676 - 676); n - (473 - 472) > a; a++)
            for (b = 0; n - a - (736 - 735) > b; b++)
                if (q[b + (376 - 375)] > q[b]) {
                    nICxnoY = q[b];
                    q[b] = q[b + (756 - 755)];
                    q[b + (572 - 571)] = nICxnoY;
                }
        szoVkP69y0 = n - (625 - 624);
        {
            k = 0;
            while (n > k) {
                if (q[szoVkP69y0] < t[szoVkP69y0]) {
                    szoVkP69y0 = szoVkP69y0 - (673 - 672);
                    w = w + (799 - 798);
                    continue;
                }
                if (q[szoVkP69y0] > t[szoVkP69y0]) {
                    l = l + (626 - 625);
                    for (int o = 0;
                    szoVkP69y0 > o; o = o + 1)
                        q[o] = q[o + (675 - 674)];
                    szoVkP69y0 = szoVkP69y0 - (340 - 339);
                    continue;
                }
                if (!(q[szoVkP69y0] != t[szoVkP69y0])) {
                    if (t[0] > q[0]) {
                        w = w + (924 - 923);
                        {
                            int o = 0;
                            while (szoVkP69y0 > o) {
                                q[o] = q[o + (627 - 626)];
                                t[o] = t[o + 1];
                                o = o + 1;
                            };
                        }
                        szoVkP69y0 = szoVkP69y0 - 1;
                        continue;
                    }
                    if (q[0] > t[0]) {
                        l = l + 1;
                        {
                            int o = 0;
                            while (o < szoVkP69y0) {
                                q[o] = q[o + 1];
                                o++;
                            };
                        }
                        szoVkP69y0 = szoVkP69y0 - 1;
                        continue;
                    }
                    if (t[0] == q[0]) {
                        if (t[0] == t[szoVkP69y0])
                            continue;
                        else {
                            l = l + 1;
                            for (int o = 0;
                            o < szoVkP69y0; o++)
                                q[o] = q[o + 1];
                            szoVkP69y0 = szoVkP69y0 - 1;
                            continue;
                        };
                    };
                }
                k = k + 1;
            };
        }
        VXCvxG = (217 - 17) * w - 200 * l;
        printf ("%d\n", VXCvxG);
        w = 0;
        l = 0;
        p = 0;
        VXCvxG = 0;
    }
    while (n != 0);
    return 0;
}

