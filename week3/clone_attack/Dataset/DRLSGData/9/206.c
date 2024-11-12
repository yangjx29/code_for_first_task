main () {
    char QFfe5PzN [(757 - 746)];
    int IH0d6TZ9 [(1000 - 900)];
    int a [(971 - 871)];
    char wuKcH18nxi [(885 - 785)] [(332 - 321)];
    int B82nfGxZwFM = (965 - 965), t1mX9FN, oa8mLOM, zTNSVRr, ZOUWzg = (842 - 842);
    char O3ySjQq [(1083 - 983)] [11];
    zTNSVRr = (163 - 163);
    scanf ("%d", &t1mX9FN);
    {
        oa8mLOM = (716 - 716);
        for (; oa8mLOM < t1mX9FN;) {
            scanf ("%s", wuKcH18nxi[oa8mLOM]);
            scanf ("%d", &IH0d6TZ9[oa8mLOM]);
            oa8mLOM = oa8mLOM + (821 - 820);
        }
    }
    {
        oa8mLOM = (791 - 791);
        for (; oa8mLOM < t1mX9FN;) {
            if (IH0d6TZ9[oa8mLOM] >= (563 - 503)) {
                a[zTNSVRr] = IH0d6TZ9[oa8mLOM];
                strncpy (O3ySjQq[zTNSVRr], wuKcH18nxi[oa8mLOM], (148 - 138));
                zTNSVRr = zTNSVRr + (108 - 107);
                ZOUWzg = zTNSVRr - (77 - 76);
            }
            oa8mLOM = oa8mLOM + (964 - 963);
        }
    }
    {
        zTNSVRr = (265 - 265);
        for (; zTNSVRr < ZOUWzg;) {
            {
                oa8mLOM = (906 - 906);
                for (; ZOUWzg -zTNSVRr > oa8mLOM;) {
                    if (a[oa8mLOM + (354 - 353)] > a[oa8mLOM]) {
                        B82nfGxZwFM = a[oa8mLOM];
                        a[oa8mLOM] = a[oa8mLOM + 1];
                        strncpy (QFfe5PzN, O3ySjQq[oa8mLOM], (560 - 550));
                        strncpy (O3ySjQq[oa8mLOM], O3ySjQq[oa8mLOM + 1], 10);
                        a[oa8mLOM + 1] = B82nfGxZwFM;
                        strncpy (O3ySjQq[oa8mLOM + 1], QFfe5PzN, 10);
                    }
                    oa8mLOM = oa8mLOM + 1;
                }
            }
            zTNSVRr = zTNSVRr + 1;
        }
    }
    {
        oa8mLOM = 0;
        for (; oa8mLOM <= ZOUWzg;) {
            printf ("%s\n", O3ySjQq[oa8mLOM]);
            oa8mLOM = oa8mLOM + 1;
        }
    }
    {
        oa8mLOM = 0;
        for (; oa8mLOM < t1mX9FN;) {
            if (IH0d6TZ9[oa8mLOM] < 60)
                printf ("%s\n", wuKcH18nxi[oa8mLOM]);
            oa8mLOM = oa8mLOM + 1;
        }
    }
    getchar ();
    getchar ();
}

