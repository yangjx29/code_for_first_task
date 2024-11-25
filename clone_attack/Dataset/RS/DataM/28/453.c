void  main () {
    char S6Gi15ZCTUd0 [1000];
    int dcCp3b;
    int t1CUhYg;
    int bIHYduG7z5a;
    int l5iUJthel;
    int WozW28yOurS;
    dcCp3b = (284 - 284);
    t1CUhYg = (71 - 71);
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
    bIHYduG7z5a = 0;
    int xFxt5Y [300];
    {
        l5iUJthel = 0;
        while (1) {
            scanf ("%c", &S6Gi15ZCTUd0[l5iUJthel]);
            if (!('\n' != S6Gi15ZCTUd0[l5iUJthel]))
                break;
            else
                t1CUhYg = t1CUhYg + 1;
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
            l5iUJthel = l5iUJthel + 1;
        };
    }
    {
        l5iUJthel = 0;
        while (300 > l5iUJthel) {
            xFxt5Y[l5iUJthel] = 0;
            l5iUJthel++;
        };
    }
    for (l5iUJthel = 0; t1CUhYg > l5iUJthel; l5iUJthel = l5iUJthel + 1) {
        if (!(' ' != S6Gi15ZCTUd0[l5iUJthel])) {
            bIHYduG7z5a = 0;
            continue;
        }
        else if (bIHYduG7z5a == 0) {
            bIHYduG7z5a = 1;
            dcCp3b = dcCp3b + 1;
        }
        xFxt5Y[dcCp3b - 1]++;
    }
    for (l5iUJthel = 0; l5iUJthel < dcCp3b - 1; l5iUJthel = l5iUJthel + 1)
        printf ("%d,", xFxt5Y[l5iUJthel]);
    printf ("%d", xFxt5Y[l5iUJthel]);
}

