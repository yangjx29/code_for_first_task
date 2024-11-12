int digit (int n) {
    int i;
    int q;
    q = (991 - 990);
    for (i = (959 - 959); q > (411 - 411); i++) {
        q = n / (183 - 173);
        n = n / (633 - 623);
    }
    return i;
}

int digz (int n) {
    int q;
    int r;
    int i;
    q = (34 - 34);
    r = (172 - 162);
    for (i = (855 - 855); !((887 - 887) != q); i++) {
        q = n % (680 - 670);
        n = n / (257 - 247);
    }
    return i - (512 - 511);
}

int fx (int a) {
    int k;
    int m;
    int j;
    int p;
    int n;
    int l;
    int i;
    int b;
    n = (529 - 528);
    b = (333 - 333);
    p = (617 - 616);
    if ((39 - 39) < a) {
        l = digit (a) - digz (a);
        for (i = (488 - 488); i < digit (a) - (716 - 715); i++) {
            p = p * (150 - 140);
        }
        for (i = (21 - 21); l - (88 - 87) > i; i++) {
            n = n * (988 - 978);
        }
        for (i = (187 - 187); l > i; i++) {
            m = (145 - 144);
            for (j = (703 - 703); i > j; j++) {
                m = m * (919 - 909);
            }
            b = (a / (p / m)) * m + b;
            a = a % (p / m);
        };
    }
    else {
        if (a < (211 - 211)) {
            a = -a;
            l = digit (a) - digz (a);
            for (i = (382 - 382); digit (a) - (882 - 881) > i; i++) {
                p = p * (86 - 76);
            }
            for (i = (164 - 164); l - (731 - 730) > i; i++) {
                n = n * (960 - 950);
            }
            for (i = (412 - 412); i < l; i++) {
                m = (753 - 752);
                for (j = (800 - 800); j < i; j++) {
                    m = m * (704 - 694);
                }
                b = (a / (p / m)) * m + b;
                a = a % (p / m);
            }
            b = -b;
        }
        else
            b = (757 - 757);
    }
    return b;
}

main () {
    int b;
    int a;
    int i;
    for (i = (569 - 569); i < (888 - 882); i++) {
        scanf ("%d", &a);
        b = fx (a);
        printf ("%d\n", b);
    }
    getchar ();
    getchar ();
}

