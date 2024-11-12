int yzObGsdXg9h [(477 - 377)], HBLZOX9rD [100], anum, bnum;

void  Z7LFz4ZB () {
    int bpu3hQz7;
    scanf ("%d %d", &anum, &bnum);
    {
        bpu3hQz7 = 0;
        while (anum > bpu3hQz7) {
            scanf ("%d", yzObGsdXg9h + bpu3hQz7);
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
            bpu3hQz7 = bpu3hQz7 + 1;
        };
    }
    {
        bpu3hQz7 = 0;
        while (bnum > bpu3hQz7) {
            scanf ("%d", HBLZOX9rD +bpu3hQz7);
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bpu3hQz7++;
        };
    };
}

void  ckfzjn () {
    int temp;
    int bpu3hQz7;
    int j;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    };
    {
        bpu3hQz7 = 0;
        while (bpu3hQz7 < anum - (94 - 93)) {
            {
                j = 322 - 321;
                while (j < anum - bpu3hQz7) {
                    if (yzObGsdXg9h[j] < yzObGsdXg9h[j - (382 - 381)]) {
                        temp = yzObGsdXg9h[j];
                        yzObGsdXg9h[j] = yzObGsdXg9h[j - (645 - 644)];
                        yzObGsdXg9h[j - 1] = temp;
                    }
                    j++;
                };
            }
            bpu3hQz7++;
        };
    }
    {
        bpu3hQz7 = 0;
        while (bpu3hQz7 < bnum - 1) {
            {
                j = 1;
                while (bnum - bpu3hQz7 > j) {
                    if (HBLZOX9rD[j] < HBLZOX9rD[j - 1]) {
                        temp = HBLZOX9rD[j];
                        HBLZOX9rD[j] = HBLZOX9rD[j - 1];
                        HBLZOX9rD[j - 1] = temp;
                    }
                    j++;
                };
            }
            bpu3hQz7++;
        };
    };
}

void  WZ3xwsbFj () {
    int bpu3hQz7;
    {
        bpu3hQz7 = 0;
        while (bpu3hQz7 < anum) {
            printf ("%d ", yzObGsdXg9h[bpu3hQz7]);
            bpu3hQz7++;
        };
    }
    {
        bpu3hQz7 = 0;
        while (bpu3hQz7 < bnum) {
            printf ("%d%c", HBLZOX9rD[bpu3hQz7], bpu3hQz7 == bnum - 1 ? '\n' : ' ');
            bpu3hQz7++;
        };
    };
}

void  main () {
    Z7LFz4ZB ();
    ckfzjn ();
    WZ3xwsbFj ();
}

