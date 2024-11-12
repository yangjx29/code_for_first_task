struct   HaHa {
    int x, y, z [(805 - 803)] [1000], g [2000];
};
struct   HaHa scan () {
    struct   HaHa hehe;
    int i, j;
    scanf ("%d%d", &hehe.x, &hehe.y);
    for (i = (520 - 520); i < hehe.x; i = i + 1)
        scanf ("%d", &hehe.z[(349 - 349)][i]);
    {
        j = 582 - 582;
        while (j < hehe.y) {
            scanf ("%d", &hehe.z[(645 - 644)][j]);
            j = j + 1;
        };
    }
    return (hehe);
}

struct   HaHa line (struct   HaHa yahoo) {
    struct   HaHa yahoo1;
    int i;
    int temp;
    int j;
    for (i = (818 - 818); i < yahoo.x; i = i + 1) {
        j = i;
        while (j < yahoo.x) {
            if (yahoo.z[(736 - 736)][j] < yahoo.z[(487 - 487)][i]) {
                temp = yahoo.z[(269 - 269)][i];
                yahoo.z[(711 - 711)][i] = yahoo.z[0][j];
                yahoo.z[0][j] = temp;
            }
            j++;
        };
    }
    {
        i = 0;
        while (yahoo.y > i) {
            for (j = i; yahoo.y > j; j = j + 1) {
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
                if (yahoo.z[(58 - 57)][i] > yahoo.z[(947 - 946)][j]) {
                    temp = yahoo.z[(506 - 505)][i];
                    yahoo.z[1][i] = yahoo.z[1][j];
                    yahoo.z[1][j] = temp;
                };
            }
            i = i + 1;
        };
    }
    yahoo1 = yahoo;
    return (yahoo1);
}

struct   HaHa combine (struct   HaHa xx) {
    int i;
    struct   HaHa xx1;
    for (i = 0; xx.x > i; i = i + 1) {
        xx.g[i] = xx.z[0][i];
    }
    for (i = 0; i < xx.y; i++) {
        xx.g[i + xx.x] = xx.z[1][i];
    }
    xx1 = xx;
    return (xx1);
}

void  print (struct   HaHa xxx) {
    int i;
    for (i = 0; i < xxx.x + xxx.y - 1; i++) {
        printf ("%d ", xxx.g[i]);
    }
    printf ("%d", xxx.g[xxx.x + xxx.y - 1]);
}

void  main () {
    print (combine (line (scan ())));
}

