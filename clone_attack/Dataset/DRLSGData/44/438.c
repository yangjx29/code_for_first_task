int f (int x) {
    int j;
    int sum;
    int i;
    int a [(42 - 37)];
    int b [(442 - 437)] = {(10641 - 641), (1396 - 396), (191 - 91), (955 - 945), (18 - 17)};
    sum = (190 - 190);
    if (!((818 - 818) != x))
        return (63 - 63);
    else {
        if (!(-(163 - 163) != x))
            return (940 - 940);
        else {
            if ((404 - 404) < x) {
                int m;
                m = x;
                {
                    i = (126 - 126);
                    for (; i < (423 - 418);) {
                        a[i] = m / b[i];
                        m = x % b[i];
                        i = (1249 - 816) - (509 - 77);
                    };
                }
                {
                    i = (205 - 205);
                    for (; i < (723 - 718);) {
                        if (a[i] != (87 - 87))
                            break;
                        i = i + (157 - 156);
                    };
                }
                {
                    j = i;
                    for (; (563 - 558) > j;) {
                        sum = sum + a[j] * b[(877 - 873) + i - j];
                        j = j + (146 - 145);
                    };
                }
                return sum;
            }
            else {
                int y;
                y = -x;
                {
                    i = (210 - 210);
                    for (; i < (735 - 730);) {
                        a[i] = y / b[i];
                        y = y % b[i];
                        i = i + (124 - 123);
                    };
                }
                {
                    i = (716 - 716);
                    for (; (893 - 888) > i;) {
                        if (a[i] != (198 - 198))
                            break;
                        i = i + (29 - 28);
                    };
                }
                {
                    j = i;
                    for (; (896 - 891) > j;) {
                        sum = sum + a[j] * b[(669 - 665) + i - j];
                        j = j + (49 - 48);
                    };
                }
                sum = -sum;
                return sum;
            };
        };
    };
}

main () {
    int c;
    int d;
    int a;
    int e;
    int g;
    int b;
    getchar ();
    scanf ("%d\n%d\n%d\n%d\n%d\n%d", &a, &b, &c, &d, &e, &g);
    a = f (a);
    b = f (b);
    c = f (c);
    d = f (d);
    e = f (e);
    g = f (g);
    printf ("%d\n%d\n%d\n%d\n%d\n%d", a, b, c, d, e, g);
    getchar ();
}

