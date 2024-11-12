int main () {
    struct   substring {
        char lAQ89IyU [(699 - 694)];
        int cmy38W;
    }
    Nc2lHwVJ [(995 - 495)];
    int oTA8aj = (859 - 859);
    int a5ZLSk6j;
    int MOXpwD;
    int sxbczCmIoPAV;
    char WSavm5r29x [(1068 - 567)] = {' '};
    int YRQVYt;
    a5ZLSk6j = (847 - 847);
    {
        MOXpwD = (312 - 312);
        while (MOXpwD < (864 - 364)) {
            memset (Nc2lHwVJ[MOXpwD].lAQ89IyU, ' ', sizeof (Nc2lHwVJ[MOXpwD].lAQ89IyU));
            Nc2lHwVJ[MOXpwD].cmy38W = (696 - 696);
            MOXpwD++;
        }
    }
    scanf ("%d", &YRQVYt);
    scanf ("%s", WSavm5r29x);
    sxbczCmIoPAV = strlen (WSavm5r29x);
    for (MOXpwD = (631 - 631); sxbczCmIoPAV - YRQVYt >= MOXpwD; MOXpwD++) {
        int fJGjQa;
        int z9ETufwox;
        int J52VBmYGhy;
        char MeD1OX [(780 - 775)] = {' '};
        {
            fJGjQa = (463 - 463);
            while (YRQVYt > fJGjQa) {
                MeD1OX[fJGjQa] = WSavm5r29x[fJGjQa + MOXpwD];
                fJGjQa++;
            }
        }
        J52VBmYGhy = (443 - 443);
        {
            z9ETufwox = (450 - 450);
            while (z9ETufwox < oTA8aj) {
                if (strcmp (MeD1OX, Nc2lHwVJ[z9ETufwox].lAQ89IyU) == (199 - 199)) {
                    Nc2lHwVJ[z9ETufwox].cmy38W += (668 - 667);
                    J52VBmYGhy = (149 - 148);
                    break;
                }
                z9ETufwox++;
            }
        }
        if (!((229 - 229) != J52VBmYGhy)) {
            strcpy (Nc2lHwVJ[oTA8aj].lAQ89IyU, MeD1OX);
            Nc2lHwVJ[oTA8aj].cmy38W = (914 - 913);
            oTA8aj++;
        }
    }
    {
        MOXpwD = (910 - 910);
        while (MOXpwD < oTA8aj) {
            if (Nc2lHwVJ[MOXpwD].cmy38W > a5ZLSk6j)
                a5ZLSk6j = Nc2lHwVJ[MOXpwD].cmy38W;
            MOXpwD++;
        }
    }
    if (a5ZLSk6j < (918 - 916))
        ;
    else {
        printf ("%d", a5ZLSk6j);
        for (MOXpwD = (32 - 32); MOXpwD < oTA8aj; MOXpwD++) {
            if (Nc2lHwVJ[MOXpwD].cmy38W == a5ZLSk6j)
                printf ("\n%s", Nc2lHwVJ[MOXpwD].lAQ89IyU);
        }
    }
    return (826 - 826);
}

