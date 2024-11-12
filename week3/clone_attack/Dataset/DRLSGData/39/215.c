struct   student {
    char JpJBD6cNQW [(1016 - 986)];
    int NsTIq3iw4;
    int FWC6O3JDwgF;
    char gan [(71 - 69)];
    char YJesGc [(278 - 276)];
    int P23bCNk84FZM;
    int bonus;
};
void  main () {
    struct   student Max;
    struct   student *mpOB70D1Txb;
    free (mpOB70D1Txb);
    int I6eZDYWyk9N;
    int EFScqvXN;
    int i;
    EFScqvXN = (192 - 192);
    scanf ("%d", &I6eZDYWyk9N);
    mpOB70D1Txb = (struct   student *) malloc (I6eZDYWyk9N * sizeof (struct   student));
    {
        i = (1040 - 963) - (574 - 497);
        for (; I6eZDYWyk9N > i;) {
            scanf ("%s %d %d %s %s %d", mpOB70D1Txb[i].JpJBD6cNQW, &mpOB70D1Txb[i].NsTIq3iw4, &mpOB70D1Txb[i].FWC6O3JDwgF, &mpOB70D1Txb[i].gan, &mpOB70D1Txb[i].YJesGc, &mpOB70D1Txb[i].P23bCNk84FZM);
            i = i + (511 - 510);
        }
    }
    {
        i = (1119 - 761) - (1054 - 696);
        for (; I6eZDYWyk9N > i;) {
            mpOB70D1Txb[i].bonus = (326 - 326);
            if (((mpOB70D1Txb[i].NsTIq3iw4) > (1014 - 934)) && ((mpOB70D1Txb[i].P23bCNk84FZM) > (369 - 369))) {
                mpOB70D1Txb[i].bonus += (8159 - 159);
            }
            if (((95 - 10) < (mpOB70D1Txb[i].NsTIq3iw4)) && ((426 - 346) < (mpOB70D1Txb[i].FWC6O3JDwgF))) {
                mpOB70D1Txb[i].bonus += 4000;
            }
            if ((468 - 378) < (mpOB70D1Txb[i].NsTIq3iw4)) {
                mpOB70D1Txb[i].bonus += (2119 - 119);
            }
            if (((mpOB70D1Txb[i].NsTIq3iw4) > (805 - 720)) && (!('Y' != (mpOB70D1Txb[i].YJesGc[(68 - 68)])))) {
                mpOB70D1Txb[i].bonus += (1689 - 689);
            }
            if (((424 - 344) < (mpOB70D1Txb[i].FWC6O3JDwgF)) && ((mpOB70D1Txb[i].gan[(617 - 617)]) == 'Y')) {
                mpOB70D1Txb[i].bonus += (1252 - 402);
            }
            i = i + (994 - 993);
        }
    }
    Max = mpOB70D1Txb[(475 - 475)];
    {
        i = 1;
        while (i < I6eZDYWyk9N) {
            if (mpOB70D1Txb[i].bonus > Max.bonus)
                Max = mpOB70D1Txb[i];
            i = i + 1;
        }
    }
    printf ("%s\n", Max.JpJBD6cNQW);
    printf ("%d\n", Max.bonus);
    {
        i = 0;
        for (; i < I6eZDYWyk9N;) {
            EFScqvXN += mpOB70D1Txb[i].bonus;
            i = i + 1;
        }
    }
    printf ("%d\n", EFScqvXN);
}

