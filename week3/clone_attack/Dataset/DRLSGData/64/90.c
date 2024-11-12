int main () {
    int rcUIzt;
    int pBP6astMuY2U [10];
    int VxDfLpOYV [10];
    int UvIMQpKN [10];
    int EFtfzo86IJq;
    int DiPnBeq;
    int byk4no;
    int eNH9OK3;
    int rqQlNdM6g0T [50];
    int BNvqd8U [50];
    int LsmkQUTKSB8 [50];
    int l75w2YFH [50];
    int tNUhGdns4 [50];
    int VSwQAp3yC [50];
    int Vs84Plj;
    int S7DFoy6z;
    int uXk6DGQEgw;
    int LiUB6R1N5;
    int ThvPXVwS5d;
    int MACxD6Pfhq;
    rcUIzt = 0;
    double  tDIF16tafSYg [50];
    double  L8i2wo6Gy5a9;
    char bFocuCn0z;
    char NH7Gfb;
    char v1Yrbm;
    char dCmke4a;
    bFocuCn0z = '(';
    NH7Gfb = ')';
    v1Yrbm = '-';
    dCmke4a = '=';
    scanf ("%d", &EFtfzo86IJq);
    for (DiPnBeq = 0; DiPnBeq < EFtfzo86IJq; DiPnBeq++) {
        scanf ("%d%d%d", &pBP6astMuY2U[DiPnBeq], &VxDfLpOYV[DiPnBeq], &UvIMQpKN[DiPnBeq]);
    }
    for (DiPnBeq = 0; DiPnBeq < (EFtfzo86IJq -1); DiPnBeq++) {
        for (byk4no = DiPnBeq +1; byk4no < EFtfzo86IJq; byk4no++) {
            eNH9OK3 = (pBP6astMuY2U[DiPnBeq] - pBP6astMuY2U[byk4no]) * (pBP6astMuY2U[DiPnBeq] - pBP6astMuY2U[byk4no]) + (VxDfLpOYV[DiPnBeq] - VxDfLpOYV[byk4no]) * (VxDfLpOYV[DiPnBeq] - VxDfLpOYV[byk4no]) + (UvIMQpKN[DiPnBeq] - UvIMQpKN[byk4no]) * (UvIMQpKN[DiPnBeq] - UvIMQpKN[byk4no]);
            tDIF16tafSYg[rcUIzt] = sqrt (eNH9OK3);
            rqQlNdM6g0T[rcUIzt] = pBP6astMuY2U[DiPnBeq];
            BNvqd8U[rcUIzt] = VxDfLpOYV[DiPnBeq];
            LsmkQUTKSB8[rcUIzt] = UvIMQpKN[DiPnBeq];
            l75w2YFH[rcUIzt] = pBP6astMuY2U[byk4no];
            tNUhGdns4[rcUIzt] = VxDfLpOYV[byk4no];
            VSwQAp3yC[rcUIzt] = UvIMQpKN[byk4no];
            rcUIzt++;
        }
    }
    for (DiPnBeq = 0; DiPnBeq < rcUIzt; DiPnBeq++) {
        byk4no = DiPnBeq +1;
        while (byk4no < rcUIzt) {
            if (tDIF16tafSYg[DiPnBeq] < tDIF16tafSYg[byk4no]) {
                L8i2wo6Gy5a9 = tDIF16tafSYg[byk4no];
                Vs84Plj = rqQlNdM6g0T[byk4no];
                S7DFoy6z = BNvqd8U[byk4no];
                uXk6DGQEgw = LsmkQUTKSB8[byk4no];
                LiUB6R1N5 = l75w2YFH[byk4no];
                ThvPXVwS5d = tNUhGdns4[byk4no];
                MACxD6Pfhq = VSwQAp3yC[byk4no];
                {
                    EFtfzo86IJq = byk4no;
                    while (EFtfzo86IJq > DiPnBeq) {
                        tDIF16tafSYg[EFtfzo86IJq] = tDIF16tafSYg[EFtfzo86IJq -1];
                        rqQlNdM6g0T[EFtfzo86IJq] = rqQlNdM6g0T[EFtfzo86IJq -1];
                        BNvqd8U[EFtfzo86IJq] = BNvqd8U[EFtfzo86IJq -1];
                        LsmkQUTKSB8[EFtfzo86IJq] = LsmkQUTKSB8[EFtfzo86IJq -1];
                        l75w2YFH[EFtfzo86IJq] = l75w2YFH[EFtfzo86IJq -1];
                        tNUhGdns4[EFtfzo86IJq] = tNUhGdns4[EFtfzo86IJq -1];
                        VSwQAp3yC[EFtfzo86IJq] = VSwQAp3yC[EFtfzo86IJq -1];
                        EFtfzo86IJq--;
                    }
                }
                tDIF16tafSYg[DiPnBeq] = L8i2wo6Gy5a9;
                rqQlNdM6g0T[DiPnBeq] = Vs84Plj;
                BNvqd8U[DiPnBeq] = S7DFoy6z;
                LsmkQUTKSB8[DiPnBeq] = uXk6DGQEgw;
                l75w2YFH[DiPnBeq] = LiUB6R1N5;
                tNUhGdns4[DiPnBeq] = ThvPXVwS5d;
                VSwQAp3yC[DiPnBeq] = MACxD6Pfhq;
            }
            byk4no++;
        }
    }
    for (DiPnBeq = 0; DiPnBeq < rcUIzt; DiPnBeq++) {
        printf ("%c%d,%d,%d%c%c%c%d,%d,%d%c%c%.2lf\n", bFocuCn0z, rqQlNdM6g0T[DiPnBeq], BNvqd8U[DiPnBeq], LsmkQUTKSB8[DiPnBeq], NH7Gfb, v1Yrbm, bFocuCn0z, l75w2YFH[DiPnBeq], tNUhGdns4[DiPnBeq], VSwQAp3yC[DiPnBeq], NH7Gfb, dCmke4a, tDIF16tafSYg[DiPnBeq]);
    }
    return 0;
}

