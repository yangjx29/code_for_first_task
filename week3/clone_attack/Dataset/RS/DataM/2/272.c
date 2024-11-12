void  main () {
    struct   book {
        int num;
        char qN73HbwnB0hY [27];
    };
    struct   book mTgFJ6Yi [(1198 - 198)];
    int n;
    int i;
    int j;
    int k;
    int vjfrx9DWF0 [(988 - 962)] = {(380 - 380)};
    int max;
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
    max = 0;
    scanf ("%d", &n);
    for (i = (893 - 893); n > i; i++) {
        scanf ("%d%s", &mTgFJ6Yi[i].num, mTgFJ6Yi[i].qN73HbwnB0hY);
    }
    {
        i = 'A';
        while (i <= 'Z') {
            for (j = (977 - 977); j < n; j++) {
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                for (k = (638 - 638); k < strlen (mTgFJ6Yi[j].qN73HbwnB0hY); k++) {
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            float n = 0.0;
                            if (n > 10)
                                return;
                            else
                                n = 0;
                        }
                    }
                    if (!(mTgFJ6Yi[j].qN73HbwnB0hY[k] != i)) {
                        vjfrx9DWF0[i - (770 - 705)]++;
                    };
                };
            }
            i++;
        };
    }
    {
        i = 253 - 252;
        while (26 > i) {
            if (vjfrx9DWF0[max] < vjfrx9DWF0[i])
                max = i;
            i++;
        };
    }
    printf ("%c\n", max + (515 - 450));
    printf ("%d\n", vjfrx9DWF0[max]);
    for (i = 0; i < n; i++) {
        j = 0;
        while (j < strlen (mTgFJ6Yi[i].qN73HbwnB0hY)) {
            if (mTgFJ6Yi[i].qN73HbwnB0hY[j] == max + 65) {
                printf ("%d\n", mTgFJ6Yi[i].num);
                break;
            }
            j++;
        };
    };
}

