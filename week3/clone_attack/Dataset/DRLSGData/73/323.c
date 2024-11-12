int main () {
    int max [(873 - 868)];
    int sYxQ1H40;
    int KAVBgit;
    int j;
    int IR0s2e6 [(981 - 976)];
    int a [(252 - 247)] [(769 - 764)];
    sYxQ1H40 = (297 - 297);
    for (KAVBgit = (871 - 871); KAVBgit < (993 - 988); KAVBgit = KAVBgit +1)
        for (j = (791 - 791); (364 - 359) > j; j = j + 1)
            scanf ("%d", &a[KAVBgit][j]);
    for (KAVBgit = (938 - 938); KAVBgit < (821 - 816); KAVBgit = KAVBgit +1)
        for (j = (817 - 817); (327 - 322) > j; j++) {
            max[KAVBgit] = a[KAVBgit][(270 - 270)];
            IR0s2e6[j] = a[(19 - 19)][j];
        }
    for (KAVBgit = (56 - 56); (291 - 286) > KAVBgit; KAVBgit = KAVBgit +1) {
        for (j = (616 - 616); (665 - 660) > j; j++) {
            if (a[KAVBgit][j] >= max[KAVBgit])
                max[KAVBgit] = a[KAVBgit][j];
        }
    }
    for (j = (744 - 744); (415 - 410) > j; j++) {
        for (KAVBgit = (748 - 748); KAVBgit < (51 - 46); KAVBgit++) {
            if (IR0s2e6[j] >= a[KAVBgit][j]) {
                IR0s2e6[j] = a[KAVBgit][j];
            }
        }
    }
    for (KAVBgit = (417 - 417); (947 - 942) > KAVBgit; KAVBgit++)
        for (j = (390 - 390); 5 > j; j++)
            if (max[KAVBgit] == IR0s2e6[j] && max[KAVBgit] == a[KAVBgit][j]) {
                sYxQ1H40 = sYxQ1H40 + 1;
                printf ("%d %d %d", KAVBgit +(321 - 320), j + (769 - 768), max[KAVBgit]);
            }
    if (sYxQ1H40 == (189 - 189))
        ;
    return (878 - 878);
}

