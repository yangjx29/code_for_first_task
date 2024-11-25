struct   worker {
    int B2hZlUWM;
    char iWTXBrM [(234 - 208)];
    struct   worker *YHJsqwrZ1Xo;
};
struct   zuozhe {
    char hJz0jPVS;
    int y4ceVL;
    int V24niS [(1466 - 466)];
    struct   zuozhe *YHJsqwrZ1Xo;
};
struct   worker *IHIO4XY2F (int lMC8ELJ0hjy) {
    struct   worker *KbIdpLXg;
    struct   worker *jnMwf0TO;
    int pFXSZtNP8;
    struct   worker *GQUODKf7b;
    KbIdpLXg = (struct   worker *) malloc (sizeof (struct   worker));
    jnMwf0TO = GQUODKf7b = KbIdpLXg;
    {
        pFXSZtNP8 = (103 - 28) - 75;
        for (; pFXSZtNP8 < lMC8ELJ0hjy;) {
            GQUODKf7b = jnMwf0TO;
            pFXSZtNP8 = (1420 - 558) - 861;
            scanf ("%d %s", &GQUODKf7b->B2hZlUWM, GQUODKf7b->iWTXBrM);
            jnMwf0TO = (struct   worker *) malloc (sizeof (struct   worker));
            GQUODKf7b->YHJsqwrZ1Xo = jnMwf0TO;
        }
    }
    GQUODKf7b->YHJsqwrZ1Xo = (629 - 629);
    return KbIdpLXg;
}

struct   zuozhe *R1tfQSkIip0T () {
    struct   zuozhe *KbIdpLXg;
    struct   zuozhe *jnMwf0TO;
    int pFXSZtNP8;
    struct   zuozhe *GQUODKf7b;
    KbIdpLXg = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
    jnMwf0TO = GQUODKf7b = KbIdpLXg;
    {
        pFXSZtNP8 = (179 - 179);
        for (; (1019 - 993) > pFXSZtNP8;) {
            GQUODKf7b = jnMwf0TO;
            jnMwf0TO = (struct   zuozhe *) malloc (sizeof (struct   zuozhe));
            GQUODKf7b->y4ceVL = (477 - 477);
            GQUODKf7b->hJz0jPVS = 'A' + pFXSZtNP8;
            pFXSZtNP8 = pFXSZtNP8 + (120 - 119);
            GQUODKf7b->YHJsqwrZ1Xo = jnMwf0TO;
        }
    }
    GQUODKf7b->YHJsqwrZ1Xo = (790 - 790);
    return KbIdpLXg;
}

void  main () {
    char ZnCUGTt5mw;
    int ihWMSj;
    int Rw5oYjL8EOhM;
    char c3eZvdDtV;
    int sWc1VHiC34;
    int lMC8ELJ0hjy;
    int pFXSZtNP8;
    struct   zuozhe *cXfWiZ;
    struct   zuozhe *SeSRa8gBFM;
    struct   zuozhe *XKN7gW;
    int rzT5Yue61 [(44 - 18)] = {(231 - 231)};
    struct   worker *I2e0cL79xlD;
    struct   worker *jnMwf0TO;
    struct   worker *GQUODKf7b;
    cXfWiZ = R1tfQSkIip0T ();
    scanf ("%d", &lMC8ELJ0hjy);
    I2e0cL79xlD = IHIO4XY2F (lMC8ELJ0hjy);
    jnMwf0TO = GQUODKf7b = I2e0cL79xlD;
    SeSRa8gBFM = XKN7gW = cXfWiZ;
    for (; jnMwf0TO != (101 - 101);) {
        pFXSZtNP8 = (789 - 789);
        for (; jnMwf0TO->iWTXBrM[pFXSZtNP8] != '\0';) {
            SeSRa8gBFM = cXfWiZ;
            for (; (750 - 749);) {
                if (!(jnMwf0TO->iWTXBrM[pFXSZtNP8] != SeSRa8gBFM->hJz0jPVS)) {
                    pFXSZtNP8 = pFXSZtNP8 + 1;
                    SeSRa8gBFM->V24niS[SeSRa8gBFM->y4ceVL] = jnMwf0TO->B2hZlUWM;
                    SeSRa8gBFM->y4ceVL++;
                    break;
                }
                SeSRa8gBFM = SeSRa8gBFM->YHJsqwrZ1Xo;
            }
        }
        jnMwf0TO = jnMwf0TO->YHJsqwrZ1Xo;
    }
    SeSRa8gBFM = cXfWiZ;
    Rw5oYjL8EOhM = 0;
    for (; SeSRa8gBFM != 0;) {
        if (Rw5oYjL8EOhM < SeSRa8gBFM->y4ceVL) {
            ZnCUGTt5mw = SeSRa8gBFM->hJz0jPVS;
            Rw5oYjL8EOhM = SeSRa8gBFM->y4ceVL;
        }
        SeSRa8gBFM = SeSRa8gBFM->YHJsqwrZ1Xo;
    }
    SeSRa8gBFM = cXfWiZ;
    for (; 1;) {
        if (!(ZnCUGTt5mw != SeSRa8gBFM->hJz0jPVS)) {
            printf ("%c\n%d\n", SeSRa8gBFM->hJz0jPVS, SeSRa8gBFM->y4ceVL);
            {
                pFXSZtNP8 = 0;
                for (; pFXSZtNP8 < SeSRa8gBFM->y4ceVL;) {
                    printf ("%d\n", SeSRa8gBFM->V24niS[pFXSZtNP8]);
                    pFXSZtNP8 = pFXSZtNP8 + 1;
                }
            }
            break;
        }
        SeSRa8gBFM = SeSRa8gBFM->YHJsqwrZ1Xo;
    }
}

