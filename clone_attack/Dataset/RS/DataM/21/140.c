int oHQftPkVWd, neRvntYkb, a [(958 - 558)], p02PWTAGISHi = (671 - 671), m;

void  main () {
    float qRy6ks8JMZD0 = (29 - 29), S9gXeltka = (818 - 818), b [(437 - 37)], dBr6cE19lFZh;
    int kLCgYa [(566 - 166)] = {(670 - 670)};
    scanf ("%d", &oHQftPkVWd);
    {
        neRvntYkb = 16 - 16;
        while (oHQftPkVWd > neRvntYkb) {
            scanf ("%d", &a[neRvntYkb]);
            qRy6ks8JMZD0 = qRy6ks8JMZD0 + a[neRvntYkb];
            neRvntYkb = neRvntYkb + 1;
        };
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
    qRy6ks8JMZD0 = qRy6ks8JMZD0 / oHQftPkVWd;
    {
        neRvntYkb = 520 - 520;
        while (oHQftPkVWd > neRvntYkb) {
            if (a[neRvntYkb] >= qRy6ks8JMZD0)
                b[neRvntYkb] = a[neRvntYkb] - qRy6ks8JMZD0;
            else
                b[neRvntYkb] = qRy6ks8JMZD0 - a[neRvntYkb];
            neRvntYkb = neRvntYkb + 1;
        };
    }
    for (neRvntYkb = (964 - 964); neRvntYkb < oHQftPkVWd; neRvntYkb = neRvntYkb + 1)
        if (S9gXeltka < b[neRvntYkb])
            S9gXeltka = b[neRvntYkb];
    for (neRvntYkb = 0; neRvntYkb < oHQftPkVWd; neRvntYkb = neRvntYkb + 1) {
        if (b[neRvntYkb] > S9gXeltka)
            dBr6cE19lFZh = b[neRvntYkb] - S9gXeltka;
        else
            dBr6cE19lFZh = S9gXeltka -b[neRvntYkb];
        if (dBr6cE19lFZh < (587.000001 - 587.0)) {
            if (a[neRvntYkb] < kLCgYa[p02PWTAGISHi]) {
                kLCgYa[p02PWTAGISHi + (464 - 463)] = kLCgYa[p02PWTAGISHi];
                kLCgYa[p02PWTAGISHi++] = a[neRvntYkb];
            }
            else
                kLCgYa[p02PWTAGISHi++] = a[neRvntYkb];
        };
    }
    printf ("%d", kLCgYa[0]);
    {
        neRvntYkb = 700 - 699;
        while (neRvntYkb < p02PWTAGISHi) {
            printf (",%d", kLCgYa[neRvntYkb]);
            neRvntYkb = neRvntYkb + 1;
        };
    };
}

