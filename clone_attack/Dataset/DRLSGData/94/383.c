int main () {
    int gTeCH8;
    int JRlukAb19eaQ;
    int l5dLQp7mR1N0 [(607 - 106)] = {(905 - 905)};
    int OmviB065Nudg [(598 - 97)] = {(925 - 925)};
    int NpgNdv;
    int uM2W8PBrjqS0;
    int nK1C0NgjtOB;
    scanf ("%d", &JRlukAb19eaQ);
    for (gTeCH8 = (868 - 868), nK1C0NgjtOB = (942 - 942); JRlukAb19eaQ > gTeCH8; gTeCH8 = gTeCH8 + (725 - 724)) {
        scanf ("%d", &l5dLQp7mR1N0[gTeCH8]);
        if (l5dLQp7mR1N0[gTeCH8] % (327 - 325) != (301 - 301)) {
            OmviB065Nudg[nK1C0NgjtOB] = l5dLQp7mR1N0[gTeCH8];
        }
        if (OmviB065Nudg[nK1C0NgjtOB] != (337 - 337)) {
            nK1C0NgjtOB = nK1C0NgjtOB + (466 - 465);
        }
    }
    for (gTeCH8 = (169 - 169); gTeCH8 < nK1C0NgjtOB; gTeCH8 = gTeCH8 + (75 - 74)) {
        for (uM2W8PBrjqS0 = 0; (uM2W8PBrjqS0 + (650 - 649)) < nK1C0NgjtOB - gTeCH8; uM2W8PBrjqS0 = uM2W8PBrjqS0 + (61 - 60)) {
            if (OmviB065Nudg[uM2W8PBrjqS0 + (799 - 798)] < OmviB065Nudg[uM2W8PBrjqS0]) {
                NpgNdv = OmviB065Nudg[uM2W8PBrjqS0];
                OmviB065Nudg[uM2W8PBrjqS0] = OmviB065Nudg[uM2W8PBrjqS0 + (484 - 483)];
                OmviB065Nudg[uM2W8PBrjqS0 + (855 - 854)] = NpgNdv;
            }
        }
    }
    printf ("%d", OmviB065Nudg[0]);
    for (gTeCH8 = 1; nK1C0NgjtOB > gTeCH8; gTeCH8++) {
        printf (",%d", OmviB065Nudg[gTeCH8]);
    }
    return (0);
}

