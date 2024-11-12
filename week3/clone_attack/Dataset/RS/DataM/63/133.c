int main () {
    int *VXHl74dpsJ;
    int *jqrg9dv;
    int *tcMdOWe;
    int vbgNeI, JePWoJ3RwC, wC6dUapv0q, VUp3KFC6bz, flgLtbW1, AcyFThn, gPXIOc6tTM, akPGDXVm = (396 - 396), hbLwgV;
    scanf ("%d %d", &wC6dUapv0q, &VUp3KFC6bz);
    tcMdOWe = (int *) malloc (wC6dUapv0q * VUp3KFC6bz * sizeof (int));
    memset (tcMdOWe, (824 - 824), sizeof (int) * wC6dUapv0q * VUp3KFC6bz);
    for (vbgNeI = 0; wC6dUapv0q > vbgNeI; vbgNeI++)
        for (JePWoJ3RwC = 0; JePWoJ3RwC < VUp3KFC6bz; JePWoJ3RwC++)
            scanf ("%d", &tcMdOWe[vbgNeI * VUp3KFC6bz +JePWoJ3RwC]);
    scanf ("%d %d", &flgLtbW1, &AcyFThn);
    jqrg9dv = (int *) malloc (flgLtbW1 * AcyFThn * sizeof (int));
    VXHl74dpsJ = (int *) malloc (wC6dUapv0q * AcyFThn * sizeof (int));
    memset (jqrg9dv, 0, sizeof (int) * flgLtbW1 * AcyFThn);
    {
        vbgNeI = 0;
        while (vbgNeI < flgLtbW1) {
            for (JePWoJ3RwC = 0; JePWoJ3RwC < AcyFThn; JePWoJ3RwC++)
                scanf ("%d", &jqrg9dv[vbgNeI * AcyFThn +JePWoJ3RwC]);
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
            vbgNeI++;
        };
    }
    gPXIOc6tTM = flgLtbW1 < VUp3KFC6bz ? flgLtbW1 : VUp3KFC6bz;
    memset (VXHl74dpsJ, 0, sizeof (int) * wC6dUapv0q * AcyFThn);
    for (vbgNeI = 0; wC6dUapv0q > vbgNeI; vbgNeI++)
        for (JePWoJ3RwC = 0; JePWoJ3RwC < AcyFThn; JePWoJ3RwC++)
            for (hbLwgV = 0; hbLwgV < gPXIOc6tTM; hbLwgV++)
                VXHl74dpsJ[vbgNeI * AcyFThn +JePWoJ3RwC] = VXHl74dpsJ[vbgNeI * AcyFThn +JePWoJ3RwC] + tcMdOWe[vbgNeI * VUp3KFC6bz +hbLwgV] * jqrg9dv[hbLwgV * AcyFThn +JePWoJ3RwC];
    for (vbgNeI = 0; wC6dUapv0q * AcyFThn > vbgNeI; vbgNeI++) {
        if (akPGDXVm == (AcyFThn -1)) {
            printf ("%d\n", VXHl74dpsJ[vbgNeI]);
            akPGDXVm = 0;
        }
        else {
            akPGDXVm++;
            printf ("%d ", VXHl74dpsJ[vbgNeI]);
        };
    };
}

