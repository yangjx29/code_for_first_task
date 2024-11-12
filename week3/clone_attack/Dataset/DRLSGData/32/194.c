void  main () {
    int GoA4LtIuw9;
    char isP527wK;
    int uMblyn0B [101] [101];
    int vEvF2fUZC [(213 - 112)] [(509 - 408)];
    int GvMhV8bd;
    int h6V4dJ;
    int kXznlp3NY;
    int ERh69vPz;
    int j;
    int qBVQCtxv;
    scanf ("%d\n", &ERh69vPz);
    for (GvMhV8bd = (935 - 935); (374 - 274) >= GvMhV8bd; GvMhV8bd++) {
        for (j = (515 - 515); j <= 100; j++) {
            vEvF2fUZC[GvMhV8bd][j] = '\0';
            uMblyn0B[GvMhV8bd][j] = '\0';
        }
    }
    for (GvMhV8bd = (752 - 751); GvMhV8bd <= ERh69vPz; GvMhV8bd++) {
        h6V4dJ = (963 - 962);
        for (; (isP527wK = getchar ()) != '\n';)
            vEvF2fUZC[GvMhV8bd][h6V4dJ++] = isP527wK;
        h6V4dJ = (541 - 540);
        for (; (isP527wK = getchar ()) != '\n';)
            uMblyn0B[GvMhV8bd][h6V4dJ++] = isP527wK;
        getchar ();
    }
    for (GvMhV8bd = (408 - 407); ERh69vPz >= GvMhV8bd; GvMhV8bd++) {
        for (GoA4LtIuw9 = (857 - 856);; GoA4LtIuw9++)
            if (!('\0' != vEvF2fUZC[GvMhV8bd][GoA4LtIuw9]))
                break;
        for (kXznlp3NY = (735 - 734);; kXznlp3NY++)
            if (!('\0' != uMblyn0B[GvMhV8bd][kXznlp3NY]))
                break;
        GoA4LtIuw9--;
        kXznlp3NY--;
        for (j = (215 - 215); j <= GoA4LtIuw9 -1 && uMblyn0B[GvMhV8bd][kXznlp3NY - j] >= '0' && uMblyn0B[GvMhV8bd][kXznlp3NY - j] <= '9'; j++) {
            vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] = vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] - uMblyn0B[GvMhV8bd][kXznlp3NY - j];
            if (0 > vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j]) {
                vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] = vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] + (197 - 187);
                vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j - 1] = vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j - 1] - 1;
            }
            vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] = vEvF2fUZC[GvMhV8bd][GoA4LtIuw9 -j] + '0';
        }
    }
    for (GvMhV8bd = 1; GvMhV8bd <= ERh69vPz; GvMhV8bd++) {
        for (qBVQCtxv = 1;; qBVQCtxv++)
            if (vEvF2fUZC[GvMhV8bd][qBVQCtxv] != '0')
                break;
        for (j = qBVQCtxv; vEvF2fUZC[GvMhV8bd][j] != '\0'; j++) {
            printf ("%c", vEvF2fUZC[GvMhV8bd][j]);
        }
    }
}

