int Bsh9xJ8 [1002], pSY1otWKIZ = 0;

int main () {
    int co21tHqT9k4 [2] [1002];
    int UP0SqK;
    void  bWPNLpD2Tz (int LpUz93 [2] [1002], int xxVcBdJF);
    int ezFik4;
    UP0SqK = 1;
    for (; !(1 != UP0SqK);) {
        scanf ("%d", &ezFik4);
        if (ezFik4 != 0) {
            pSY1otWKIZ++;
            bWPNLpD2Tz (co21tHqT9k4, ezFik4);
        }
        else
            UP0SqK = 0;
    }
    for (int YnM7yvBU = 0;
    YnM7yvBU < pSY1otWKIZ; YnM7yvBU = YnM7yvBU +1)
        printf ("%d\n", Bsh9xJ8[YnM7yvBU]);
}

void  bWPNLpD2Tz (int LpUz93 [2] [1002], int xxVcBdJF) {
    int brLaqJoH7X;
    int BsVQC3UPNb;
    int k3x7y4YogRT;
    int UP0SqK;
    int CYH9rz;
    int YnM7yvBU;
    int NvpNDwPGOZnk [1002] = {0};
    int XcMg5jy;
    int WDoheR9cjClA;
    BsVQC3UPNb = 0;
    UP0SqK = 1;
    for (YnM7yvBU = 0; 2 > YnM7yvBU; YnM7yvBU = YnM7yvBU +1)
        for (WDoheR9cjClA = 0; xxVcBdJF > WDoheR9cjClA; WDoheR9cjClA = WDoheR9cjClA +1)
            scanf ("%d", &LpUz93[YnM7yvBU][WDoheR9cjClA]);
    for (YnM7yvBU = 0; YnM7yvBU < xxVcBdJF - 1; YnM7yvBU = YnM7yvBU +1)
        for (WDoheR9cjClA = 1; YnM7yvBU +WDoheR9cjClA < xxVcBdJF; WDoheR9cjClA = WDoheR9cjClA +1)
            if (LpUz93[0][YnM7yvBU +WDoheR9cjClA] > LpUz93[0][YnM7yvBU]) {
                brLaqJoH7X = LpUz93[0][YnM7yvBU];
                LpUz93[0][YnM7yvBU] = LpUz93[0][YnM7yvBU +WDoheR9cjClA];
                LpUz93[0][YnM7yvBU +WDoheR9cjClA] = brLaqJoH7X;
            }
    {
        YnM7yvBU = 0;
        for (; YnM7yvBU < xxVcBdJF - 1;) {
            for (WDoheR9cjClA = 1; xxVcBdJF > YnM7yvBU +WDoheR9cjClA; WDoheR9cjClA++)
                if (LpUz93[1][YnM7yvBU] < LpUz93[1][YnM7yvBU +WDoheR9cjClA]) {
                    brLaqJoH7X = LpUz93[1][YnM7yvBU];
                    LpUz93[1][YnM7yvBU] = LpUz93[1][YnM7yvBU +WDoheR9cjClA];
                    LpUz93[1][YnM7yvBU +WDoheR9cjClA] = brLaqJoH7X;
                }
            YnM7yvBU = YnM7yvBU +1;
        }
    }
    for (YnM7yvBU = 0; YnM7yvBU &&!(1 != UP0SqK) < xxVcBdJF; YnM7yvBU++) {
        if (LpUz93[1][YnM7yvBU] < LpUz93[0][0] || !(LpUz93[1][YnM7yvBU] != LpUz93[0][0])) {
            UP0SqK = 0;
            brLaqJoH7X = YnM7yvBU;
        }
    }
    if (!(1 != UP0SqK))
        XcMg5jy = xxVcBdJF * (-200);
    else {
        for (; brLaqJoH7X <= xxVcBdJF - 1;) {
            CYH9rz = 0;
            k3x7y4YogRT = 0;
            {
                WDoheR9cjClA = brLaqJoH7X;
                YnM7yvBU = 0;
                for (; xxVcBdJF > YnM7yvBU &&WDoheR9cjClA < xxVcBdJF;) {
                    if (LpUz93[1][WDoheR9cjClA] < LpUz93[0][YnM7yvBU])
                        k3x7y4YogRT = k3x7y4YogRT + 1;
                    else {
                        if (LpUz93[0][YnM7yvBU] == LpUz93[1][WDoheR9cjClA])
                            CYH9rz = CYH9rz +1;
                    }
                    YnM7yvBU++;
                    WDoheR9cjClA = WDoheR9cjClA +1;
                }
            }
            NvpNDwPGOZnk[BsVQC3UPNb++] = k3x7y4YogRT * 200 - (xxVcBdJF - CYH9rz -k3x7y4YogRT) * 200;
            brLaqJoH7X = brLaqJoH7X + 1;
        }
        XcMg5jy = NvpNDwPGOZnk[0];
        for (YnM7yvBU = 0; YnM7yvBU < BsVQC3UPNb; YnM7yvBU++)
            if (XcMg5jy < NvpNDwPGOZnk[YnM7yvBU])
                XcMg5jy = NvpNDwPGOZnk[YnM7yvBU];
    }
    Bsh9xJ8[pSY1otWKIZ] = XcMg5jy;
}

