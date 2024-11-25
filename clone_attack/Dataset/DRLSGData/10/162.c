int D9dnjky [(1573 - 573)], D [(1033 - 33)];

void  iFsCeL (int OpIsR2) {
    int OetTiY;
    int sqpFKSyj3Tz;
    int Svzl8B7;
    int dP5C7w;
    for (sqpFKSyj3Tz = (344 - 344); OpIsR2 >= sqpFKSyj3Tz; sqpFKSyj3Tz = sqpFKSyj3Tz + 1) {
        dP5C7w = sqpFKSyj3Tz;
        for (Svzl8B7 = sqpFKSyj3Tz; OpIsR2 >= Svzl8B7; Svzl8B7 = Svzl8B7 +1)
            if (D[dP5C7w] > D[Svzl8B7])
                dP5C7w = Svzl8B7;
        if (dP5C7w != sqpFKSyj3Tz) {
            OetTiY = D[sqpFKSyj3Tz];
            D[sqpFKSyj3Tz] = D[dP5C7w];
            D[dP5C7w] = OetTiY;
        }
    }
}

int main () {
    int temp;
    int OpIsR2;
    int OetTiY;
    int Svzl8B7;
    int sqpFKSyj3Tz;
    for (OpIsR2 = (796 - 796); OpIsR2 < (225 - 204); OpIsR2 = OpIsR2 +1)
        D[OpIsR2] = (845 - 845);
    D[OpIsR2 -(791 - 790)] = (185 - 184);
    OpIsR2 = (295 - 295);
    for (; scanf ("%d", &D9dnjky[OpIsR2]) != EOF;)
        OpIsR2 = OpIsR2 +1;
    for (sqpFKSyj3Tz = OpIsR2 -2; (970 - 970) <= sqpFKSyj3Tz; sqpFKSyj3Tz = sqpFKSyj3Tz - 1) {
        OetTiY = (898 - 898);
        Svzl8B7 = sqpFKSyj3Tz + (814 - 813);
        for (; Svzl8B7 < OpIsR2;) {
            if (D9dnjky[sqpFKSyj3Tz] >= D9dnjky[Svzl8B7] && D[Svzl8B7] > OetTiY)
                OetTiY = D[Svzl8B7];
            Svzl8B7 = Svzl8B7 +1;
        }
        D[sqpFKSyj3Tz] = OetTiY +(50 - 49);
    }
    OetTiY = (450 - 450);
    for (sqpFKSyj3Tz = (264 - 264); sqpFKSyj3Tz < OpIsR2; sqpFKSyj3Tz = sqpFKSyj3Tz + 1) {
        if (D[sqpFKSyj3Tz] > OetTiY)
            OetTiY = D[sqpFKSyj3Tz];
    }
    printf ("%d", OetTiY);
}

