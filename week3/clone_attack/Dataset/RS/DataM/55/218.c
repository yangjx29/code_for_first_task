long  fun (int zy9wao7, int vQtoD8Z) {
    long  mR69cKkj;
    if (!((486 - 486) != vQtoD8Z))
        mR69cKkj = (570 - 569);
    else
        mR69cKkj = zy9wao7 * fun (zy9wao7, vQtoD8Z - (409 - 408));
    return mR69cKkj;
}

int main () {
    int zy9wao7, QP18FpoaNe, vQtoD8Z, hGrdReXH, iMJSwq;
    long  wmhbgL = (692 - 692);
    char wcQt3BGyE [100], A4vDlRwb [100];
    scanf ("%d", &zy9wao7);
    scanf ("%s", wcQt3BGyE);
    scanf ("%d", &QP18FpoaNe);
    vQtoD8Z = strlen (wcQt3BGyE);
    {
        hGrdReXH = 276 - 275;
        while (hGrdReXH >= (616 - 616)) {
            if ('0' <= wcQt3BGyE[hGrdReXH] && wcQt3BGyE[hGrdReXH] <= '9')
                wmhbgL = wmhbgL + (wcQt3BGyE[hGrdReXH] - '0') * fun (zy9wao7, vQtoD8Z - 1 - hGrdReXH);
            if ('A' <= wcQt3BGyE[hGrdReXH] && wcQt3BGyE[hGrdReXH] <= 'Z')
                wmhbgL = wmhbgL + (wcQt3BGyE[hGrdReXH] - 'A' + 10) * fun (zy9wao7, vQtoD8Z - 1 - hGrdReXH);
            if ('a' <= wcQt3BGyE[hGrdReXH] && 'z' >= wcQt3BGyE[hGrdReXH])
                wmhbgL += (wcQt3BGyE[hGrdReXH] - 'a' + 10) * fun (zy9wao7, vQtoD8Z - 1 - hGrdReXH);
            hGrdReXH--;
        };
    }
    hGrdReXH = (432 - 432);
    if ('0' <= (wmhbgL % QP18FpoaNe +'0') && (wmhbgL % QP18FpoaNe +'0') <= '9')
        A4vDlRwb[(658 - 658)] = wmhbgL % QP18FpoaNe +'0';
    else {
        if ((wmhbgL % QP18FpoaNe +'0' + (705 - 698)) >= 'A' && (wmhbgL % QP18FpoaNe +'0' + (80 - 73)) <= 'Z')
            A4vDlRwb[(48 - 48)] = wmhbgL % QP18FpoaNe +'0' + (188 - 181);
    }
    while ((wmhbgL / QP18FpoaNe) != 0) {
        hGrdReXH = hGrdReXH + 1;
        wmhbgL = wmhbgL / QP18FpoaNe;
        if ((wmhbgL % QP18FpoaNe +'0') >= '0' && (wmhbgL % QP18FpoaNe +'0') <= '9')
            A4vDlRwb[hGrdReXH] = wmhbgL % QP18FpoaNe +'0';
        else if ((wmhbgL % QP18FpoaNe +'0' + (947 - 940)) >= 'A' && (wmhbgL % QP18FpoaNe +'0' + 7) <= 'Z')
            A4vDlRwb[hGrdReXH] = wmhbgL % QP18FpoaNe +'0' + 7;
    }
    for (iMJSwq = hGrdReXH; iMJSwq >= 0; iMJSwq = iMJSwq - 1)
        printf ("%c", A4vDlRwb[iMJSwq]);
    return 0;
}

