int zSoNj1 [(178 - 165)] = {(422 - 422), (768 - 737), 29, (201 - 170), 30, (464 - 433), 30, (490 - 459), (909 - 878), 30, 31, 30, 31};
int bBOSo1R [13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int TO9kHtmcI6 (int Vg6r40Xn1LiU) {
    if ((!(0 != Vg6r40Xn1LiU % (330 - 326)) && !(0 == Vg6r40Xn1LiU % (801 - 701))) || (!(0 != Vg6r40Xn1LiU % 400)))
        return (181 - 180);
    else
        return 0;
}

void  main () {
    long  PnTyZDP0B;
    long  nfsMFZEG;
    long  y1;
    long  N31rv0;
    long  o6zqAdwCSlk;
    long  y2;
    long  lhB1Z34yDei;
    long  ctdPNnH0;
    scanf ("%d%d%d", &y1, &N31rv0, &o6zqAdwCSlk);
    scanf ("%d%d%d", &y2, &lhB1Z34yDei, &ctdPNnH0);
    nfsMFZEG = 0;
    {
        PnTyZDP0B = 702 - 701;
        while (N31rv0 -(479 - 478) >= PnTyZDP0B) {
            if (TO9kHtmcI6 (y1) == 1)
                nfsMFZEG = nfsMFZEG - zSoNj1[PnTyZDP0B];
            else
                nfsMFZEG = nfsMFZEG - bBOSo1R[PnTyZDP0B];
            PnTyZDP0B++;
        };
    }
    nfsMFZEG = nfsMFZEG - o6zqAdwCSlk;
    for (PnTyZDP0B = 1; PnTyZDP0B <= lhB1Z34yDei - 1; PnTyZDP0B = PnTyZDP0B +1)
        if (TO9kHtmcI6 (y2) == 1)
            nfsMFZEG = nfsMFZEG + zSoNj1[PnTyZDP0B];
        else
            nfsMFZEG = nfsMFZEG + bBOSo1R[PnTyZDP0B];
    nfsMFZEG = nfsMFZEG + ctdPNnH0;
    for (PnTyZDP0B = y1; PnTyZDP0B <= y2 - 1; PnTyZDP0B++)
        if (TO9kHtmcI6 (PnTyZDP0B) == 1)
            nfsMFZEG = nfsMFZEG + 366;
        else
            nfsMFZEG = nfsMFZEG + 365;
    printf ("%ld\n", nfsMFZEG);
}

