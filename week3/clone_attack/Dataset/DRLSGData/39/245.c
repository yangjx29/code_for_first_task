void  main () {
    struct   student {
        char lP5gQmu [(508 - 488)];
        int k72cl50Q;
        int BUotQuWCd6;
        char wmlLNxYOZ9F;
        char oPINfL;
        int wnCPe4qp;
        int VhZ52Ny;
    }
    Q2neSPXNJ5 [100] = {(240 - 240)};
    int zzKFBN, pTzxANnKH, NGQxoHi = (732 - 732), Sy2LlSTV = (812 - 812), uQ5Ee2 = 0, P14M0Z = 0, kRjVUvqIHn = 0, udOa7Qiz = 0, znWLC5e = 0, NH9tBVhGEWYI = 0;
    scanf ("%d", &pTzxANnKH);
    for (zzKFBN = 0; pTzxANnKH > zzKFBN; zzKFBN = zzKFBN + 1) {
        scanf ("%s %d %d %c %c %d", Q2neSPXNJ5[zzKFBN].lP5gQmu, &Q2neSPXNJ5[zzKFBN].k72cl50Q, &Q2neSPXNJ5[zzKFBN].BUotQuWCd6, &Q2neSPXNJ5[zzKFBN].wmlLNxYOZ9F, &Q2neSPXNJ5[zzKFBN].oPINfL, &Q2neSPXNJ5[zzKFBN].wnCPe4qp);
    }
    {
        zzKFBN = 0;
        for (; pTzxANnKH > zzKFBN;) {
            if (Q2neSPXNJ5[zzKFBN].k72cl50Q > (157 - 77) && Q2neSPXNJ5[zzKFBN].wnCPe4qp > 0)
                NGQxoHi = (8494 - 494);
            if (Q2neSPXNJ5[zzKFBN].k72cl50Q > (262 - 177) && Q2neSPXNJ5[zzKFBN].BUotQuWCd6 > 80)
                Sy2LlSTV = (4101 - 101);
            if (90 < Q2neSPXNJ5[zzKFBN].k72cl50Q)
                uQ5Ee2 = 2000;
            if (85 < Q2neSPXNJ5[zzKFBN].k72cl50Q && Q2neSPXNJ5[zzKFBN].oPINfL == 'Y')
                P14M0Z = 1000;
            if (Q2neSPXNJ5[zzKFBN].BUotQuWCd6 > 80 && Q2neSPXNJ5[zzKFBN].wmlLNxYOZ9F == 'Y')
                kRjVUvqIHn = (863 - 13);
            Q2neSPXNJ5[zzKFBN].VhZ52Ny = NGQxoHi +Sy2LlSTV+uQ5Ee2 + P14M0Z +kRjVUvqIHn;
            zzKFBN = zzKFBN + 1;
            NGQxoHi = Sy2LlSTV = uQ5Ee2 = P14M0Z = kRjVUvqIHn = 0;
        }
    }
    udOa7Qiz = Q2neSPXNJ5[0].VhZ52Ny;
    {
        zzKFBN = 0;
        for (; zzKFBN < pTzxANnKH;) {
            if (Q2neSPXNJ5[zzKFBN].VhZ52Ny > udOa7Qiz) {
                udOa7Qiz = Q2neSPXNJ5[zzKFBN].VhZ52Ny;
                znWLC5e = zzKFBN;
            }
            zzKFBN++;
        }
    }
    for (zzKFBN = 0; zzKFBN < pTzxANnKH; zzKFBN++) {
        NH9tBVhGEWYI = NH9tBVhGEWYI +Q2neSPXNJ5[zzKFBN].VhZ52Ny;
    }
    printf ("%s\n", Q2neSPXNJ5[znWLC5e].lP5gQmu);
    printf ("%d\n", Q2neSPXNJ5[znWLC5e].VhZ52Ny);
    printf ("%d", NH9tBVhGEWYI);
}

