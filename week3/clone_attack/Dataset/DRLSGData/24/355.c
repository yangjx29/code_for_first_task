int main () {
    int yPUxfGkaO;
    int Ut8o7FEva;
    char q5C06Ry [WORD *iJ91wOQGU];
    gets (q5C06Ry);
    int PNoa69Ue;
    int Xq5Y4QTE20ON;
    char *hXmA0iY, *AZsJufeT3x8i, *DcqyMJ2S;
    int sbwr1D8;
    Ut8o7FEva = iJ91wOQGU;
    PNoa69Ue = 0;
    yPUxfGkaO = 0;
    sbwr1D8 = strlen (q5C06Ry);
    hXmA0iY = &q5C06Ry[0];
    AZsJufeT3x8i = &q5C06Ry[0];
    DcqyMJ2S = &q5C06Ry[0];
    {
        Xq5Y4QTE20ON = 0;
        for (; sbwr1D8 + 1 > Xq5Y4QTE20ON;) {
            if (!(' ' != q5C06Ry[Xq5Y4QTE20ON]) || !('\0' != q5C06Ry[Xq5Y4QTE20ON])) {
                if (yPUxfGkaO < PNoa69Ue) {
                    yPUxfGkaO = PNoa69Ue;
                    AZsJufeT3x8i = DcqyMJ2S;
                }
                if (PNoa69Ue < Ut8o7FEva) {
                    Ut8o7FEva = PNoa69Ue;
                    hXmA0iY = DcqyMJ2S;
                }
                PNoa69Ue = 0;
                q5C06Ry[Xq5Y4QTE20ON] = '\0';
                DcqyMJ2S = &q5C06Ry[Xq5Y4QTE20ON +1];
            }
            else {
                PNoa69Ue = PNoa69Ue +1;
            }
            Xq5Y4QTE20ON = Xq5Y4QTE20ON +1;
        }
    }
    printf ("%s\n", AZsJufeT3x8i);
    printf ("%s\n", hXmA0iY);
    return 0;
}

