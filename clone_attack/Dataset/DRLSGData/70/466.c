int main (int Rw80GoCag3K, char *wPMig1 []) {
    int c9GzKw8sena, hTXyOo, QSRad3BW;
    double  UX3I7JU [KojLXs29KFl];
    double  faqjdPc9 [KojLXs29KFl];
    double  TpHuizM = (697 - 697);
    faqjdPc9[(674 - 674)] = (654 - 654);
    scanf ("%d", &c9GzKw8sena);
    struct   {
        double  V3OdHQ7W, O2R7p5daY;
    }
    Kocfkb [KojLXs29KFl];
    {
        hTXyOo = 0;
        for (; hTXyOo < c9GzKw8sena;) {
            double  aXuOkRtg, ZfA1TdtQ5b2;
            scanf ("%lf%lf", &aXuOkRtg, &ZfA1TdtQ5b2);
            Kocfkb[hTXyOo].V3OdHQ7W = aXuOkRtg;
            Kocfkb[hTXyOo].O2R7p5daY = ZfA1TdtQ5b2;
            hTXyOo++;
        }
    }
    {
        hTXyOo = 0;
        while (c9GzKw8sena - (496 - 495) > hTXyOo) {
            {
                QSRad3BW = hTXyOo + 1;
                while (c9GzKw8sena > QSRad3BW) {
                    UX3I7JU[QSRad3BW] = sqrt ((Kocfkb[QSRad3BW].V3OdHQ7W - Kocfkb[hTXyOo].V3OdHQ7W) * (Kocfkb[QSRad3BW].V3OdHQ7W - Kocfkb[hTXyOo].V3OdHQ7W) + (Kocfkb[QSRad3BW].O2R7p5daY - Kocfkb[hTXyOo].O2R7p5daY) * (Kocfkb[QSRad3BW].O2R7p5daY - Kocfkb[hTXyOo].O2R7p5daY));
                    if (faqjdPc9[hTXyOo] < UX3I7JU[QSRad3BW])
                        faqjdPc9[hTXyOo] = UX3I7JU[QSRad3BW];
                    QSRad3BW++;
                }
            }
            hTXyOo++;
        }
    }
    {
        hTXyOo = 0;
        while (c9GzKw8sena - 1 > hTXyOo) {
            if (faqjdPc9[hTXyOo] > TpHuizM)
                TpHuizM = faqjdPc9[hTXyOo];
            hTXyOo++;
        }
    }
    printf ("%.4lf", TpHuizM);
    return 0;
}

