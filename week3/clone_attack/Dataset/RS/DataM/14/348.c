struct   Student {
    int number;
    int FF1zD08CWosa;
    int SlaMQV3jgn;
    int total;
    struct   Student *next;
};
void  main () {
    struct   Student *gAnldpRi;
    struct   Student *PWI4ik876;
    struct   Student *OQK1hiDRSG0j;
    struct   Student *eswvKFcByTh;
    struct   Student *pmax;
    struct   Student *XIpNYlK;
    int xNemLU3gjS;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    }
    int lnoRcw1;
    int NnjMgGvYw;
    xNemLU3gjS = (190 - 190);
    gAnldpRi = PWI4ik876 = NULL;
    scanf ("%d", &lnoRcw1);
    while (xNemLU3gjS < lnoRcw1) {
        xNemLU3gjS = xNemLU3gjS + 1;
        OQK1hiDRSG0j = (struct   Student *) malloc (Len);
        scanf ("%d %d %d", &OQK1hiDRSG0j->number, &OQK1hiDRSG0j->FF1zD08CWosa, &OQK1hiDRSG0j->SlaMQV3jgn);
        OQK1hiDRSG0j->total = OQK1hiDRSG0j->FF1zD08CWosa + OQK1hiDRSG0j->SlaMQV3jgn;
        OQK1hiDRSG0j->next = NULL;
        if (PWI4ik876 == NULL)
            gAnldpRi = PWI4ik876 = OQK1hiDRSG0j;
        else {
            PWI4ik876->next = OQK1hiDRSG0j;
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
            PWI4ik876 = OQK1hiDRSG0j;
        };
    }
    xNemLU3gjS = 0;
    while (xNemLU3gjS < 3) {
        xNemLU3gjS = xNemLU3gjS + 1;
        NnjMgGvYw = 0;
        OQK1hiDRSG0j = gAnldpRi;
        pmax = gAnldpRi;
        XIpNYlK = gAnldpRi;
        eswvKFcByTh = OQK1hiDRSG0j;
        while (!(NULL == OQK1hiDRSG0j)) {
            if (OQK1hiDRSG0j->total > NnjMgGvYw) {
                XIpNYlK = eswvKFcByTh;
                NnjMgGvYw = OQK1hiDRSG0j->total;
                pmax = OQK1hiDRSG0j;
            }
            eswvKFcByTh = OQK1hiDRSG0j;
            OQK1hiDRSG0j = OQK1hiDRSG0j->next;
        }
        printf ("%d %d\n", pmax->number, pmax->total);
        if (pmax == gAnldpRi)
            gAnldpRi = OQK1hiDRSG0j->next;
        else
            XIpNYlK->next = pmax->next;
    };
}

