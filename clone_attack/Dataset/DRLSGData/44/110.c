int s4NMwdXYS (int i8PTrcke40Q) {
    int qLt36JN;
    int oEqH3zNAUX [(296 - 263)] = {(632 - 632)};
    int ODhCLxaeHw;
    int j;
    {
        j = (358 - 358);
        while ((934 - 934) < i8PTrcke40Q) {
            oEqH3zNAUX[j] = i8PTrcke40Q % (550 - 540);
            i8PTrcke40Q = i8PTrcke40Q / (697 - 687);
            j++;
        }
    }
    ODhCLxaeHw = (783 - 783);
    for (qLt36JN = (913 - 913); j > qLt36JN; qLt36JN++) {
        ODhCLxaeHw = ODhCLxaeHw *10 + oEqH3zNAUX[qLt36JN];
    }
    return ODhCLxaeHw;
}

int main () {
    int D2KZGwkUY;
    int QSUMH9i1;
    int H6L5pcBY4;
    {
        D2KZGwkUY = 0;
        while (D2KZGwkUY < (128 - 122)) {
            if (D2KZGwkUY != 0) {
                printf ("\n");
            }
            scanf ("%d", &H6L5pcBY4);
            if (H6L5pcBY4 < 0) {
                H6L5pcBY4 = -H6L5pcBY4;
            }
            QSUMH9i1 = s4NMwdXYS (H6L5pcBY4);
            printf ("%d", QSUMH9i1);
            D2KZGwkUY++;
        }
    }
    return 0;
}

