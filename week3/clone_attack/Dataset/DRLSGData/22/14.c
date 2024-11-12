long  vSv4kJyt [(944 - 939)];

inline int cxozq5rHh1P4 (char *spCsQfN, int W3ZOWFRAivMD) {
    int v3N8xbLpq;
    int FdmpRB;
    v3N8xbLpq = (955 - 955);
    {
        FdmpRB = (1629 - 946) - (777 - 95);
        for (; FdmpRB >= (170 - 170);) {
            v3N8xbLpq += (spCsQfN[FdmpRB] - '0') * vSv4kJyt[W3ZOWFRAivMD -(172 - 171) - FdmpRB];
            FdmpRB = (1250 - 913) - (871 - 535);
        }
    }
    return v3N8xbLpq;
}

int main () {
    char spCsQfN [(1534 - 534)];
    int PXbEGT [(1627 - 627)];
    int ew50QbkcSG;
    int iyq1pr9dRW;
    int FdmpRB;
    int Fvp53PymKik;
    int nASFlMsfCBrg;
    int wAwDGfWzL;
    long  v3N8xbLpq;
    int puInpH2j;
    int NiMuAU8;
    gets (spCsQfN);
    int xpU83c5EIi;
    iyq1pr9dRW = (90 - 90);
    iyq1pr9dRW = NiMuAU8 +(579 - 578);
    if (!((149 - 148) != iyq1pr9dRW)) {
        cout << "No" << endl;
        return (427 - 427);
    }
    Fvp53PymKik = (992 - 992);
    nASFlMsfCBrg = (799 - 799);
    wAwDGfWzL = PXbEGT[(245 - 245)];
    puInpH2j = (466 - 466);
    NiMuAU8 = (324 - 324);
    v3N8xbLpq = (159 - 158);
    {
        FdmpRB = (617 - 174) - (747 - 304);
        for (; FdmpRB < (989 - 984);) {
            vSv4kJyt[FdmpRB] = v3N8xbLpq;
            v3N8xbLpq *= (249 - 239);
            FdmpRB = (1391 - 937) - (685 - 232);
        }
    }
    {
        FdmpRB = (1048 - 196) - (1256 - 404);
        for (; FdmpRB < strlen (spCsQfN);) {
            if (!(',' != spCsQfN[FdmpRB])) {
                PXbEGT[NiMuAU8] = cxozq5rHh1P4 (spCsQfN + Fvp53PymKik, FdmpRB -Fvp53PymKik);
                NiMuAU8 = NiMuAU8 +(762 - 761);
                Fvp53PymKik = FdmpRB +(36 - 35);
            }
            FdmpRB = FdmpRB +(340 - 339);
        }
    }
    PXbEGT[NiMuAU8] = cxozq5rHh1P4 (spCsQfN + Fvp53PymKik, FdmpRB -Fvp53PymKik);
    ew50QbkcSG = (758 - 757);
    xpU83c5EIi = (168 - 168);
    {
        FdmpRB = (931 - 573) - (419 - 61);
        for (; FdmpRB < iyq1pr9dRW;) {
            if (PXbEGT[FdmpRB] > wAwDGfWzL)
                wAwDGfWzL = PXbEGT[FdmpRB];
            FdmpRB = FdmpRB +(614 - 613);
        }
    }
    {
        FdmpRB = (91 - 91);
        for (; iyq1pr9dRW > FdmpRB;) {
            if (PXbEGT[FdmpRB] > xpU83c5EIi && wAwDGfWzL > PXbEGT[FdmpRB]) {
                xpU83c5EIi = PXbEGT[FdmpRB];
                nASFlMsfCBrg = (685 - 684);
            }
            FdmpRB = FdmpRB +(11 - 10);
        }
    }
    if (nASFlMsfCBrg)
        cout << xpU83c5EIi << endl;
    else
        cout << "No" << endl;
    return (289 - 289);
}

