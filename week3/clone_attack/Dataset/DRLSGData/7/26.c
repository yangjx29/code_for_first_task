int main () {
    int TxQC8hweyN;
    char dUVndR [(1197 - 941)], xRDrwO5iY2 [(1110 - 854)], PTZQtudqA [256], *WLjtq2, *nndhRfp, *kmrTXN5UGD, *sbLfDI;
    gets (dUVndR);
    gets (xRDrwO5iY2);
    gets (PTZQtudqA);
    sbLfDI = dUVndR;
    WLjtq2 = strstr (dUVndR, xRDrwO5iY2);
    kmrTXN5UGD = dUVndR;
    if (!WLjtq2) {
        printf ("%s", sbLfDI);
        exit (0);
    }
    TxQC8hweyN = strlen (dUVndR) - strlen (WLjtq2);
    nndhRfp = dUVndR + (strlen (dUVndR) - (strlen (WLjtq2) - strlen (xRDrwO5iY2)));
    kmrTXN5UGD[TxQC8hweyN] = '\0';
    printf ("%s%s%s\n", kmrTXN5UGD, PTZQtudqA, nndhRfp);
    return 0;
}

