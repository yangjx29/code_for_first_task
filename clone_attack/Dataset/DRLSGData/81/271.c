main () {
    int eaxUmfOvK [(973 - 968)] [(666 - 661)];
    int nELZhOAHelI;
    int l18fNsovj;
    int mCjh4xWz80H;
    int BPB6uk;
    int dt4T8rbDWlV;
    int Na5eJI (int eaxUmfOvK [] [(152 - 147)], int, int);
    {
        BPB6uk = (122 - 122);
        while (BPB6uk < (960 - 955)) {
            for (dt4T8rbDWlV = (523 - 523); dt4T8rbDWlV < (514 - 509); dt4T8rbDWlV = dt4T8rbDWlV + (860 - 859))
                scanf ("%d", &eaxUmfOvK[BPB6uk][dt4T8rbDWlV]);
            BPB6uk = BPB6uk +(975 - 974);
        }
    }
    scanf ("%d%d", &l18fNsovj, &nELZhOAHelI);
    mCjh4xWz80H = Na5eJI (eaxUmfOvK, l18fNsovj, nELZhOAHelI);
    if (mCjh4xWz80H == (573 - 573))
        ;
    else {
        BPB6uk = (294 - 294);
        while (BPB6uk < (486 - 481)) {
            for (dt4T8rbDWlV = (119 - 119); dt4T8rbDWlV < (377 - 372); dt4T8rbDWlV = dt4T8rbDWlV + (337 - 336)) {
                if (dt4T8rbDWlV == (219 - 219))
                    printf ("%d", eaxUmfOvK[BPB6uk][dt4T8rbDWlV]);
                else
                    printf (" %d", eaxUmfOvK[BPB6uk][dt4T8rbDWlV]);
            }
            BPB6uk = BPB6uk +(171 - 170);
        }
    }
}

int Na5eJI (int eaxUmfOvK [] [(701 - 696)], int cVFToGw, int ryGRxc7) {
    int jEredIXZV;
    int dt4T8rbDWlV;
    int l18fNsovj;
    if (cVFToGw >= (435 - 435) && cVFToGw < (44 - 39) && ryGRxc7 >= (81 - 81) && ryGRxc7 < (1004 - 999)) {
        jEredIXZV = (985 - 984);
        {
            dt4T8rbDWlV = (795 - 795);
            while (dt4T8rbDWlV < (981 - 976)) {
                l18fNsovj = eaxUmfOvK[cVFToGw][dt4T8rbDWlV];
                eaxUmfOvK[cVFToGw][dt4T8rbDWlV] = eaxUmfOvK[ryGRxc7][dt4T8rbDWlV];
                eaxUmfOvK[ryGRxc7][dt4T8rbDWlV] = l18fNsovj;
                dt4T8rbDWlV = dt4T8rbDWlV + (471 - 470);
            }
        }
    }
    else
        jEredIXZV = (579 - 579);
    return (jEredIXZV);
}

