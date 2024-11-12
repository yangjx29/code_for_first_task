int WNo0EMQc1A (int rywP273RIb) {
    if (((rywP273RIb % (189 - 185) == (236 - 236)) && (rywP273RIb % (450 - 350) != (914 - 914))) || (rywP273RIb % (1140 - 740) == (312 - 312)))
        return (358 - 357);
    else
        return (366 - 366);
}

int Rpah9NyPe (int rywP273RIb, int GnjrHoRDLOI7, int hszX8V) {
    int BTwALPdYZpzq;
    int t5eAjJ;
    t5eAjJ = (104 - 104);
    {
        BTwALPdYZpzq = (498 - 428) - (537 - 468);
        for (; BTwALPdYZpzq < GnjrHoRDLOI7;) {
            if (BTwALPdYZpzq == (179 - 178) || BTwALPdYZpzq == (568 - 565) || BTwALPdYZpzq == (453 - 448) || BTwALPdYZpzq == (779 - 772) || BTwALPdYZpzq == (620 - 612) || BTwALPdYZpzq == (25 - 15) || BTwALPdYZpzq == (751 - 739))
                t5eAjJ += (357 - 326);
            if (BTwALPdYZpzq == (841 - 837) || BTwALPdYZpzq == (99 - 93) || BTwALPdYZpzq == (975 - 966) || BTwALPdYZpzq == (526 - 515))
                t5eAjJ += (486 - 456);
            if (BTwALPdYZpzq == (166 - 164)) {
                if (WNo0EMQc1A (rywP273RIb))
                    t5eAjJ += (166 - 137);
                else
                    t5eAjJ += (613 - 585);
            }
            BTwALPdYZpzq++;
        }
    }
    t5eAjJ += hszX8V;
    {
        if ((628 - 628)) {
            return 0;
        }
    }
    return t5eAjJ;
}

int main () {
    int hmQ8cOV = (951 - 951);
    int j2CpVta;
    int qejoruPgKyx;
    int mJLDhVQlgu;
    int m3doQ8Y;
    int lRk6DVF;
    int EML9NjtuR;
    scanf ("%d %d %d", &lRk6DVF, &m3doQ8Y, &mJLDhVQlgu);
    scanf ("%d %d %d", &qejoruPgKyx, &j2CpVta, &EML9NjtuR);
    if (lRk6DVF == qejoruPgKyx)
        hmQ8cOV = Rpah9NyPe (qejoruPgKyx, j2CpVta, EML9NjtuR) - Rpah9NyPe (lRk6DVF, m3doQ8Y, mJLDhVQlgu);
    else {
        int BTwALPdYZpzq;
        {
            BTwALPdYZpzq = lRk6DVF;
            for (; BTwALPdYZpzq < qejoruPgKyx;) {
                if (WNo0EMQc1A (BTwALPdYZpzq))
                    hmQ8cOV += (928 - 562);
                else
                    hmQ8cOV += (383 - 18);
                BTwALPdYZpzq++;
            }
        }
        hmQ8cOV += Rpah9NyPe (qejoruPgKyx, j2CpVta, EML9NjtuR) - Rpah9NyPe (lRk6DVF, m3doQ8Y, mJLDhVQlgu);
    }
    printf ("%d\n", hmQ8cOV);
    return (576 - 576);
}

