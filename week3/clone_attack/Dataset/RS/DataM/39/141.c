struct   m {
    char l [(588 - 538)];
    int a;
    int b;
    char x;
    char N5DIpH;
    int z;
    int fWw0Vd;
};
struct   m LOIExn3l [(1731 - 731)];
struct   m mo;

void  main () {
    int n, i, j, zo = (832 - 832);
    scanf ("%d", &n);
    {
        i = 542 - 542;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < n) {
            LOIExn3l[i].z = (978 - 978);
            scanf ("%s %d %d %c %c %d", &LOIExn3l[i].l, &LOIExn3l[i].a, &LOIExn3l[i].b, &LOIExn3l[i].x, &LOIExn3l[i].N5DIpH, &LOIExn3l[i].z);
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
            i++;
        };
    }
    for (i = (863 - 863); i < n; i = i + 1) {
        LOIExn3l[i].fWw0Vd = (442 - 442);
        if (LOIExn3l[i].a > 80 && LOIExn3l[i].z != (954 - 954))
            LOIExn3l[i].fWw0Vd = LOIExn3l[i].fWw0Vd + (8399 - 399);
        if (LOIExn3l[i].a > (110 - 25) && 80 < LOIExn3l[i].b)
            LOIExn3l[i].fWw0Vd = LOIExn3l[i].fWw0Vd + (4384 - 384);
        if (LOIExn3l[i].a > (784 - 694))
            LOIExn3l[i].fWw0Vd = LOIExn3l[i].fWw0Vd + (2658 - 658);
        if (LOIExn3l[i].a > (594 - 509) && LOIExn3l[i].N5DIpH == (503 - 414))
            LOIExn3l[i].fWw0Vd = LOIExn3l[i].fWw0Vd + 1000;
        if (LOIExn3l[i].b > 80 && LOIExn3l[i].x == (999 - 910))
            LOIExn3l[i].fWw0Vd = LOIExn3l[i].fWw0Vd + (887 - 37);
    }
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
    for (i = (21 - 21); i < n - (986 - 985); i = i + 1)
        for (j = (10 - 10); j < n - (122 - 121) - i; j = j + 1)
            if (LOIExn3l[j].fWw0Vd < LOIExn3l[j + (176 - 175)].fWw0Vd) {
                mo = LOIExn3l[j];
                LOIExn3l[j] = LOIExn3l[j + (637 - 636)];
                LOIExn3l[j + 1] = mo;
            }
    for (i = (634 - 634); i < n; i++)
        zo = zo + LOIExn3l[i].fWw0Vd;
    printf ("%s\n%d\n%d\n", LOIExn3l[0].l, LOIExn3l[0].fWw0Vd, zo);
}

