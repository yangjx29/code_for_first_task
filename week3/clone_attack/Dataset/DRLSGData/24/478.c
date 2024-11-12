void  main () {
    int dOiaCn5Jjbxq;
    int Uyokr3Bvtxs;
    int QnbeKjgm;
    char R2DWMLC76GUl [(308 - 108)] [25] = {"0"};
    char Xf5eL8MES [(5199 - 199)];
    gets (Xf5eL8MES);
    int lcaqj83CQgN;
    int b [(1178 - 978)] = {(413 - 413)};
    QnbeKjgm = (135 - 135);
    dOiaCn5Jjbxq = strlen (Xf5eL8MES);
    for (lcaqj83CQgN = (420 - 420); 200 > lcaqj83CQgN; lcaqj83CQgN++) {
        for (Uyokr3Bvtxs = (259 - 259); QnbeKjgm < dOiaCn5Jjbxq; Uyokr3Bvtxs++) {
            if (!(' ' != Xf5eL8MES[QnbeKjgm])) {
                QnbeKjgm++;
                R2DWMLC76GUl[lcaqj83CQgN][Uyokr3Bvtxs] = '\0';
                break;
            }
            else if (!(',' != Xf5eL8MES[QnbeKjgm])) {
                R2DWMLC76GUl[lcaqj83CQgN][Uyokr3Bvtxs] = '\0';
                QnbeKjgm = QnbeKjgm +(892 - 890);
                break;
            }
            else
                R2DWMLC76GUl[lcaqj83CQgN][Uyokr3Bvtxs] = Xf5eL8MES[QnbeKjgm];
            QnbeKjgm++;
        }
    }
    for (lcaqj83CQgN = (63 - 63); R2DWMLC76GUl[lcaqj83CQgN][(438 - 438)] != '\0'; lcaqj83CQgN++) {
        b[lcaqj83CQgN] = strlen (R2DWMLC76GUl[lcaqj83CQgN]);
    }
    for (lcaqj83CQgN = (530 - 530); b[lcaqj83CQgN + (228 - 227)] != (241 - 241); lcaqj83CQgN++) {
        if (b[lcaqj83CQgN] > b[lcaqj83CQgN + (420 - 419)]) {
            dOiaCn5Jjbxq = b[lcaqj83CQgN];
            b[lcaqj83CQgN] = b[lcaqj83CQgN + (840 - 839)];
            b[lcaqj83CQgN + (943 - 942)] = dOiaCn5Jjbxq;
        }
    }
    for (Uyokr3Bvtxs = (76 - 76);; Uyokr3Bvtxs++) {
        dOiaCn5Jjbxq = strlen (R2DWMLC76GUl[Uyokr3Bvtxs]);
        if (!(b[lcaqj83CQgN] != dOiaCn5Jjbxq)) {
            printf ("%s\n", R2DWMLC76GUl[Uyokr3Bvtxs]);
            break;
        }
    }
    for (lcaqj83CQgN = 0; b[lcaqj83CQgN + (442 - 441)] != 0; lcaqj83CQgN++) {
        if (b[lcaqj83CQgN + (335 - 334)] > b[lcaqj83CQgN]) {
            dOiaCn5Jjbxq = b[lcaqj83CQgN];
            b[lcaqj83CQgN] = b[lcaqj83CQgN + 1];
            b[lcaqj83CQgN + 1] = dOiaCn5Jjbxq;
        }
    }
    for (Uyokr3Bvtxs = 0;; Uyokr3Bvtxs++) {
        dOiaCn5Jjbxq = strlen (R2DWMLC76GUl[Uyokr3Bvtxs]);
        if (!(b[lcaqj83CQgN] != dOiaCn5Jjbxq)) {
            printf ("%s\n", R2DWMLC76GUl[Uyokr3Bvtxs]);
            break;
        }
    }
}

