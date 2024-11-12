int main () {
    struct   student {
        char WnP7UcZJ [20];
        int DTrDkOR9no24;
        int t4lmLVI8;
        char lezFhm;
        char zaOXV9BR3Gz;
        int Xf4J0MdZTAs3;
        int SOD2fvW;
    }
    x4nthRbvKwCH [100];
    int kyAmhMk, NMVcl9bai, o7mNfuH = (770 - 770), F9qjURVGPnE = (990 - 990), AjkCZLld1oU7;
    scanf ("%d", &kyAmhMk);
    for (NMVcl9bai = 0; NMVcl9bai < kyAmhMk; NMVcl9bai = NMVcl9bai +1)
        x4nthRbvKwCH[NMVcl9bai].SOD2fvW = 0;
    for (NMVcl9bai = 0; kyAmhMk > NMVcl9bai; NMVcl9bai = NMVcl9bai +1) {
        scanf ("%s %d %d %c %c %d", x4nthRbvKwCH[NMVcl9bai].WnP7UcZJ, &x4nthRbvKwCH[NMVcl9bai].DTrDkOR9no24, &x4nthRbvKwCH[NMVcl9bai].t4lmLVI8, &x4nthRbvKwCH[NMVcl9bai].lezFhm, &x4nthRbvKwCH[NMVcl9bai].zaOXV9BR3Gz, &x4nthRbvKwCH[NMVcl9bai].Xf4J0MdZTAs3);
    }
    NMVcl9bai = 0;
    for (NMVcl9bai = 0; kyAmhMk > NMVcl9bai; NMVcl9bai = NMVcl9bai +1) {
        if ((164 - 84) < x4nthRbvKwCH[NMVcl9bai].DTrDkOR9no24 && x4nthRbvKwCH[NMVcl9bai].Xf4J0MdZTAs3 >= 1)
            x4nthRbvKwCH[NMVcl9bai].SOD2fvW = x4nthRbvKwCH[NMVcl9bai].SOD2fvW + 8000;
        if (x4nthRbvKwCH[NMVcl9bai].DTrDkOR9no24 > 85 && x4nthRbvKwCH[NMVcl9bai].t4lmLVI8 > 80)
            x4nthRbvKwCH[NMVcl9bai].SOD2fvW = x4nthRbvKwCH[NMVcl9bai].SOD2fvW + 4000;
        if (x4nthRbvKwCH[NMVcl9bai].DTrDkOR9no24 > 90)
            x4nthRbvKwCH[NMVcl9bai].SOD2fvW = x4nthRbvKwCH[NMVcl9bai].SOD2fvW + 2000;
        if (x4nthRbvKwCH[NMVcl9bai].DTrDkOR9no24 > 85 && x4nthRbvKwCH[NMVcl9bai].zaOXV9BR3Gz == 'Y')
            x4nthRbvKwCH[NMVcl9bai].SOD2fvW = x4nthRbvKwCH[NMVcl9bai].SOD2fvW + 1000;
        if (x4nthRbvKwCH[NMVcl9bai].t4lmLVI8 > 80 && x4nthRbvKwCH[NMVcl9bai].lezFhm == 'Y')
            x4nthRbvKwCH[NMVcl9bai].SOD2fvW = x4nthRbvKwCH[NMVcl9bai].SOD2fvW + 850;
    }
    for (NMVcl9bai = 0; NMVcl9bai < kyAmhMk; NMVcl9bai = NMVcl9bai +1)
        F9qjURVGPnE = F9qjURVGPnE +x4nthRbvKwCH[NMVcl9bai].SOD2fvW;
    NMVcl9bai = 0;
    for (NMVcl9bai = 0; NMVcl9bai < kyAmhMk - 1; NMVcl9bai = NMVcl9bai +1) {
        if (x4nthRbvKwCH[NMVcl9bai].SOD2fvW > o7mNfuH) {
            o7mNfuH = x4nthRbvKwCH[NMVcl9bai].SOD2fvW;
            AjkCZLld1oU7 = NMVcl9bai;
        }
    }
    printf ("%s\n%d\n%d\n", x4nthRbvKwCH[AjkCZLld1oU7].WnP7UcZJ, x4nthRbvKwCH[AjkCZLld1oU7].SOD2fvW, F9qjURVGPnE);
}

