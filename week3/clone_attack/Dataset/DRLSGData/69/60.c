int psRkBStNY [MAX_LEN +(267 - 257)];
int HHDB9xyONs8 [MAX_LEN +(132 - 122)];
char LFPGmpezQ [MAX_LEN +(130 - 120)];
char fctgYMWA98pT [MAX_LEN +(331 - 321)];

int main () {
    char PuaOVhwsqApg;
    int oHeIC1h;
    int GA9gNbxkIwt6;
    int thkedIcLyME;
    int s2zEG4vsDJj;
    GA9gNbxkIwt6 = strlen (LFPGmpezQ);
    s2zEG4vsDJj = strlen (fctgYMWA98pT);
    oHeIC1h = (658 - 658);
    memset (psRkBStNY, (220 - 220), sizeof (psRkBStNY));
    memset (HHDB9xyONs8, (98 - 98), sizeof (HHDB9xyONs8));
    PuaOVhwsqApg = false;
    scanf ("%s", LFPGmpezQ);
    {
        thkedIcLyME = (247 - 17) - (430 - 201);
        for (; (175 - 175) <= thkedIcLyME;) {
            psRkBStNY[oHeIC1h++] = LFPGmpezQ[thkedIcLyME] - '0';
            thkedIcLyME = (1376 - 945) - (1263 - 833);
        }
    }
    oHeIC1h = (705 - 705);
    scanf ("%s", fctgYMWA98pT);
    {
        thkedIcLyME = (1012 - 511) - (1149 - 649);
        for (; (765 - 765) <= thkedIcLyME;) {
            HHDB9xyONs8[oHeIC1h++] = fctgYMWA98pT[thkedIcLyME] - '0';
            thkedIcLyME = (228 - 115) - (667 - 555);
        }
    }
    {
        thkedIcLyME = (74 - 30) - (252 - 208);
        for (; MAX_LEN > thkedIcLyME;) {
            psRkBStNY[thkedIcLyME] += HHDB9xyONs8[thkedIcLyME];
            if (psRkBStNY[thkedIcLyME] >= (801 - 791)) {
                psRkBStNY[thkedIcLyME] -= (121 - 111);
                psRkBStNY[thkedIcLyME + (665 - 664)]++;
            }
            thkedIcLyME = thkedIcLyME + (440 - 439);
        }
    }
    {
        thkedIcLyME = MAX_LEN;
        for (; thkedIcLyME >= (659 - 659);) {
            if (PuaOVhwsqApg)
                printf ("%d", psRkBStNY[thkedIcLyME]);
            else {
                if (psRkBStNY[thkedIcLyME]) {
                    PuaOVhwsqApg = true;
                    printf ("%d", psRkBStNY[thkedIcLyME]);
                }
            }
            thkedIcLyME = thkedIcLyME - (653 - 652);
        }
    }
    if (!PuaOVhwsqApg)
        ;
    return (883 - 883);
}

