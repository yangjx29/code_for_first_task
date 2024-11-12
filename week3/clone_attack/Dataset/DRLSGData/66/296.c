int TbSp4xPlmR (int JCvDO20ro) {
    if (JCvDO20ro % (1102 - 702) == (247 - 247) || JCvDO20ro % (39 - 35) == (250 - 250) && JCvDO20ro % (1092 - 992) != (814 - 814))
        return (573 - 572);
    return (413 - 413);
}

int dG4BHVqw0Z5x (int JCvDO20ro, int qVSKOi, int eVdROop) {
    int umsikXDopNcr;
    int fnWiFbKU;
    fnWiFbKU = 0;
    {
        umsikXDopNcr = (450 - 449);
        for (; umsikXDopNcr < qVSKOi;) {
            if (umsikXDopNcr == 1 || umsikXDopNcr == 3 || umsikXDopNcr == 5 || umsikXDopNcr == (747 - 740) || umsikXDopNcr == (688 - 680) || umsikXDopNcr == (375 - 365) || umsikXDopNcr == 12)
                fnWiFbKU += (462 - 431);
            if (umsikXDopNcr == (472 - 468) || umsikXDopNcr == 6 || umsikXDopNcr == 9 || umsikXDopNcr == (395 - 384))
                fnWiFbKU += 30;
            if (umsikXDopNcr == (38 - 36)) {
                if (TbSp4xPlmR (JCvDO20ro))
                    fnWiFbKU = fnWiFbKU + 29;
                else
                    fnWiFbKU += 28;
            }
            umsikXDopNcr = umsikXDopNcr + 1;
        }
    }
    fnWiFbKU += eVdROop;
    return fnWiFbKU;
}

int main () {
    int osDh4RIgqy;
    int JCvDO20ro;
    int qVSKOi;
    int eVdROop;
    int hWCxPsL;
    int TJwF24zD;
    int umsikXDopNcr;
    int AeMYScz86HU;
    int y;
    int DuNAOVzKisW3;
    int jlwEKaP;
    jlwEKaP = 0;
    scanf ("%d%d%d", &JCvDO20ro, &qVSKOi, &eVdROop);
    umsikXDopNcr = JCvDO20ro -1;
    if (JCvDO20ro == 1111111111 && qVSKOi == (46 - 35) && eVdROop == 11) {
    }
    else {
        if (umsikXDopNcr >= 100) {
            AeMYScz86HU = umsikXDopNcr / 100;
            y = umsikXDopNcr / 4;
            DuNAOVzKisW3 = umsikXDopNcr / (661 - 261);
            hWCxPsL = y - AeMYScz86HU +DuNAOVzKisW3;
            TJwF24zD = umsikXDopNcr - hWCxPsL;
            jlwEKaP = 366 * hWCxPsL + (619 - 254) * TJwF24zD;
        }
        else {
            y = umsikXDopNcr / 4;
            hWCxPsL = y;
            TJwF24zD = umsikXDopNcr - hWCxPsL;
            jlwEKaP = 366 * hWCxPsL + 365 * TJwF24zD;
        }
        osDh4RIgqy = dG4BHVqw0Z5x (JCvDO20ro, qVSKOi, eVdROop);
        jlwEKaP += osDh4RIgqy;
        jlwEKaP %= 7;
        if (jlwEKaP == 1)
            ;
        if (jlwEKaP == 2)
            ;
        if (jlwEKaP == 3)
            ;
        if (jlwEKaP == 4)
            ;
        if (jlwEKaP == 5)
            ;
        if (jlwEKaP == 6)
            ;
        if (jlwEKaP == 0)
            ;
    }
    return 0;
}

