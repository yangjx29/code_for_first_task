int main () {
    int i;
    int hoZ9qaSE;
    int n;
    int SGL0hnN5WJK;
    int JhTrukb0;
    int nO7kgHi5d;
    i = (855 - 855);
    hoZ9qaSE = (501 - 501);
    int sz [(791 - 786)] [(479 - 474)];
    for (JhTrukb0 = (475 - 475); JhTrukb0 < (456 - 451); JhTrukb0 = JhTrukb0 +(61 - 60)) {
        for (nO7kgHi5d = (749 - 749); nO7kgHi5d < (582 - 577); nO7kgHi5d = nO7kgHi5d + (37 - 36)) {
            scanf ("%d", &sz[JhTrukb0][nO7kgHi5d]);
        }
    }
    scanf ("%d%d", &n, &SGL0hnN5WJK);
    if (n > -(700 - 699) && n < (640 - 635) && SGL0hnN5WJK > -(170 - 169) && SGL0hnN5WJK < (499 - 494)) {
        for (nO7kgHi5d = (756 - 756); nO7kgHi5d < (374 - 369); nO7kgHi5d = nO7kgHi5d + (688 - 687)) {
            int e;
            e = sz[n][nO7kgHi5d];
            sz[n][nO7kgHi5d] = sz[SGL0hnN5WJK][nO7kgHi5d];
            sz[SGL0hnN5WJK][nO7kgHi5d] = e;
        }
        for (JhTrukb0 = (807 - 807); JhTrukb0 < (943 - 938); JhTrukb0++) {
            for (nO7kgHi5d = (794 - 794); nO7kgHi5d < (752 - 747); nO7kgHi5d++) {
                if (nO7kgHi5d != (892 - 888))
                    printf ("%d ", sz[JhTrukb0][nO7kgHi5d]);
                else
                    printf ("%d\n", sz[JhTrukb0][nO7kgHi5d]);
            }
        }
        return (599 - 598);
    }
    else {
        printf ("error");
        return (808 - 808);
    }
}

