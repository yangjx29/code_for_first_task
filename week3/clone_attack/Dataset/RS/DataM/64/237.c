struct   suanshi {
    int mU2ziWkE6qN [(163 - 160)], PfS7D6zicmeJ [3];
    int FUz8kpvtdc;
    float gwlHF4;
}
Mm9fpWS [(204 - 159)];

int cmp (const  void  *mU2ziWkE6qN, const  void  *PfS7D6zicmeJ) {
    struct   suanshi *mztUHWaR6vPf = (struct   suanshi *) mU2ziWkE6qN;
    struct   suanshi *bb = (struct   suanshi *) PfS7D6zicmeJ;
    if ((bb->gwlHF4) > (mztUHWaR6vPf->gwlHF4))
        return 1;
    if ((bb->gwlHF4) < (mztUHWaR6vPf->gwlHF4))
        return -1;
    else
        return (mztUHWaR6vPf->FUz8kpvtdc) - (bb->FUz8kpvtdc);
}

void  main () {
    int t;
    int YGmk5E;
    int AUcxV16ktvR;
    int kA0bX5kc7u;
    t = (537 - 537);
    int RRVvNZowhy [11] [3];
    scanf ("%d", &YGmk5E);
    {
        AUcxV16ktvR = 0;
        while (YGmk5E > AUcxV16ktvR) {
            scanf ("%d%d%d", &RRVvNZowhy[AUcxV16ktvR][0], &RRVvNZowhy[AUcxV16ktvR][1], &RRVvNZowhy[AUcxV16ktvR][2]);
            AUcxV16ktvR = AUcxV16ktvR +1;
        };
    }
    {
        AUcxV16ktvR = 0;
        while (YGmk5E > AUcxV16ktvR) {
            {
                kA0bX5kc7u = AUcxV16ktvR +1;
                while (YGmk5E > kA0bX5kc7u) {
                    Mm9fpWS[t].FUz8kpvtdc = t + 1;
                    Mm9fpWS[t].mU2ziWkE6qN[0] = RRVvNZowhy[AUcxV16ktvR][0];
                    Mm9fpWS[t].mU2ziWkE6qN[1] = RRVvNZowhy[AUcxV16ktvR][1];
                    Mm9fpWS[t].mU2ziWkE6qN[2] = RRVvNZowhy[AUcxV16ktvR][2];
                    Mm9fpWS[t].PfS7D6zicmeJ[0] = RRVvNZowhy[kA0bX5kc7u][0];
                    Mm9fpWS[t].PfS7D6zicmeJ[1] = RRVvNZowhy[kA0bX5kc7u][1];
                    Mm9fpWS[t].PfS7D6zicmeJ[2] = RRVvNZowhy[kA0bX5kc7u][2];
                    Mm9fpWS[t].gwlHF4 = sqrt ((RRVvNZowhy[AUcxV16ktvR][0] - RRVvNZowhy[kA0bX5kc7u][0]) * (RRVvNZowhy[AUcxV16ktvR][0] - RRVvNZowhy[kA0bX5kc7u][0]) + (RRVvNZowhy[AUcxV16ktvR][1] - RRVvNZowhy[kA0bX5kc7u][1]) * (RRVvNZowhy[AUcxV16ktvR][1] - RRVvNZowhy[kA0bX5kc7u][1]) + (RRVvNZowhy[AUcxV16ktvR][2] - RRVvNZowhy[kA0bX5kc7u][2]) * (RRVvNZowhy[AUcxV16ktvR][2] - RRVvNZowhy[kA0bX5kc7u][2]));
                    kA0bX5kc7u = kA0bX5kc7u + 1;
                    t = t + 1;
                };
            }
            AUcxV16ktvR = AUcxV16ktvR +1;
        };
    }
    for (kA0bX5kc7u = 0; YGmk5E > 0;) {
        YGmk5E--;
        kA0bX5kc7u = kA0bX5kc7u + YGmk5E;
    }
    qsort (Mm9fpWS, kA0bX5kc7u, sizeof (struct   suanshi), cmp);
    {
        AUcxV16ktvR = 0;
        while (AUcxV16ktvR < kA0bX5kc7u) {
            printf ("(%d,%d,%d)-(%d,%d,%d)=%.2f\n", Mm9fpWS[AUcxV16ktvR].mU2ziWkE6qN[0], Mm9fpWS[AUcxV16ktvR].mU2ziWkE6qN[1], Mm9fpWS[AUcxV16ktvR].mU2ziWkE6qN[2], Mm9fpWS[AUcxV16ktvR].PfS7D6zicmeJ[0], Mm9fpWS[AUcxV16ktvR].PfS7D6zicmeJ[1], Mm9fpWS[AUcxV16ktvR].PfS7D6zicmeJ[2], Mm9fpWS[AUcxV16ktvR].gwlHF4);
            AUcxV16ktvR++;
        };
    };
}

