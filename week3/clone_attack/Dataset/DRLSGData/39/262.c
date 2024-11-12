struct   st {
    char L8HuB2w [(553 - 453)];
    int gHEt6K;
    int psE5uWqJ;
    char sOtKUM92w;
    char PR2kPbtv;
    int HgmTbftnCARy;
};
void  main () {
    int zDZqF4PuXB;
    int KleGFdLZ258;
    struct   st li1gLjTU9d7K [1000];
    int yaFNpCXi [(1653 - 653)];
    int tBJeVvhoAiMD [1000] = {(540 - 540)};
    int JUvHcMS5R;
    int QVtREb4Cg;
    int LL8DcIGX5B;
    scanf ("%d", &zDZqF4PuXB);
    LL8DcIGX5B = 0;
    for (JUvHcMS5R = 0; zDZqF4PuXB > JUvHcMS5R; JUvHcMS5R = JUvHcMS5R +1) {
        scanf ("%s%d%d %c %c%d", li1gLjTU9d7K[JUvHcMS5R].L8HuB2w, &li1gLjTU9d7K[JUvHcMS5R].gHEt6K, &li1gLjTU9d7K[JUvHcMS5R].psE5uWqJ, &li1gLjTU9d7K[JUvHcMS5R].sOtKUM92w, &li1gLjTU9d7K[JUvHcMS5R].PR2kPbtv, &li1gLjTU9d7K[JUvHcMS5R].HgmTbftnCARy);
        getchar ();
    }
    for (JUvHcMS5R = 0; zDZqF4PuXB > JUvHcMS5R; JUvHcMS5R = JUvHcMS5R +1) {
        yaFNpCXi[JUvHcMS5R] = JUvHcMS5R;
        if ((155 - 75) < li1gLjTU9d7K[JUvHcMS5R].gHEt6K && li1gLjTU9d7K[JUvHcMS5R].HgmTbftnCARy >= (488 - 487))
            tBJeVvhoAiMD[JUvHcMS5R] = tBJeVvhoAiMD[JUvHcMS5R] + 8000;
        if ((514 - 429) < li1gLjTU9d7K[JUvHcMS5R].gHEt6K && 80 < li1gLjTU9d7K[JUvHcMS5R].psE5uWqJ)
            tBJeVvhoAiMD[JUvHcMS5R] = tBJeVvhoAiMD[JUvHcMS5R] + 4000;
        if (li1gLjTU9d7K[JUvHcMS5R].gHEt6K > (780 - 690))
            tBJeVvhoAiMD[JUvHcMS5R] = tBJeVvhoAiMD[JUvHcMS5R] + 2000;
        if (85 < li1gLjTU9d7K[JUvHcMS5R].gHEt6K && li1gLjTU9d7K[JUvHcMS5R].PR2kPbtv == 'Y')
            tBJeVvhoAiMD[JUvHcMS5R] = tBJeVvhoAiMD[JUvHcMS5R] + 1000;
        if (li1gLjTU9d7K[JUvHcMS5R].psE5uWqJ > 80 && li1gLjTU9d7K[JUvHcMS5R].sOtKUM92w == 'Y')
            tBJeVvhoAiMD[JUvHcMS5R] = tBJeVvhoAiMD[JUvHcMS5R] + 850;
        LL8DcIGX5B = LL8DcIGX5B +tBJeVvhoAiMD[JUvHcMS5R];
    }
    for (JUvHcMS5R = zDZqF4PuXB - 1; JUvHcMS5R > 0; JUvHcMS5R = JUvHcMS5R -1) {
        for (QVtREb4Cg = 0; QVtREb4Cg < JUvHcMS5R; QVtREb4Cg = QVtREb4Cg +1) {
            if (tBJeVvhoAiMD[QVtREb4Cg] < tBJeVvhoAiMD[QVtREb4Cg +1]) {
                KleGFdLZ258 = tBJeVvhoAiMD[QVtREb4Cg +1];
                tBJeVvhoAiMD[QVtREb4Cg +1] = tBJeVvhoAiMD[QVtREb4Cg];
                tBJeVvhoAiMD[QVtREb4Cg] = KleGFdLZ258;
                KleGFdLZ258 = yaFNpCXi[QVtREb4Cg +1];
                yaFNpCXi[QVtREb4Cg +1] = yaFNpCXi[QVtREb4Cg];
                yaFNpCXi[QVtREb4Cg] = KleGFdLZ258;
            }
        }
    }
    printf ("%s\n", li1gLjTU9d7K[yaFNpCXi[0]].L8HuB2w);
    printf ("%d\n%d\n", tBJeVvhoAiMD[0], LL8DcIGX5B);
}

