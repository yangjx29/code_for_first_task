void  main () {
    char iiawx2VulRm [(1336 - 336)] [(491 - 464)];
    char Nr80iQaKd9Eu;
    int PMT54Bpye;
    int NVuIKc;
    int EB1Vey;
    int Yy65dpbVJzHU [(1540 - 540)];
    int IfOsi2 [(1110 - 110)];
    int rznpsM1lDKa [(1003 - 977)];
    int Nz5kp4;
    int f2ckdTjhE03F;
    int Bwd4hAj;
    int sy8DoWgkR;
    for (EB1Vey = (199 - 199); EB1Vey < (406 - 380); EB1Vey = EB1Vey +(734 - 733)) {
        rznpsM1lDKa[EB1Vey] = (891 - 891);
    }
    scanf ("%d", &Nz5kp4);
    for (EB1Vey = (579 - 579); Nz5kp4 > EB1Vey; EB1Vey = EB1Vey +(238 - 237)) {
        scanf ("%d%s", &(IfOsi2[EB1Vey]), iiawx2VulRm[EB1Vey]);
        for (NVuIKc = (430 - 430); NVuIKc < (923 - 897); NVuIKc++) {
            for (PMT54Bpye = (166 - 166); PMT54Bpye < (692 - 666); PMT54Bpye++) {
                if (!('A' + PMT54Bpye != iiawx2VulRm[EB1Vey][NVuIKc]))
                    rznpsM1lDKa[PMT54Bpye]++;
            }
        }
    }
    f2ckdTjhE03F = (773 - 773);
    Bwd4hAj = (250 - 250);
    for (EB1Vey = (702 - 702); EB1Vey < (960 - 934); EB1Vey = EB1Vey +(274 - 273)) {
        if (rznpsM1lDKa[EB1Vey] > Bwd4hAj) {
            Bwd4hAj = rznpsM1lDKa[EB1Vey];
            f2ckdTjhE03F = EB1Vey;
        }
    }
    Nr80iQaKd9Eu = 'A' + f2ckdTjhE03F;
    printf ("%c\n", Nr80iQaKd9Eu);
    sy8DoWgkR = (754 - 754);
    for (EB1Vey = (390 - 390); Nz5kp4 > EB1Vey; EB1Vey = EB1Vey +(251 - 250)) {
        for (NVuIKc = (602 - 602); NVuIKc < 26; NVuIKc++) {
            if (iiawx2VulRm[EB1Vey][NVuIKc] == Nr80iQaKd9Eu) {
                Yy65dpbVJzHU[sy8DoWgkR] = IfOsi2[EB1Vey];
                sy8DoWgkR++;
            }
        }
    }
    printf ("%d\n", sy8DoWgkR);
    for (EB1Vey = 0; EB1Vey < sy8DoWgkR; EB1Vey++)
        printf ("%d\n", Yy65dpbVJzHU[EB1Vey]);
}

