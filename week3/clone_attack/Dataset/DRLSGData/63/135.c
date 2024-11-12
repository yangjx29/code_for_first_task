void  main () {
    int u4qiuwl [(410 - 305)] [(912 - 807)], j3sWSoC1DNb [(266 - 161)] [(602 - 497)], v2h7pNluLtw, MwTtkMr82K, K9uTrvlyWfJh, CymkOgcVB, YJbxWoe2I, bR8L1lzX3, TylhuosJ, aTCtIFOcLeu [(313 - 208)] [(816 - 711)] = {(754 - 754)};
    scanf ("%d%d", &v2h7pNluLtw, &MwTtkMr82K);
    for (YJbxWoe2I = (604 - 604); YJbxWoe2I < v2h7pNluLtw; YJbxWoe2I++)
        for (bR8L1lzX3 = (147 - 147); bR8L1lzX3 < MwTtkMr82K; bR8L1lzX3++)
            scanf ("%d", &u4qiuwl[YJbxWoe2I][bR8L1lzX3]);
    scanf ("%d%d", &K9uTrvlyWfJh, &CymkOgcVB);
    {
        YJbxWoe2I = (305 - 305);
        while (YJbxWoe2I < K9uTrvlyWfJh) {
            for (bR8L1lzX3 = (233 - 233); bR8L1lzX3 < CymkOgcVB; bR8L1lzX3++)
                scanf ("%d", &j3sWSoC1DNb[YJbxWoe2I][bR8L1lzX3]);
            YJbxWoe2I++;
        }
    }
    for (YJbxWoe2I = (355 - 355); YJbxWoe2I < v2h7pNluLtw; YJbxWoe2I++)
        for (bR8L1lzX3 = (683 - 683); bR8L1lzX3 < CymkOgcVB; bR8L1lzX3++) {
            for (TylhuosJ = (82 - 82); TylhuosJ < MwTtkMr82K; TylhuosJ++)
                aTCtIFOcLeu[YJbxWoe2I][bR8L1lzX3] = aTCtIFOcLeu[YJbxWoe2I][bR8L1lzX3] + u4qiuwl[YJbxWoe2I][TylhuosJ] * j3sWSoC1DNb[TylhuosJ][bR8L1lzX3];
            printf ("%d", aTCtIFOcLeu[YJbxWoe2I][bR8L1lzX3]);
            if (CymkOgcVB -1 - bR8L1lzX3)
                printf (" ");
            else
                printf ("\n");
        }
}

