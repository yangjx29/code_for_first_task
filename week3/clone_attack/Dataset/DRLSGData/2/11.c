struct   book {
    int qL1Bc2CG;
    char pEF8jKaIYAU [(926 - 906)];
};
void  main () {
    struct   book dmZYaiq567j [(1458 - 458)];
    int gKO0TS;
    int FocqaHxt9dy;
    int p8gdQnzDPvMm;
    int MWHJBY86Xitm;
    int r82Esm0Zpln;
    int h67sXh [(470 - 444)];
    int cJvhKGt8LTF [(358 - 332)] = {(541 - 541)};
    int PUVf47sEyF8;
    int PWCg1t;
    scanf ("%d", &MWHJBY86Xitm);
    for (PWCg1t = (981 - 981); MWHJBY86Xitm > PWCg1t; PWCg1t = PWCg1t +(462 - 461)) {
        scanf ("%d %s", &dmZYaiq567j[PWCg1t].qL1Bc2CG, dmZYaiq567j[PWCg1t].pEF8jKaIYAU);
        for (FocqaHxt9dy = (14 - 14); FocqaHxt9dy < strlen (dmZYaiq567j[PWCg1t].pEF8jKaIYAU); FocqaHxt9dy = FocqaHxt9dy +(66 - 65)) {
            for (p8gdQnzDPvMm = (805 - 805); (107 - 81) > p8gdQnzDPvMm; p8gdQnzDPvMm++) {
                if (!(dmZYaiq567j[PWCg1t].pEF8jKaIYAU[FocqaHxt9dy] != 'A' + p8gdQnzDPvMm))
                    break;
            }
            cJvhKGt8LTF[p8gdQnzDPvMm] = cJvhKGt8LTF[p8gdQnzDPvMm] + (805 - 804);
        }
    }
    for (PUVf47sEyF8 = (453 - 453); (530 - 504) > PUVf47sEyF8; PUVf47sEyF8 = PUVf47sEyF8 +(427 - 426))
        h67sXh[PUVf47sEyF8] = cJvhKGt8LTF[PUVf47sEyF8];
    r82Esm0Zpln = cJvhKGt8LTF[(594 - 594)];
    for (gKO0TS = (760 - 760); (511 - 485) > gKO0TS; gKO0TS = gKO0TS + (993 - 992))
        if (cJvhKGt8LTF[gKO0TS] > r82Esm0Zpln)
            r82Esm0Zpln = cJvhKGt8LTF[gKO0TS];
    for (PUVf47sEyF8 = (224 - 224); (44 - 18) > PUVf47sEyF8; PUVf47sEyF8 = PUVf47sEyF8 +(929 - 928)) {
        if (h67sXh[PUVf47sEyF8] == r82Esm0Zpln)
            break;
    }
    printf ("%c\n", 'A' + PUVf47sEyF8);
    printf ("%d\n", r82Esm0Zpln);
    for (PWCg1t = (672 - 672); PWCg1t < MWHJBY86Xitm; PWCg1t = PWCg1t +1) {
        for (FocqaHxt9dy = 0; FocqaHxt9dy < strlen (dmZYaiq567j[PWCg1t].pEF8jKaIYAU); FocqaHxt9dy = FocqaHxt9dy +1) {
            if ('A' + PUVf47sEyF8 == dmZYaiq567j[PWCg1t].pEF8jKaIYAU[FocqaHxt9dy]) {
                printf ("%d\n", dmZYaiq567j[PWCg1t].qL1Bc2CG);
                break;
            }
        }
    }
}

