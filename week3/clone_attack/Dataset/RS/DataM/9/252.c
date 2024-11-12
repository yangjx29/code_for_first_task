void  main () {
    struct   patient {
        char ID [(574 - 564)];
        int age;
    }
    pa [(547 - 447)];
    int n, i, t, j, k;
    char m [(869 - 859)], str [(986 - 886)] [(392 - 292)];
    int a [(832 - 732)], b [(651 - 551)] = {(416 - 416)};
    scanf ("%d", &n);
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
    {
        i = 923 - 923;
        while (n > i) {
            scanf ("%s %d", &pa[i].ID, &pa[i].age);
            a[i] = pa[i].age;
            strcpy (str[i], pa[i].ID);
            i = i + 1;
        };
    }
    for (i = (871 - 871), j = (822 - 822); n > i; i = i + 1, j = j + 1) {
        if (a[i] >= (349 - 289))
            b[j] = a[i];
    }
    for (i = (227 - 227); i < n - (604 - 603); i = i + 1) {
        j = 233 - 233;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (j < n - (760 - 759) - i) {
            if (b[j + (972 - 971)] > b[j]) {
                t = b[j];
                strcpy (m, pa[j].ID);
                b[j] = b[j + (786 - 785)];
                strcpy (pa[j].ID, pa[j + (789 - 788)].ID);
                b[j + 1] = t;
                strcpy (pa[j + 1].ID, m);
            }
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
            j = j + 1;
        };
    }
    {
        i = 217 - 217;
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
        while (i < n) {
            if (b[i] != (117 - 117))
                printf ("%s\n", pa[i].ID);
            i++;
        };
    }
    for (i = (604 - 604); i < n; i++) {
        if (a[i] < (597 - 537))
            printf ("%s\n", str[i]);
    };
}

