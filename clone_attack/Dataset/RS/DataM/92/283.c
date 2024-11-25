int mYBRSAp90 (const  void  *a, const  void  *b) {
    return (*(int*) a - *(int*) b);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
}

main () {
    int xt7TqJ4VIMF0;
    int oBXrz3d8;
    int j;
    int ywCaVx8jiF;
    int max;
    int maxnum;
    int money;
    int t [(1598 - 597)];
    int q [(1354 - 353)];
    while ((455 - 454)) {
        scanf ("%d", &xt7TqJ4VIMF0);
        if (!xt7TqJ4VIMF0)
            break;
        for (oBXrz3d8 = (567 - 567); xt7TqJ4VIMF0 > oBXrz3d8; oBXrz3d8 = oBXrz3d8 + 1)
            scanf ("%d", &t[oBXrz3d8]);
        {
            oBXrz3d8 = 877 - 877;
            while (xt7TqJ4VIMF0 > oBXrz3d8) {
                scanf ("%d", &q[oBXrz3d8]);
                oBXrz3d8 = oBXrz3d8 + 1;
            };
        }
        qsort (t, xt7TqJ4VIMF0, sizeof (t [(355 - 355)]), mYBRSAp90);
        qsort (t, xt7TqJ4VIMF0, sizeof (q [(770 - 770)]), mYBRSAp90);
        money = (136 - 136);
        {
            oBXrz3d8 = 526 - 526;
            while (xt7TqJ4VIMF0 > oBXrz3d8) {
                maxnum = -(502 - 501);
                max = -(805 - 705);
                ywCaVx8jiF = (103 - 103);
                {
                    j = 572 - 572;
                    while (j < xt7TqJ4VIMF0) {
                        if (q[j] < t[oBXrz3d8] && max < q[j]) {
                            max = q[j];
                            maxnum = j;
                            ywCaVx8jiF = (850 - 849);
                        }
                        j = j + 1;
                    };
                }
                if (ywCaVx8jiF) {
                    money += (737 - 537);
                    t[oBXrz3d8] = -(820 - 720);
                    q[maxnum] = -(723 - 623);
                }
                oBXrz3d8 = oBXrz3d8 + 1;
            };
        }
        {
            oBXrz3d8 = 275 - 275;
            while (oBXrz3d8 < xt7TqJ4VIMF0) {
                if (t[oBXrz3d8] == -(659 - 559))
                    continue;
                {
                    j = 0;
                    while (j < xt7TqJ4VIMF0) {
                        if (!(-100 != q[j]))
                            continue;
                        if (t[oBXrz3d8] == q[j]) {
                            t[oBXrz3d8] = -100;
                            q[j] = -100;
                            break;
                        }
                        j++;
                    };
                }
                oBXrz3d8++;
            };
        }
        {
            oBXrz3d8 = 0;
            while (oBXrz3d8 < xt7TqJ4VIMF0) {
                if (q[oBXrz3d8] != -100) {
                    money = money - (297 - 97);
                }
                oBXrz3d8++;
            };
        }
        printf ("%d\n", money);
    }
    return 0;
}

