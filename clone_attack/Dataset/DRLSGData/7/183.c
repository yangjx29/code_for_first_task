int main () {
    int xd7gHTUAzaX [(926 - 670)];
    char IOVPMLEuxdYw [(1193 - 936)], pbJumYkje0 [(988 - 731)], hQZYNK2p [(721 - 464)];
    gets (IOVPMLEuxdYw);
    gets (pbJumYkje0);
    gets (hQZYNK2p);
    int OxiDb6, eKRcIXbA, XqNLIP9uOUXf, i, lneSR0U2Ntyc, ZCa45decn9tJ = (918 - 918), pKgU7jw1DnJT, BH9PIXSb0s, aY4CMSe58HUR, wBiESboC, ob9QuCA;
    int Zr8YFKVEW = (535 - 535);
    OxiDb6 = strlen (IOVPMLEuxdYw);
    eKRcIXbA = strlen (pbJumYkje0);
    for (i = (40 - 40); i < OxiDb6; i = i + (953 - 952)) {
        for (lneSR0U2Ntyc = (872 - 872); lneSR0U2Ntyc < eKRcIXbA - (498 - 497); lneSR0U2Ntyc = lneSR0U2Ntyc + (561 - 560)) {
            if ((IOVPMLEuxdYw[i + lneSR0U2Ntyc] == pbJumYkje0[lneSR0U2Ntyc]) && (IOVPMLEuxdYw[i + lneSR0U2Ntyc + (673 - 672)] == pbJumYkje0[lneSR0U2Ntyc + (61 - 60)])) {
                xd7gHTUAzaX[ZCa45decn9tJ] = i;
                ZCa45decn9tJ = ZCa45decn9tJ +(188 - 187);
                Zr8YFKVEW = 1;
            }
            break;
        }
    }
    pKgU7jw1DnJT = xd7gHTUAzaX[(829 - 829)];
    XqNLIP9uOUXf = strlen (hQZYNK2p);
    if (Zr8YFKVEW == 1) {
        for (BH9PIXSb0s = 0; BH9PIXSb0s < pKgU7jw1DnJT; BH9PIXSb0s = BH9PIXSb0s +1) {
            printf ("%c", IOVPMLEuxdYw[BH9PIXSb0s]);
        }
        for (aY4CMSe58HUR = 0; aY4CMSe58HUR < XqNLIP9uOUXf; aY4CMSe58HUR = aY4CMSe58HUR + 1) {
            printf ("%c", hQZYNK2p[aY4CMSe58HUR]);
        }
        for (wBiESboC = 0; wBiESboC < OxiDb6 -pKgU7jw1DnJT - eKRcIXbA; wBiESboC = wBiESboC + 1) {
            printf ("%c", IOVPMLEuxdYw[pKgU7jw1DnJT + eKRcIXbA + wBiESboC]);
        }
    }
    else if (Zr8YFKVEW == 0) {
        puts (IOVPMLEuxdYw);
    }
    return 0;
}

