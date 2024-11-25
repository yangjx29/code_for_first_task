void  main () {
    int BkTiRp;
    int CwDPVcSZf;
    int PeHXy4g;
    int *p;
    scanf ("%d", &PeHXy4g);
    p = (int *) malloc (sizeof (int) * PeHXy4g);
    {
        BkTiRp = 0;
        while (BkTiRp < PeHXy4g) {
            scanf ("%d", p + BkTiRp);
            BkTiRp++;
        };
    }
    printf ("%d", *p);
    {
        BkTiRp = 1;
        while (BkTiRp < PeHXy4g) {
            for (CwDPVcSZf = 0; BkTiRp > CwDPVcSZf;) {
                if (*(p + BkTiRp) == *(p + CwDPVcSZf))
                    break;
                else
                    CwDPVcSZf = CwDPVcSZf +1;
            }
            if (CwDPVcSZf == BkTiRp)
                printf (" %d", *(p + BkTiRp));
            BkTiRp++;
        };
    };
}

