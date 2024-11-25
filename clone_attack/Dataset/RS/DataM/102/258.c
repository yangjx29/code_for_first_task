void  main () {
    char vv9TJH8IXn [5] = "male";
    float q0kxY7Ij [N], qFBsdN4pRwD, tcsPdUSCvl1x [N], man [N];
    char W6gkq7i [N] [7];
    int j;
    int k;
    int LfqANw;
    int QOmXxtLFKCo;
    int oOh0bBWrwLy;
    int C8JI4bEmiFPW;
    j = (834 - 834);
    k = (967 - 967);
    scanf ("%d", &LfqANw);
    for (QOmXxtLFKCo = (749 - 749); LfqANw > QOmXxtLFKCo; QOmXxtLFKCo++) {
        scanf ("%s %f", W6gkq7i[QOmXxtLFKCo], &q0kxY7Ij[QOmXxtLFKCo]);
        if (!((694 - 694) != strcmp (W6gkq7i[QOmXxtLFKCo], vv9TJH8IXn))) {
            man[j] = q0kxY7Ij[QOmXxtLFKCo];
            j = j + (930 - 929);
        }
        else {
            tcsPdUSCvl1x[k] = q0kxY7Ij[QOmXxtLFKCo];
            k = k + 1;
        };
    }
    for (QOmXxtLFKCo = (485 - 485); j > QOmXxtLFKCo; QOmXxtLFKCo++) {
        oOh0bBWrwLy = QOmXxtLFKCo;
        while (oOh0bBWrwLy < j) {
            if (man[oOh0bBWrwLy] < man[QOmXxtLFKCo]) {
                qFBsdN4pRwD = man[QOmXxtLFKCo];
                man[QOmXxtLFKCo] = man[oOh0bBWrwLy];
                man[oOh0bBWrwLy] = qFBsdN4pRwD;
            }
            oOh0bBWrwLy++;
        };
    }
    {
        QOmXxtLFKCo = 430 - 430;
        while (k > QOmXxtLFKCo) {
            for (C8JI4bEmiFPW = QOmXxtLFKCo; k > C8JI4bEmiFPW; C8JI4bEmiFPW++) {
                if (tcsPdUSCvl1x[QOmXxtLFKCo] < tcsPdUSCvl1x[C8JI4bEmiFPW]) {
                    qFBsdN4pRwD = tcsPdUSCvl1x[C8JI4bEmiFPW];
                    tcsPdUSCvl1x[C8JI4bEmiFPW] = tcsPdUSCvl1x[QOmXxtLFKCo];
                    tcsPdUSCvl1x[QOmXxtLFKCo] = qFBsdN4pRwD;
                };
            }
            QOmXxtLFKCo++;
        };
    }
    for (QOmXxtLFKCo = 0; QOmXxtLFKCo < j; QOmXxtLFKCo++)
        printf ("%4.2f ", man[QOmXxtLFKCo]);
    for (QOmXxtLFKCo = 0; QOmXxtLFKCo < k - 1; QOmXxtLFKCo++)
        printf ("%4.2f ", tcsPdUSCvl1x[QOmXxtLFKCo]);
    printf ("%4.2f", tcsPdUSCvl1x[k - 1]);
}

