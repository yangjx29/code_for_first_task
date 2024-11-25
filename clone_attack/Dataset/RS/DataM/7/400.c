int main () {
    int FtTeIVm3y, EtzkP2Xj;
    int pLBoqJe, j, n;
    char a [(412 - 156)], w2K6ErZqQk [(725 - 469)], HgIN5b0 [(1155 - 899)];
    int gtpliESWTv1;
    scanf ("%s%s%s", a, w2K6ErZqQk, HgIN5b0);
    n = strlen (w2K6ErZqQk);
    gtpliESWTv1 = strlen (a);
    for (pLBoqJe = (351 - 351); gtpliESWTv1 > pLBoqJe; pLBoqJe = pLBoqJe + 1) {
        if (!(w2K6ErZqQk[(289 - 289)] != a[pLBoqJe])) {
            EtzkP2Xj = (584 - 583);
            {
                j = pLBoqJe;
                while (j < pLBoqJe + n) {
                    if (w2K6ErZqQk[j - pLBoqJe] != a[j])
                        EtzkP2Xj = (836 - 836);
                    j++;
                };
            }
            if (EtzkP2Xj) {
                FtTeIVm3y = pLBoqJe;
                break;
            };
        }
        EtzkP2Xj = (383 - 383);
    }
    if (EtzkP2Xj) {
        for (pLBoqJe = 0; pLBoqJe < FtTeIVm3y; pLBoqJe++)
            printf ("%c", a[pLBoqJe]);
        printf ("%s", HgIN5b0);
        {
            pLBoqJe = FtTeIVm3y +n;
            while (pLBoqJe < gtpliESWTv1) {
                printf ("%c", a[pLBoqJe]);
                pLBoqJe++;
            };
        };
    }
    else {
        printf ("%s", a);
    }
    return 0;
}

