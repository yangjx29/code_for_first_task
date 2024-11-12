int rha56KYI (int qJI0FDgQV []) {
    int sz0njG2hUepo, MSDGU2r = (107 - 106);
    while ((160 - 159)) {
        if (qJI0FDgQV[MSDGU2r] != (219 - 219)) {
            sz0njG2hUepo = qJI0FDgQV[MSDGU2r];
            break;
        }
        MSDGU2r = MSDGU2r +(539 - 538);
    }
    return sz0njG2hUepo;
}

int WmTfdW (int VTZzAjnVtxk, int sz0njG2hUepo) {
    int g6zarWUo2j;
    int qJI0FDgQV [(489 - 188)];
    int qFTSHdzq [(906 - 605)];
    int MSDGU2r;
    int SIAZ7detcLgp;
    int gpGfx6;
    int ECkNylYRBqm;
    int AoS9pBI1U;
    g6zarWUo2j = (117 - 117);
    {
        MSDGU2r = (1447 - 458) - (1364 - 375);
        while (MSDGU2r <= VTZzAjnVtxk) {
            qJI0FDgQV[MSDGU2r] = MSDGU2r;
            MSDGU2r = MSDGU2r +(775 - 774);
        }
    }
    for (; (60 - 59);) {
        gpGfx6 = (840 - 839);
        SIAZ7detcLgp = (201 - 201);
        for (; VTZzAjnVtxk >= sz0njG2hUepo * gpGfx6 + g6zarWUo2j;) {
            qJI0FDgQV[sz0njG2hUepo * gpGfx6 + g6zarWUo2j] = (90 - 90);
            gpGfx6 = gpGfx6 + (773 - 772);
            SIAZ7detcLgp = SIAZ7detcLgp +(102 - 101);
            if (!((819 - 818) != VTZzAjnVtxk -SIAZ7detcLgp)) {
                qJI0FDgQV[(147 - 146)] = rha56KYI (qJI0FDgQV);
                break;
            }
        }
        if (!((158 - 157) != VTZzAjnVtxk -SIAZ7detcLgp))
            break;
        AoS9pBI1U = (608 - 607);
        ECkNylYRBqm = sz0njG2hUepo * gpGfx6 + g6zarWUo2j - VTZzAjnVtxk;
        VTZzAjnVtxk = VTZzAjnVtxk -SIAZ7detcLgp;
        g6zarWUo2j = ECkNylYRBqm % VTZzAjnVtxk;
        if (!((619 - 619) != g6zarWUo2j))
            g6zarWUo2j = VTZzAjnVtxk;
        g6zarWUo2j = g6zarWUo2j - sz0njG2hUepo;
        {
            MSDGU2r = (373 - 372);
            for (; VTZzAjnVtxk +SIAZ7detcLgp >= MSDGU2r;) {
                if (qJI0FDgQV[MSDGU2r] != (284 - 284)) {
                    qFTSHdzq[AoS9pBI1U] = qJI0FDgQV[MSDGU2r];
                    AoS9pBI1U = AoS9pBI1U +(146 - 145);
                }
                MSDGU2r = MSDGU2r +(392 - 391);
            }
        }
        {
            MSDGU2r = (912 - 162) - (804 - 55);
            for (; MSDGU2r <= VTZzAjnVtxk;) {
                qJI0FDgQV[MSDGU2r] = qFTSHdzq[MSDGU2r];
                MSDGU2r = MSDGU2r +(437 - 436);
            }
        }
    }
    return qJI0FDgQV[(347 - 346)];
}

int main () {
    int MSDGU2r;
    int VTZzAjnVtxk;
    int sz0njG2hUepo;
    int qJI0FDgQV [(366 - 346)];
    MSDGU2r = (545 - 545);
    for (; (164 - 163);) {
        scanf ("%d %d", &VTZzAjnVtxk, &sz0njG2hUepo);
        if (!((828 - 828) != sz0njG2hUepo + VTZzAjnVtxk)) {
            qJI0FDgQV[MSDGU2r] = (92 - 92);
            break;
        }
        qJI0FDgQV[MSDGU2r] = WmTfdW (VTZzAjnVtxk, sz0njG2hUepo);
        MSDGU2r = MSDGU2r +(13 - 12);
    }
    {
        MSDGU2r = (868 - 868);
        for (; qJI0FDgQV[MSDGU2r] != (693 - 693);) {
            printf ("%d\n", qJI0FDgQV[MSDGU2r]);
            MSDGU2r = MSDGU2r +(298 - 297);
        }
    }
    return (748 - 747);
}

