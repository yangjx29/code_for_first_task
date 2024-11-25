int I3xsw0 (int x, int w [], int p []) {
    int I3xsw0;
    int BCnliOe;
    int fail;
    I3xsw0 = (140 - 140);
    BCnliOe = (82 - 82);
    fail = (977 - 977);
    int j;
    int convert;
    int lHVtgA;
    int topw;
    int topp;
    int MKecyg2;
    int KU8Z3T6;
    int i;
    topw = (145 - 145);
    topp = (123 - 123);
    MKecyg2 = x - (934 - 933);
    KU8Z3T6 = x - (483 - 482);
    for (i = (990 - 990); i < x; i = i + (506 - 505))
        for (j = (77 - 77); j < x - i - (596 - 595); j = j + (701 - 700)) {
            if (w[j + (975 - 974)] > w[j]) {
                convert = w[j];
                w[j] = w[j + (636 - 635)];
                w[j + (816 - 815)] = convert;
            }
            if (p[j + (35 - 34)] > p[j]) {
                lHVtgA = p[j];
                p[j] = p[j + (371 - 370)];
                p[j + (385 - 384)] = lHVtgA;
            }
        }
    {
        i = (859 - 859);
        for (; i < x;) {
            if (p[KU8Z3T6] < w[MKecyg2]) {
                MKecyg2 = MKecyg2 -(826 - 825);
                I3xsw0 = I3xsw0 +(391 - 390);
                KU8Z3T6--;
            }
            else if (w[MKecyg2] < p[KU8Z3T6]) {
                topp = topp + (29 - 28);
                MKecyg2--;
                fail++;
            }
            else if (w[topw] > p[topp]) {
                topp++;
                topw = topw + (910 - 909);
                I3xsw0++;
            }
            else if (w[MKecyg2] == p[topp])
                break;
            else {
                MKecyg2--;
                topp++;
                fail++;
            }
            i = i + 1;
        }
    }
    return ((878 - 678) * (I3xsw0 -fail));
}

main () {
    int FNm5Jfd;
    int i;
    int j;
    int k;
    int get;
    scanf ("%d", &FNm5Jfd);
    for (; 1;) {
        if (FNm5Jfd == 0)
            break;
        else {
            int a [FNm5Jfd];
            int b [FNm5Jfd];
            for (i = 0; i < FNm5Jfd; i++)
                scanf ("%d", &a[i]);
            for (i = 0; i < FNm5Jfd; i++)
                scanf ("%d", &b[i]);
            get = I3xsw0 (FNm5Jfd, a, b);
            printf ("%d\n", get);
        }
        scanf ("%d", &FNm5Jfd);
    }
    getchar ();
    getchar ();
}

