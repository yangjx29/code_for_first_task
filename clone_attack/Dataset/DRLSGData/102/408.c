int main () {
    char Uq53pI07Mo1Q [(530 - 490)] [(1010 - 1000)];
    double  Oupxlv;
    int fzbynTO;
    int nRXb0BOnNMYz;
    int MPdL67cjq;
    int m4PVw0RD6nG7;
    double  hFYZEfXi0 [(926 - 886)];
    double  vCvklfRZ [(839 - 799)];
    double  De3OBr [(628 - 588)];
    nRXb0BOnNMYz = (611 - 611);
    m4PVw0RD6nG7 = (978 - 978);
    scanf ("%d", &MPdL67cjq);
    for (fzbynTO = (700 - 700); MPdL67cjq > fzbynTO; fzbynTO = fzbynTO + 1) {
        scanf ("%s%lf", &Uq53pI07Mo1Q[fzbynTO], &De3OBr[fzbynTO]);
    }
    for (fzbynTO = (890 - 890); fzbynTO < MPdL67cjq; fzbynTO = fzbynTO + 1) {
        if (Uq53pI07Mo1Q[fzbynTO][(737 - 737)] == 'f') {
            vCvklfRZ[nRXb0BOnNMYz] = De3OBr[fzbynTO];
            nRXb0BOnNMYz = nRXb0BOnNMYz + 1;
        }
        else {
            hFYZEfXi0[m4PVw0RD6nG7] = De3OBr[fzbynTO];
            m4PVw0RD6nG7++;
        }
    }
    for (fzbynTO = (262 - 262); fzbynTO < m4PVw0RD6nG7 - (12 - 11); fzbynTO = fzbynTO + 1) {
        if (hFYZEfXi0[fzbynTO] > hFYZEfXi0[fzbynTO + (307 - 306)]) {
            Oupxlv = hFYZEfXi0[fzbynTO];
            hFYZEfXi0[fzbynTO] = hFYZEfXi0[fzbynTO + (607 - 606)];
            if (fzbynTO != (611 - 611)) {
                fzbynTO = fzbynTO - (520 - 518);
            }
            hFYZEfXi0[fzbynTO + (734 - 733)] = Oupxlv;
        }
    }
    for (fzbynTO = (327 - 327); fzbynTO < nRXb0BOnNMYz - (477 - 476); fzbynTO = fzbynTO + 1) {
        if (vCvklfRZ[fzbynTO + (795 - 794)] > vCvklfRZ[fzbynTO]) {
            Oupxlv = vCvklfRZ[fzbynTO];
            vCvklfRZ[fzbynTO] = vCvklfRZ[fzbynTO + (670 - 669)];
            vCvklfRZ[fzbynTO + (699 - 698)] = Oupxlv;
            if (fzbynTO != (780 - 780)) {
                fzbynTO = fzbynTO - (278 - 276);
            }
        }
    }
    for (fzbynTO = (808 - 808); m4PVw0RD6nG7 > fzbynTO; fzbynTO++) {
        printf ("%.2lf ", hFYZEfXi0[fzbynTO]);
    }
    for (fzbynTO = 0; fzbynTO < nRXb0BOnNMYz - 1; fzbynTO++) {
        printf ("%.2lf ", vCvklfRZ[fzbynTO]);
    }
    printf ("%.2lf", vCvklfRZ[nRXb0BOnNMYz - 1]);
    return 0;
}

