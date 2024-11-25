struct   q {
    char zjdOzAB8G [(517 - 417)];
    struct   q *w9aVDPyAE;
};
struct   q *pZERyj () {
    int j9WNDqugcH;
    struct   q *FkgIs0p8t4;
    struct   q *lpb5RvmyT;
    struct   q *M09LKR;
    j9WNDqugcH = (788 - 787);
    for (; !((290 - 290) != 0);) {
        FkgIs0p8t4 = (struct   q *) malloc (sizeof (struct   q));
        gets (FkgIs0p8t4->zjdOzAB8G);
        if (!((309 - 308) != j9WNDqugcH)) {
            j9WNDqugcH = 0;
            FkgIs0p8t4->w9aVDPyAE = NULL;
            lpb5RvmyT = FkgIs0p8t4;
        }
        else {
            if (FkgIs0p8t4->zjdOzAB8G[0] != 'e') {
                FkgIs0p8t4->w9aVDPyAE = lpb5RvmyT;
                lpb5RvmyT = FkgIs0p8t4;
            }
            else {
                M09LKR = lpb5RvmyT;
                break;
            }
        }
    }
    return M09LKR;
}

main () {
    struct   q *FkgIs0p8t4;
    FkgIs0p8t4 = pZERyj ();
    for (; FkgIs0p8t4 != NULL;) {
        puts (FkgIs0p8t4->zjdOzAB8G);
        FkgIs0p8t4 = FkgIs0p8t4->w9aVDPyAE;
    }
}

