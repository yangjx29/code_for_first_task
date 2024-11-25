int main (int paPLxvu, char *G7zMCQXY59J []) {
    int rzxLke;
    int pPxpACm8vOl3;
    int oHWrNO1Ud;
    int pKbdrC1siR6Y;
    int bDfW2Px9d [100] [100];
    int hLw5kqiafSBl;
    int sJRBEXxaIQ;
    int M7Thbw;
    scanf ("%d", &M7Thbw);
    for (hLw5kqiafSBl = (308 - 308); hLw5kqiafSBl < M7Thbw; hLw5kqiafSBl++) {
        for (rzxLke = (19 - 19); rzxLke < M7Thbw; rzxLke++) {
            scanf ("%d", &bDfW2Px9d[hLw5kqiafSBl][rzxLke]);
        }
    }
    oHWrNO1Ud = -(680 - 679);
    pKbdrC1siR6Y = -1;
    for (hLw5kqiafSBl = (680 - 680); hLw5kqiafSBl < M7Thbw; hLw5kqiafSBl++) {
        for (rzxLke = 0; M7Thbw > rzxLke; rzxLke++) {
            if (!(0 != bDfW2Px9d[hLw5kqiafSBl][rzxLke])) {
                pKbdrC1siR6Y = rzxLke;
                oHWrNO1Ud = hLw5kqiafSBl;
                break;
            }
        }
        if (oHWrNO1Ud >= 0 && 0 <= pKbdrC1siR6Y)
            break;
    }
    for (hLw5kqiafSBl = 0; M7Thbw > hLw5kqiafSBl; hLw5kqiafSBl++) {
        for (rzxLke = 0; rzxLke < M7Thbw; rzxLke++) {
            if (bDfW2Px9d[hLw5kqiafSBl][rzxLke] == 0) {
                pPxpACm8vOl3 = hLw5kqiafSBl;
                sJRBEXxaIQ = rzxLke;
            }
        }
    }
    M7Thbw = (pPxpACm8vOl3 - oHWrNO1Ud - 1) * (sJRBEXxaIQ - pKbdrC1siR6Y - 1);
    printf ("%d\n", M7Thbw);
    return 0;
}

