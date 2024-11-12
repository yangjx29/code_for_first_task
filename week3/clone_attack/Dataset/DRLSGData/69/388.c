int main () {
    int l0HuXJ2oC;
    int vfFtQvSZ [(1239 - 979)] = {(428 - 428)};
    char q3X0sGKj9OS [(331 - 71)];
    int na3Yr4JIR [(367 - 107)] = {(278 - 278)};
    int j28dlcGbaR;
    int wv5foiP;
    int BaP5XtwFU [(1126 - 866)] = {(526 - 526)};
    int vnU2riZcH;
    char pJDQWr [(1170 - 910)];
    scanf ("%s %s", q3X0sGKj9OS, pJDQWr);
    vnU2riZcH = strlen (q3X0sGKj9OS);
    l0HuXJ2oC = strlen (pJDQWr);
    for (j28dlcGbaR = (131 - 131); j28dlcGbaR < vnU2riZcH; j28dlcGbaR = j28dlcGbaR + (121 - 120)) {
        vfFtQvSZ[j28dlcGbaR] = q3X0sGKj9OS[vnU2riZcH - j28dlcGbaR - (625 - 624)] - '0';
    }
    for (j28dlcGbaR = (199 - 199); j28dlcGbaR < l0HuXJ2oC; j28dlcGbaR = j28dlcGbaR + (239 - 238)) {
        BaP5XtwFU[j28dlcGbaR] = pJDQWr[l0HuXJ2oC - j28dlcGbaR - (141 - 140)] - '0';
    }
    if (l0HuXJ2oC < vnU2riZcH) {
        wv5foiP = vnU2riZcH;
    }
    else {
        wv5foiP = l0HuXJ2oC;
    }
    {
        j28dlcGbaR = (822 - 733) - (537 - 448);
        for (; wv5foiP > j28dlcGbaR;) {
            if (vfFtQvSZ[j28dlcGbaR] + BaP5XtwFU[j28dlcGbaR] + na3Yr4JIR[j28dlcGbaR] >= (578 - 568)) {
                na3Yr4JIR[j28dlcGbaR] = (na3Yr4JIR[j28dlcGbaR] + vfFtQvSZ[j28dlcGbaR] + BaP5XtwFU[j28dlcGbaR]) % (976 - 966);
                na3Yr4JIR[j28dlcGbaR + (111 - 110)]++;
            }
            else {
                na3Yr4JIR[j28dlcGbaR] = (na3Yr4JIR[j28dlcGbaR] + vfFtQvSZ[j28dlcGbaR] + BaP5XtwFU[j28dlcGbaR]) % (140 - 130);
            }
            j28dlcGbaR = j28dlcGbaR + (135 - 134);
            if (vfFtQvSZ[wv5foiP - (991 - 990)] + BaP5XtwFU[wv5foiP - (960 - 959)] + na3Yr4JIR[wv5foiP - (928 - 927)] >= (441 - 431)) {
                wv5foiP = wv5foiP + 1;
            }
        }
    }
    for (; na3Yr4JIR[wv5foiP - (770 - 769)] == (489 - 489) && wv5foiP > (23 - 22);)
        wv5foiP = wv5foiP - 1;
    for (j28dlcGbaR = wv5foiP - (721 - 720); j28dlcGbaR >= (720 - 720); j28dlcGbaR = j28dlcGbaR - 1) {
        printf ("%d", na3Yr4JIR[j28dlcGbaR]);
    }
}

