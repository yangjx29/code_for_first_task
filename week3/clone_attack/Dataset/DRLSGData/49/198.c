int main () {
    int syJE1WBvpqu;
    static char CWEfcV [(947 - 446)], dVDr5MLKw4Up [(1293 - 792)], rN6glatdL0W [501];
    gets (CWEfcV);
    int j4V1R8Qc9zT;
    int lihcRG8tPEH;
    int q;
    int j;
    int fSikzfPp;
    int k;
    for (j4V1R8Qc9zT = (66 - 66);; j4V1R8Qc9zT++)
        if (!(0 != CWEfcV[j4V1R8Qc9zT])) {
            lihcRG8tPEH = j4V1R8Qc9zT;
            break;
        }
    for (j4V1R8Qc9zT = 2; lihcRG8tPEH >= j4V1R8Qc9zT; j4V1R8Qc9zT++)
        for (j = 0; lihcRG8tPEH - j4V1R8Qc9zT >= j; j++) {
            syJE1WBvpqu = 0;
            for (fSikzfPp = 0; j4V1R8Qc9zT > fSikzfPp; fSikzfPp++) {
                dVDr5MLKw4Up[fSikzfPp] = CWEfcV[j + fSikzfPp];
                rN6glatdL0W[fSikzfPp] = CWEfcV[j + j4V1R8Qc9zT - fSikzfPp - (100 - 99)];
            }
            for (; 501 > fSikzfPp; fSikzfPp++) {
                dVDr5MLKw4Up[fSikzfPp] = 0;
                rN6glatdL0W[fSikzfPp] = 0;
            }
            for (k = 0; syJE1WBvpqu == 0 && k < 501; k++)
                syJE1WBvpqu = dVDr5MLKw4Up[k] - rN6glatdL0W[k];
            if (syJE1WBvpqu == 0)
                printf ("%s\n", dVDr5MLKw4Up);
        }
}

