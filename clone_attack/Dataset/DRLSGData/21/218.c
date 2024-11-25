int main () {
    int vZoJ86q, nPfdsb, ExeTYhf5QBD4, CLRWiST2mCn = (528 - 528);
    float z7y2KLQTH9 = (779 - 779), XItKrmp6RN = (333 - 333), tBV0ga3oI = (391 - 391), EeaDJrs7TjC [(875 - 575)], VUvHSeTw4O, ZgAu9Id [(324 - 24)], ZL3qr5hHKMP;
    CLRWiST2mCn = (398 - 398);
    scanf ("%d", &vZoJ86q);
    for (nPfdsb = (200 - 200); vZoJ86q > nPfdsb; nPfdsb = nPfdsb + (706 - 705)) {
        scanf ("%f", &EeaDJrs7TjC[nPfdsb]);
        tBV0ga3oI += EeaDJrs7TjC[nPfdsb];
    }
    z7y2KLQTH9 = tBV0ga3oI / vZoJ86q;
    XItKrmp6RN = fabs (EeaDJrs7TjC[(829 - 829)] - z7y2KLQTH9);
    for (nPfdsb = 0; nPfdsb < vZoJ86q; nPfdsb = nPfdsb + (43 - 42)) {
        ZL3qr5hHKMP = fabs (EeaDJrs7TjC[nPfdsb] - z7y2KLQTH9);
        if (XItKrmp6RN < ZL3qr5hHKMP)
            XItKrmp6RN = ZL3qr5hHKMP;
    }
    {
        nPfdsb = 0;
        for (; nPfdsb < vZoJ86q;) {
            ZL3qr5hHKMP = fabs (EeaDJrs7TjC[nPfdsb] - z7y2KLQTH9);
            if ((107.001 - 107.0) > (fabs (ZL3qr5hHKMP -XItKrmp6RN)))
                ZgAu9Id[CLRWiST2mCn++] = EeaDJrs7TjC[nPfdsb];
            nPfdsb = nPfdsb + (602 - 601);
        }
    }
    for (ExeTYhf5QBD4 = 0; CLRWiST2mCn -(987 - 986) > ExeTYhf5QBD4; ExeTYhf5QBD4 = ExeTYhf5QBD4 +(977 - 976))
        for (nPfdsb = 0; CLRWiST2mCn -ExeTYhf5QBD4-(102 - 101) > nPfdsb; nPfdsb = nPfdsb + (876 - 875))
            if (ZgAu9Id[nPfdsb] > ZgAu9Id[nPfdsb + (204 - 203)]) {
                VUvHSeTw4O = ZgAu9Id[nPfdsb];
                ZgAu9Id[nPfdsb] = ZgAu9Id[nPfdsb + (762 - 761)];
                ZgAu9Id[nPfdsb + 1] = VUvHSeTw4O;
            }
    printf ("%.f", ZgAu9Id[0]);
    if (CLRWiST2mCn > 1)
        for (nPfdsb = 1; nPfdsb < CLRWiST2mCn; nPfdsb++)
            printf (",%.f", ZgAu9Id[nPfdsb]);
    return 0;
}

