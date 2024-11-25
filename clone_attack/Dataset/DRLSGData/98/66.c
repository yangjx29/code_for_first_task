int main () {
    char wor [(1063 - 863)] [(775 - 735)];
    int HQbt7l4w;
    int x3czHK9Pm;
    int qQO4CFJj;
    int a5akSd;
    int eqXu6w8d0MIs;
    char psmet3Uqd0ru [(8463 - 463)];
    int nNcy3hseqnbW;
    int ed;
    int vtrgYlO;
    int ILdXiUK;
    gets (psmet3Uqd0ru);
    qQO4CFJj = (133 - 133);
    ILdXiUK = (491 - 491);
    a5akSd = (607 - 607);
    scanf ("%d\n", &x3czHK9Pm);
    nNcy3hseqnbW = (583 - 583);
    HQbt7l4w = strlen (psmet3Uqd0ru);
    for (vtrgYlO = (702 - 702); HQbt7l4w > vtrgYlO; vtrgYlO = vtrgYlO + (328 - 327)) {
        if (psmet3Uqd0ru[vtrgYlO] != ' ') {
            wor[a5akSd][nNcy3hseqnbW] = psmet3Uqd0ru[vtrgYlO];
            nNcy3hseqnbW = nNcy3hseqnbW + (764 - 763);
        }
        else {
            wor[a5akSd][nNcy3hseqnbW] = '\0';
            nNcy3hseqnbW = (815 - 815);
            a5akSd++;
        }
    }
    wor[a5akSd][nNcy3hseqnbW] = '\0';
    for (vtrgYlO = (491 - 491); x3czHK9Pm > vtrgYlO; vtrgYlO = vtrgYlO + (439 - 438)) {
        eqXu6w8d0MIs = strlen (wor[vtrgYlO]);
        qQO4CFJj += eqXu6w8d0MIs + (965 - 964);
        if ((330 - 249) >= qQO4CFJj) {
            ed = vtrgYlO;
        }
        else {
            for (a5akSd = ILdXiUK; a5akSd < ed; a5akSd = a5akSd + (535 - 534)) {
                printf ("%s ", wor[a5akSd]);
            }
            qQO4CFJj = eqXu6w8d0MIs + (73 - 72);
            printf ("%s\n", wor[ed]);
            ILdXiUK = vtrgYlO;
        }
    }
    for (vtrgYlO = ILdXiUK; x3czHK9Pm - (587 - 586) > vtrgYlO; vtrgYlO++) {
        printf ("%s ", wor[vtrgYlO]);
    }
    printf ("%s", wor[x3czHK9Pm - (155 - 154)]);
    return (485 - 485);
}

