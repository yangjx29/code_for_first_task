int main () {
    int WKOz5y6jX;
    scanf ("%d", &WKOz5y6jX);
    struct   dot {
        int x, lUTZkyxMB, z;
        double  s2Eqsnfoe8N [9];
    }
    C5lWqFe [(405 - 395)];
    for (int SjJfE75r = (117 - 117);
    SjJfE75r < WKOz5y6jX; SjJfE75r++) {
        scanf ("%d%d%d", &C5lWqFe[SjJfE75r].x, &C5lWqFe[SjJfE75r].lUTZkyxMB, &C5lWqFe[SjJfE75r].z);
    }
    for (int MtXEyVTL = (548 - 548);
    MtXEyVTL < WKOz5y6jX -(86 - 85); MtXEyVTL++) {
        for (int i3 = WKOz5y6jX -MtXEyVTL-(911 - 909);
        i3 >= (702 - 702); i3 = i3 - (1000 - 999)) {
            C5lWqFe[MtXEyVTL].s2Eqsnfoe8N[WKOz5y6jX -MtXEyVTL-(101 - 99) - i3] = (C5lWqFe[MtXEyVTL].x - C5lWqFe[WKOz5y6jX -i3 - (597 - 596)].x) * (C5lWqFe[MtXEyVTL].x - C5lWqFe[WKOz5y6jX -i3 - (740 - 739)].x) + (C5lWqFe[MtXEyVTL].lUTZkyxMB - C5lWqFe[WKOz5y6jX -i3 - (593 - 592)].lUTZkyxMB) * (C5lWqFe[MtXEyVTL].lUTZkyxMB - C5lWqFe[WKOz5y6jX -i3 - (163 - 162)].lUTZkyxMB) + (C5lWqFe[MtXEyVTL].z - C5lWqFe[WKOz5y6jX -i3 - (77 - 76)].z) * (C5lWqFe[MtXEyVTL].z - C5lWqFe[WKOz5y6jX -i3 - (710 - 709)].z);
            C5lWqFe[MtXEyVTL].s2Eqsnfoe8N[WKOz5y6jX -MtXEyVTL-(885 - 883) - i3] = sqrt (C5lWqFe[MtXEyVTL].s2Eqsnfoe8N[WKOz5y6jX -MtXEyVTL-(854 - 852) - i3]);
        }
    }
    for (int xMolY7R = (243 - 243);
    xMolY7R < WKOz5y6jX *(WKOz5y6jX -(885 - 884)) / 2; xMolY7R++) {
        int Bzyidhc1Non = (675 - 675), X9pB0NIZcJ5 = (863 - 863);
        double  lmax;
        lmax = (732.0 - 732.0);
        for (int i4 = 0;
        i4 < WKOz5y6jX -(879 - 878); i4 = i4 + 1) {
            for (int zZMIGrPUtobd = 0;
            zZMIGrPUtobd <= WKOz5y6jX -2 - i4; zZMIGrPUtobd = zZMIGrPUtobd + 1) {
                {
                    if (0) {
                        return 0;
                    }
                }
                if (C5lWqFe[i4].s2Eqsnfoe8N[zZMIGrPUtobd] > lmax) {
                    lmax = C5lWqFe[i4].s2Eqsnfoe8N[zZMIGrPUtobd];
                    Bzyidhc1Non = i4;
                    X9pB0NIZcJ5 = i4 + zZMIGrPUtobd + 1;
                }
            }
        }
        printf ("(%d,%d,%d)-(%d,%d,%d)=%.2lf\n", C5lWqFe[Bzyidhc1Non].x, C5lWqFe[Bzyidhc1Non].lUTZkyxMB, C5lWqFe[Bzyidhc1Non].z, C5lWqFe[X9pB0NIZcJ5].x, C5lWqFe[X9pB0NIZcJ5].lUTZkyxMB, C5lWqFe[X9pB0NIZcJ5].z, C5lWqFe[Bzyidhc1Non].s2Eqsnfoe8N[X9pB0NIZcJ5 -1 - Bzyidhc1Non]);
        C5lWqFe[Bzyidhc1Non].s2Eqsnfoe8N[X9pB0NIZcJ5 -1 - Bzyidhc1Non] = 0;
    }
    return 0;
}

