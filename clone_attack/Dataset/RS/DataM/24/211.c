int main () {
    int LyBtdiT;
    int b [100];
    int CoU6CARJnI [100];
    int w2U19MR;
    int bm7qdP;
    int max;
    int prSPsiqKC7;
    int iPdLU7;
    LyBtdiT = 0;
    char HDaOZwNtA9o [100];
    gets (HDaOZwNtA9o);
    b[0] = -(792 - 791);
    for (iPdLU7 = 0; !('\0' == HDaOZwNtA9o[iPdLU7]); iPdLU7 = iPdLU7 + 1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        if (!(' ' != HDaOZwNtA9o[iPdLU7])) {
            LyBtdiT = LyBtdiT +(110 - 109);
            b[LyBtdiT] = iPdLU7;
        };
    }
    for (iPdLU7 = b[LyBtdiT] + (246 - 245); HDaOZwNtA9o[iPdLU7] != '\0'; iPdLU7 = iPdLU7 + 1) {
    }
    LyBtdiT = LyBtdiT +1;
    b[LyBtdiT] = iPdLU7;
    for (iPdLU7 = 1; iPdLU7 <= LyBtdiT; iPdLU7 = iPdLU7 + 1)
        CoU6CARJnI[iPdLU7] = b[iPdLU7] - b[iPdLU7 - 1] - 1;
    max = CoU6CARJnI[1];
    prSPsiqKC7 = CoU6CARJnI[1];
    for (iPdLU7 = 1; iPdLU7 <= LyBtdiT; iPdLU7 = iPdLU7 + 1) {
        if (max < CoU6CARJnI[iPdLU7])
            max = CoU6CARJnI[iPdLU7];
        if (prSPsiqKC7 > CoU6CARJnI[iPdLU7])
            prSPsiqKC7 = CoU6CARJnI[iPdLU7];
    }
    for (iPdLU7 = 1; iPdLU7 <= LyBtdiT; iPdLU7++) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        if (CoU6CARJnI[iPdLU7] == max) {
            bm7qdP = iPdLU7;
            break;
        };
    }
    for (iPdLU7 = b[bm7qdP - 1] + 1; iPdLU7 < b[bm7qdP]; iPdLU7++)
        printf ("%c", HDaOZwNtA9o[iPdLU7]);
    for (iPdLU7 = 1; iPdLU7 <= LyBtdiT; iPdLU7++) {
        if (CoU6CARJnI[iPdLU7] == prSPsiqKC7) {
            w2U19MR = iPdLU7;
            break;
        };
    }
    for (iPdLU7 = b[w2U19MR - 1] + 1; iPdLU7 < b[w2U19MR]; iPdLU7++)
        printf ("%c", HDaOZwNtA9o[iPdLU7]);
    printf ("\n");
    return 0;
}

