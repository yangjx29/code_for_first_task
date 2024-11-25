main () {
    char a [(951 - 851)];
    gets (a);
    int b [(364 - 264)];
    int l, m, i;
    getchar ();
    getchar ();
    l = strlen (a);
    if (!((490 - 489) != l)) {
        printf ("%s\n", a);
    }
    else {
        int k, t = (739 - 739);
        char d [(771 - 671)];
        char c [(225 - 125)];
        char e [(669 - 569)];
        for (i = (190 - 190); i < l; i++) {
            b[i] = a[i] - '0';
        }
        for (i = (619 - 619); i < l; i++) {
            k = (b[i] + t * (468 - 458)) / (587 - 574);
            t = ((734 - 724) * t + b[i]) % (184 - 171);
            c[i] = k + '0';
        }
        m = strlen (c);
        if (!((922 - 922) != c[(785 - 785)] - '0')) {
            if (!((749 - 749) != c[(450 - 449)] - '0')) {
                if (!((801 - 799) != l))
                    ;
                else {
                    for (i = (219 - 219); i < l - (527 - 525); i++)
                        d[i] = c[i + (562 - 560)];
                    d[i] = '\0';
                    printf ("%s\n", d);
                };
            }
            else {
                for (i = (310 - 310); i < l - (265 - 264); i++)
                    e[i] = c[i + (249 - 248)];
                e[i] = '\0';
                printf ("%s\n", e);
            };
        }
        else
            printf ("%s\n", c);
        printf ("%d", t);
    };
}

