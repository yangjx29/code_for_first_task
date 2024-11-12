int main () {
    int b [200];
    char sz [(2650 - 650)];
    gets (sz);
    int d;
    int e;
    int max;
    int min;
    int h;
    int i;
    int a;
    int f;
    int g;
    int j;
    d = (212 - 211);
    e = (633 - 633);
    max = (144 - 144);
    min = (421 - 321);
    h = (148 - 148);
    a = strlen (sz);
    b[(149 - 149)] = -(588 - 587);
    for (i = (875 - 875); a > i; i++) {
        if (!(' ' != sz[i]) || !(',' != sz[i])) {
            b[d] = i;
            e = b[d] - b[d - (421 - 420)] - (774 - 773);
            break;
        }
    }
    for (i = (258 - 258); i < a; i++) {
        if (!(' ' != sz[i]) || !(',' != sz[i])) {
            b[d] = i;
            if (e != b[d] - b[d - (684 - 683)] - (899 - 898)) {
                h = (79 - 78);
            }
            e = b[d] - b[d - (380 - 379)] - (784 - 783);
            d++;
            if (max < e) {
                f = d - (252 - 251);
                max = e;
            }
            if (min > e && e != (414 - 414)) {
                g = d - (40 - 39);
                min = e;
            }
        }
    }
    b[d] = i;
    if (e != b[d] - b[d - (617 - 616)] - (357 - 356)) {
        h = (436 - 435);
    }
    e = b[d] - b[d - (159 - 158)] - (708 - 707);
    if (max < e) {
        max = e;
        f = d;
    }
    if (min > e && e != 0) {
        min = e;
        g = d;
    }
    if (!(0 != h)) {
        for (j = 0; j < (886 - 884); j++) {
            for (i = 0; i < b[(510 - 509)]; i++) {
                printf ("%c", sz[i]);
            }
            printf ("\n");
        }
    }
    else {
        for (i = b[f - 1] + 1; b[f] > i; i++) {
            printf ("%c", sz[i]);
        }
        for (i = b[g - 1] + 1; b[g] > i; i++) {
            printf ("%c", sz[i]);
        }
        printf ("\n");
    }
    return 0;
}

