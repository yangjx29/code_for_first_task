int main () {
    int ySidaRKoA9vG [10], NkWtSwM6mT5 [10], LqYzWDdmEIk6 [10], SJNDMA6 [10];
    int xdlOg01n (int, int);
    int viowNJh (int);
    int d1aAX5QmCD, H5T4Zt, VfcXsi1 = (523 - 523), q = (751 - 751), CDblCdL, BxmkvCIE = 0;
    scanf ("%d%d", &d1aAX5QmCD, &H5T4Zt);
    for (CDblCdL = 0;; CDblCdL++) {
        VfcXsi1++;
        ySidaRKoA9vG[CDblCdL] = d1aAX5QmCD;
        d1aAX5QmCD = viowNJh (d1aAX5QmCD);
        if (!(0 != d1aAX5QmCD))
            break;
    }
    {
        CDblCdL = 0;
        while (1) {
            q++;
            NkWtSwM6mT5[CDblCdL] = H5T4Zt;
            H5T4Zt = viowNJh (H5T4Zt);
            if (!(0 != H5T4Zt))
                break;
            CDblCdL++;
        };
    }
    {
        CDblCdL = VfcXsi1;
        while (0 < CDblCdL) {
            CDblCdL--;
            LqYzWDdmEIk6[BxmkvCIE] = ySidaRKoA9vG[CDblCdL -1];
            BxmkvCIE++;
        };
    }
    BxmkvCIE = 0;
    for (CDblCdL = q; CDblCdL > 0; CDblCdL--) {
        SJNDMA6[BxmkvCIE] = NkWtSwM6mT5[CDblCdL -1];
        BxmkvCIE++;
    }
    {
        CDblCdL = 0;
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
        while (CDblCdL < xdlOg01n (VfcXsi1, q)) {
            if (LqYzWDdmEIk6[CDblCdL] == SJNDMA6[CDblCdL] && LqYzWDdmEIk6[CDblCdL +1] != SJNDMA6[CDblCdL +1]) {
                printf ("%d", LqYzWDdmEIk6[CDblCdL]);
                break;
            }
            CDblCdL++;
        };
    }
    return 0;
}

int viowNJh (int ySidaRKoA9vG) {
    int IKmv5syJ7onp;
    if (ySidaRKoA9vG % (275 - 273) == 0)
        IKmv5syJ7onp = ySidaRKoA9vG / 2;
    else
        IKmv5syJ7onp = (ySidaRKoA9vG - 1) / 2;
    return IKmv5syJ7onp;
}

int xdlOg01n (int ySidaRKoA9vG, int NkWtSwM6mT5) {
    int IKmv5syJ7onp;
    if (ySidaRKoA9vG < NkWtSwM6mT5)
        IKmv5syJ7onp = ySidaRKoA9vG;
    else
        IKmv5syJ7onp = NkWtSwM6mT5;
    return IKmv5syJ7onp;
}

