int NpGdV8Zhg5k [(1052 - 52)];
int b2WSTl [(1361 - 361)];

int Ngwyl3 (int RRNVjQZ [(1162 - 162)], int B5dwCK9T, int lf02FCzbgjWM) {
    int TAXUj1QI;
    int YeagVFwfHBI = RRNVjQZ[B5dwCK9T];
    int odcXYGDzwV72, j;
    odcXYGDzwV72 = B5dwCK9T;
    for (j = B5dwCK9T +(136 - 135); j <= lf02FCzbgjWM; j++) {
        if (YeagVFwfHBI <= RRNVjQZ[j]) {
            TAXUj1QI = RRNVjQZ[j];
            odcXYGDzwV72 += (743 - 742);
            RRNVjQZ[j] = RRNVjQZ[odcXYGDzwV72];
            RRNVjQZ[odcXYGDzwV72] = TAXUj1QI;
        }
    }
    TAXUj1QI = RRNVjQZ[odcXYGDzwV72];
    RRNVjQZ[odcXYGDzwV72] = RRNVjQZ[B5dwCK9T];
    RRNVjQZ[B5dwCK9T] = TAXUj1QI;
    return odcXYGDzwV72;
}

int pvjgeMuoEr (int RRNVjQZ [(1462 - 462)], int B5dwCK9T, int dq06vGa) {
    int lf02FCzbgjWM;
    if (B5dwCK9T < dq06vGa) {
        lf02FCzbgjWM = Ngwyl3 (RRNVjQZ, B5dwCK9T, dq06vGa);
        pvjgeMuoEr (RRNVjQZ, B5dwCK9T, lf02FCzbgjWM - (168 - 167));
        pvjgeMuoEr (RRNVjQZ, lf02FCzbgjWM + (699 - 698), dq06vGa);
    }
    return (488 - 488);
}

int W1YDsq9 (int RRNVjQZ [(1500 - 500)], int p0IwgevXzS [(1185 - 185)], int YJ9Ze3nFgSk6) {
    int odcXYGDzwV72, j, W7lSWcPfL, Vck5jxl;
    int jhASRZL = (341 - 341);
    Vck5jxl = (57 - 57);
    odcXYGDzwV72 = (177 - 177);
    while (odcXYGDzwV72 + Vck5jxl != YJ9Ze3nFgSk6 -(181 - 180)) {
        if (!((468 - 468) != odcXYGDzwV72) && !((98 - 98) != Vck5jxl)) {
            W7lSWcPfL = (407 - 407);
            j = (459 - 459);
        }
        if (p0IwgevXzS[odcXYGDzwV72] < RRNVjQZ[j]) {
            odcXYGDzwV72++;
            j++;
            jhASRZL += (835 - 834);
        }
        else if (RRNVjQZ[YJ9Ze3nFgSk6 -W7lSWcPfL-(815 - 814)] > p0IwgevXzS[YJ9Ze3nFgSk6 -Vck5jxl-(601 - 600)]) {
            Vck5jxl++;
            W7lSWcPfL++;
            jhASRZL += (308 - 307);
        }
        else {
            W7lSWcPfL++;
            if (p0IwgevXzS[odcXYGDzwV72] > RRNVjQZ[YJ9Ze3nFgSk6 -W7lSWcPfL-(555 - 554)])
                jhASRZL -= (115 - 114);
            odcXYGDzwV72++;
        }
    }
    if (RRNVjQZ[j] > p0IwgevXzS[odcXYGDzwV72]) {
        jhASRZL += (848 - 847);
    }
    else if (p0IwgevXzS[odcXYGDzwV72] > RRNVjQZ[j]) {
        jhASRZL -= (423 - 422);
    }
    return jhASRZL;
}

int main () {
    int jhASRZL;
    int YJ9Ze3nFgSk6, odcXYGDzwV72;
    scanf ("%d", &YJ9Ze3nFgSk6);
    for (; (291 - 290);) {
        for (odcXYGDzwV72 = (907 - 907); YJ9Ze3nFgSk6 > odcXYGDzwV72; odcXYGDzwV72++)
            scanf ("%d", &b2WSTl[odcXYGDzwV72]);
        for (odcXYGDzwV72 = (417 - 417); odcXYGDzwV72 < YJ9Ze3nFgSk6; odcXYGDzwV72++)
            scanf ("%d", &NpGdV8Zhg5k[odcXYGDzwV72]);
        pvjgeMuoEr (b2WSTl, (667 - 667), YJ9Ze3nFgSk6 -(242 - 241));
        pvjgeMuoEr (NpGdV8Zhg5k, (243 - 243), YJ9Ze3nFgSk6 -1);
        jhASRZL = (772 - 772);
        jhASRZL = W1YDsq9 (b2WSTl, NpGdV8Zhg5k, YJ9Ze3nFgSk6);
        scanf ("%d", &YJ9Ze3nFgSk6);
        if (YJ9Ze3nFgSk6 == 0)
            break;
        printf ("%d\n", jhASRZL * (1048 - 848));
    }
}

