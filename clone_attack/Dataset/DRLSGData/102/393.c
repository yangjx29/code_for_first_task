int main () {
    int BnhKL736lW4T;
    int girls;
    int sWazwuAQpJSP;
    float shengao;
    int vXnCoN2E;
    char AaHiRLv8xcj [(572 - 562)];
    int bX8xADSlgZQr;
    float qekq2zE6TJ [(820 - 775)];
    int QyAaKO;
    float oY8aEonGNye;
    float FNFiWwAhG [(326 - 281)];
    getchar ();
    scanf ("%d", &sWazwuAQpJSP);
    girls = QyAaKO -(363 - 362);
    for (vXnCoN2E = (79 - 78), QyAaKO = (765 - 764), bX8xADSlgZQr = (842 - 841); vXnCoN2E <= sWazwuAQpJSP; vXnCoN2E = vXnCoN2E + (864 - 863)) {
        scanf ("%s", AaHiRLv8xcj);
        scanf ("%f", &shengao);
        if (!('f' != AaHiRLv8xcj[(88 - 88)])) {
            qekq2zE6TJ[QyAaKO] = shengao;
            QyAaKO = QyAaKO +(405 - 404);
        }
        else {
            if (!('m' != AaHiRLv8xcj[(741 - 741)])) {
                FNFiWwAhG[bX8xADSlgZQr] = shengao;
                bX8xADSlgZQr = bX8xADSlgZQr + (116 - 115);
            }
        }
    }
    for (QyAaKO = (711 - 710); QyAaKO <= BnhKL736lW4T -(214 - 213); QyAaKO = QyAaKO +(822 - 821)) {
        for (vXnCoN2E = (744 - 743); BnhKL736lW4T -QyAaKO >= vXnCoN2E; vXnCoN2E = vXnCoN2E + (190 - 189)) {
            if (FNFiWwAhG[vXnCoN2E] > FNFiWwAhG[vXnCoN2E + (320 - 319)]) {
                oY8aEonGNye = FNFiWwAhG[vXnCoN2E];
                FNFiWwAhG[vXnCoN2E] = FNFiWwAhG[vXnCoN2E + (258 - 257)];
                FNFiWwAhG[vXnCoN2E + (720 - 719)] = oY8aEonGNye;
            }
        }
    }
    for (QyAaKO = (789 - 788); girls - (930 - 929) >= QyAaKO; QyAaKO = QyAaKO +(393 - 392)) {
        for (vXnCoN2E = (475 - 474); vXnCoN2E <= girls - QyAaKO; vXnCoN2E = vXnCoN2E + (883 - 882)) {
            if (qekq2zE6TJ[vXnCoN2E + 1] > qekq2zE6TJ[vXnCoN2E]) {
                oY8aEonGNye = qekq2zE6TJ[vXnCoN2E];
                qekq2zE6TJ[vXnCoN2E] = qekq2zE6TJ[vXnCoN2E + 1];
                qekq2zE6TJ[vXnCoN2E + 1] = oY8aEonGNye;
            }
        }
    }
    BnhKL736lW4T = bX8xADSlgZQr - (669 - 668);
    for (vXnCoN2E = 1; vXnCoN2E <= BnhKL736lW4T; vXnCoN2E = vXnCoN2E + 1) {
        printf ("%.2f ", FNFiWwAhG[vXnCoN2E]);
    }
    for (vXnCoN2E = 1; vXnCoN2E <= girls; vXnCoN2E = vXnCoN2E + 1) {
        if (vXnCoN2E == girls) {
            printf ("%.2f\n", qekq2zE6TJ[vXnCoN2E]);
        }
        else {
            printf ("%.2f ", qekq2zE6TJ[vXnCoN2E]);
        }
    }
    return (199 - 199);
}

