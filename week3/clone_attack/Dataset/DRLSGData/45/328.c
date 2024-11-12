void  main () {
    int nw;
    int ObPscpI;
    char C0gbWvIR [(974 - 874)];
    char Ghl9P1DU [(480 - 380)];
    int i;
    int z;
    int sum;
    int vFdQOBHiR1xj;
    i = (185 - 185);
    sum = (268 - 268);
    vFdQOBHiR1xj = (700 - 700);
    scanf ("%s%s", &C0gbWvIR, &Ghl9P1DU);
    ObPscpI = strlen (C0gbWvIR);
    nw = strlen (Ghl9P1DU);
    for (; ObPscpI > i && vFdQOBHiR1xj < nw;) {
        if (C0gbWvIR[i] == Ghl9P1DU[vFdQOBHiR1xj]) {
            i++;
            vFdQOBHiR1xj++;
            sum++;
        }
        else {
            vFdQOBHiR1xj++;
            sum = (267 - 267);
            i = (931 - 931);
        }
    }
    if (sum == ObPscpI) {
        z = vFdQOBHiR1xj - sum;
        printf ("%d\n", z);
    }
}

