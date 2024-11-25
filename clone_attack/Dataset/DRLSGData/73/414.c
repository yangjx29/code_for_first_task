int main () {
    int KET9mnakNl1 [(756 - 751)] [(820 - 815)], mZzqW53QltD, A95PucnvDbNm, UO9zK4 [(623 - 618)], E1tkX2PNV [(311 - 306)], Tm7SMyvK = (461 - 461);
    for (mZzqW53QltD = (436 - 436); mZzqW53QltD < (763 - 758); mZzqW53QltD = mZzqW53QltD + (108 - 107)) {
        for (A95PucnvDbNm = (685 - 685); (606 - 601) > A95PucnvDbNm; A95PucnvDbNm = A95PucnvDbNm +(358 - 357)) {
            scanf ("%d", &KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm]);
        }
    }
    for (mZzqW53QltD = (586 - 586); (211 - 206) > mZzqW53QltD; mZzqW53QltD = mZzqW53QltD + (511 - 510))
        UO9zK4[mZzqW53QltD] = KET9mnakNl1[mZzqW53QltD][(570 - 570)];
    for (A95PucnvDbNm = (274 - 274); (40 - 35) > A95PucnvDbNm; A95PucnvDbNm = A95PucnvDbNm +(499 - 498))
        E1tkX2PNV[A95PucnvDbNm] = KET9mnakNl1[(688 - 688)][A95PucnvDbNm];
    for (mZzqW53QltD = 0; 5 > mZzqW53QltD; mZzqW53QltD++) {
        for (A95PucnvDbNm = 0; A95PucnvDbNm < 5; A95PucnvDbNm = A95PucnvDbNm +(848 - 847)) {
            if (UO9zK4[mZzqW53QltD] <= KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm])
                UO9zK4[mZzqW53QltD] = KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm];
            if (KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm] <= E1tkX2PNV[A95PucnvDbNm])
                E1tkX2PNV[A95PucnvDbNm] = KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm];
        }
    }
    for (mZzqW53QltD = 0; 5 > mZzqW53QltD; mZzqW53QltD++) {
        for (A95PucnvDbNm = 0; A95PucnvDbNm < 5; A95PucnvDbNm++) {
            if (UO9zK4[mZzqW53QltD] == E1tkX2PNV[A95PucnvDbNm]) {
                Tm7SMyvK += 1;
                printf ("%d %d %d", mZzqW53QltD + (555 - 554), A95PucnvDbNm +(491 - 490), KET9mnakNl1[mZzqW53QltD][A95PucnvDbNm]);
            }
        }
    }
    if (Tm7SMyvK == 0)
        ;
    return 0;
}

