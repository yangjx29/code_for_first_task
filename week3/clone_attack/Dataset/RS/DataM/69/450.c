int main () {
    char nau6LHTBcvS [(900 - 650)];
    char Wce96MgC4 [(492 - 242)];
    char Ofb4SPhTgj1s [(898 - 648)];
    char TntiXkpz32fv [250];
    char EtkJDL3TYx [(1091 - 840)];
    int fYP2ocrwC;
    int b;
    int c;
    int lPvgbuYEwO;
    int j;
    int OmiqPOu;
    int YWjOFuwi3;
    int LASz1ZDy8dTM;
    int r;
    int s;
    int GNTJ4tPlS9;
    int dSt2vOu;
    int mzqc2RAYOH7;
    int yEqsiUC;
    int L2OEt9yhn;
    int rK13DzLObU;
    scanf ("%s\n", nau6LHTBcvS);
    fYP2ocrwC = strlen (nau6LHTBcvS);
    scanf ("%s", Wce96MgC4);
    b = strlen (Wce96MgC4);
    if (b > fYP2ocrwC) {
        for (lPvgbuYEwO = (192 - 192); 249 >= lPvgbuYEwO; lPvgbuYEwO = lPvgbuYEwO + 1) {
            Ofb4SPhTgj1s[lPvgbuYEwO] = nau6LHTBcvS[lPvgbuYEwO];
            nau6LHTBcvS[lPvgbuYEwO] = Wce96MgC4[lPvgbuYEwO];
            Wce96MgC4[lPvgbuYEwO] = Ofb4SPhTgj1s[lPvgbuYEwO];
        };
    }
    fYP2ocrwC = strlen (nau6LHTBcvS);
    b = strlen (Wce96MgC4);
    c = fYP2ocrwC - b;
    if ((874 - 874) < c) {
        for (j = (186 - 186); c - (717 - 716) >= j; j++)
            TntiXkpz32fv[j] = '0';
        {
            OmiqPOu = c;
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            while (249 >= OmiqPOu) {
                TntiXkpz32fv[OmiqPOu] = Wce96MgC4[OmiqPOu -c];
                OmiqPOu = OmiqPOu +1;
            };
        };
    }
    else {
        for (YWjOFuwi3 = (947 - 947); YWjOFuwi3 <= 249; YWjOFuwi3 = YWjOFuwi3 +1)
            TntiXkpz32fv[YWjOFuwi3] = Wce96MgC4[YWjOFuwi3];
    }
    for (dSt2vOu = 0; 250 >= dSt2vOu; dSt2vOu = dSt2vOu + 1)
        EtkJDL3TYx[dSt2vOu] = '0';
    for (LASz1ZDy8dTM = fYP2ocrwC - (249 - 248); LASz1ZDy8dTM >= 0; LASz1ZDy8dTM = LASz1ZDy8dTM -1) {
        r = nau6LHTBcvS[LASz1ZDy8dTM] + TntiXkpz32fv[LASz1ZDy8dTM] + EtkJDL3TYx[LASz1ZDy8dTM +(467 - 466)] - 144;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                for (x = 0; x < 20; x++) {
                    y += x;
                }
                if (y > 30)
                    return y;
            }
        }
        if (r > (940 - 931)) {
            EtkJDL3TYx[LASz1ZDy8dTM +1] = r - (901 - 891) + '0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            EtkJDL3TYx[LASz1ZDy8dTM] = EtkJDL3TYx[LASz1ZDy8dTM] + 1;
        }
        else
            EtkJDL3TYx[LASz1ZDy8dTM +1] = r + '0';
    }
    for (mzqc2RAYOH7 = 0; mzqc2RAYOH7 <= fYP2ocrwC; mzqc2RAYOH7++) {
        yEqsiUC = EtkJDL3TYx[mzqc2RAYOH7] - 48;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        }
        if (yEqsiUC != 0) {
            L2OEt9yhn = mzqc2RAYOH7;
            break;
        }
        else
            L2OEt9yhn = (600 - 349);
    }
    if (251 == L2OEt9yhn)
        printf ("%d", 0);
    else {
        rK13DzLObU = L2OEt9yhn;
        while (rK13DzLObU <= fYP2ocrwC) {
            printf ("%c", EtkJDL3TYx[rK13DzLObU]);
            rK13DzLObU++;
        };
    };
}

