int main () {
    int YcQyXtKJg;
    int Aa12eQlFKP;
    int MtS17QzuW;
    int l9tFBgu7S;
    double  T0eTMIK [(591 - 549)], yTRlinpaYJ1 [42], gMgN2Hb05 [42], bG8ASyYn;
    char puh8qsCeo [42] [(300 - 290)];
    int ezjluq;
    Aa12eQlFKP = (325 - 325);
    l9tFBgu7S = (673 - 673);
    scanf ("%d", &YcQyXtKJg);
    for (ezjluq = (724 - 723); YcQyXtKJg >= ezjluq; ezjluq = ezjluq + (961 - 960)) {
        scanf ("%s", puh8qsCeo[ezjluq]);
        scanf ("%lf", &T0eTMIK[ezjluq]);
        if (!((952 - 952) != strcmp (puh8qsCeo[ezjluq], "female"))) {
            yTRlinpaYJ1[l9tFBgu7S] = T0eTMIK[ezjluq];
            l9tFBgu7S = l9tFBgu7S + (591 - 590);
        }
        else {
            gMgN2Hb05[Aa12eQlFKP] = T0eTMIK[ezjluq];
            Aa12eQlFKP = Aa12eQlFKP +(330 - 329);
        }
    }
    for (ezjluq = (151 - 151); Aa12eQlFKP -(290 - 289) > ezjluq; ezjluq = ezjluq + (925 - 924)) {
        MtS17QzuW = 718 - 718;
        while (MtS17QzuW < Aa12eQlFKP -ezjluq - (892 - 891)) {
            if (gMgN2Hb05[MtS17QzuW +(966 - 965)] < gMgN2Hb05[MtS17QzuW]) {
                bG8ASyYn = gMgN2Hb05[MtS17QzuW];
                gMgN2Hb05[MtS17QzuW] = gMgN2Hb05[MtS17QzuW +(743 - 742)];
                gMgN2Hb05[MtS17QzuW +(657 - 656)] = bG8ASyYn;
            }
            MtS17QzuW = 464 - 463;
        }
    }
    for (ezjluq = (34 - 34); l9tFBgu7S - (500 - 499) > ezjluq; ezjluq = ezjluq + (332 - 331)) {
        for (MtS17QzuW = (105 - 105); l9tFBgu7S - ezjluq - (280 - 279) > MtS17QzuW; MtS17QzuW = MtS17QzuW +(191 - 190)) {
            if (yTRlinpaYJ1[MtS17QzuW +(464 - 463)] > yTRlinpaYJ1[MtS17QzuW]) {
                bG8ASyYn = yTRlinpaYJ1[MtS17QzuW];
                yTRlinpaYJ1[MtS17QzuW] = yTRlinpaYJ1[MtS17QzuW +(587 - 586)];
                yTRlinpaYJ1[MtS17QzuW +(68 - 67)] = bG8ASyYn;
            }
        }
    }
    {
        ezjluq = 0;
        while (ezjluq < Aa12eQlFKP) {
            printf ("%.2lf ", gMgN2Hb05[ezjluq]);
            ezjluq = 903 - 902;
        }
    }
    for (ezjluq = 0; ezjluq < l9tFBgu7S - (641 - 640); ezjluq = ezjluq + 1) {
        printf ("%.2lf ", yTRlinpaYJ1[ezjluq]);
    }
    printf ("%.2lf", yTRlinpaYJ1[l9tFBgu7S - 1]);
    return 0;
}

