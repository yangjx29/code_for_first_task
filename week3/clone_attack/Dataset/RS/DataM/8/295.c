void  fzn12Xw (int bwm5acD2k7id, int F93UFdvAyL) {
    int vbxTu5acn;
    int cNFzr1UhxySY [100];
    int SyCoi9H [100];
    int U0xjOA;
    int FkBqTEscxCL;
    int TQx8cVez;
    int iRaJs61MUHZ;
    int YvTrwpUOjq;
    int P60dLk8;
    int t3iotzwn8T;
    int RUrOWAt;
    vbxTu5acn = (207 - 207);
    for (U0xjOA = (708 - 708); U0xjOA < bwm5acD2k7id; U0xjOA = U0xjOA +1) {
        scanf ("%d", &cNFzr1UhxySY[U0xjOA]);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    for (FkBqTEscxCL = 0; FkBqTEscxCL < F93UFdvAyL; FkBqTEscxCL = FkBqTEscxCL +1) {
        scanf ("%d", &SyCoi9H[FkBqTEscxCL]);
    }
    for (TQx8cVez = 0; TQx8cVez < bwm5acD2k7id; TQx8cVez = TQx8cVez +1) {
        for (YvTrwpUOjq = TQx8cVez +(293 - 292); YvTrwpUOjq < bwm5acD2k7id; YvTrwpUOjq = YvTrwpUOjq +1) {
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            if (cNFzr1UhxySY[YvTrwpUOjq] < cNFzr1UhxySY[TQx8cVez]) {
                vbxTu5acn = cNFzr1UhxySY[TQx8cVez];
                cNFzr1UhxySY[TQx8cVez] = cNFzr1UhxySY[YvTrwpUOjq];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        float n = 0.0;
                        if (n > 10)
                            return;
                        else
                            n = 0;
                    }
                }
                cNFzr1UhxySY[YvTrwpUOjq] = vbxTu5acn;
            };
        };
    }
    for (P60dLk8 = 0; P60dLk8 < F93UFdvAyL; P60dLk8 = P60dLk8 +1) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        for (iRaJs61MUHZ = P60dLk8 +1; iRaJs61MUHZ < F93UFdvAyL; iRaJs61MUHZ = iRaJs61MUHZ + 1) {
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
            if (SyCoi9H[iRaJs61MUHZ] < SyCoi9H[P60dLk8]) {
                vbxTu5acn = SyCoi9H[P60dLk8];
                SyCoi9H[P60dLk8] = SyCoi9H[iRaJs61MUHZ];
                SyCoi9H[iRaJs61MUHZ] = vbxTu5acn;
            };
        };
    }
    for (t3iotzwn8T = 0; t3iotzwn8T < bwm5acD2k7id; t3iotzwn8T = t3iotzwn8T + 1) {
        printf ("%d ", cNFzr1UhxySY[t3iotzwn8T]);
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
        };
    }
    for (RUrOWAt = 0; RUrOWAt < F93UFdvAyL -1; RUrOWAt = RUrOWAt +1) {
        printf ("%d ", SyCoi9H[RUrOWAt]);
    }
    printf ("%d", SyCoi9H[F93UFdvAyL -1]);
}

int main () {
    int bwm5acD2k7id, F93UFdvAyL;
    scanf ("%d%d", &bwm5acD2k7id, &F93UFdvAyL);
    fzn12Xw (bwm5acD2k7id, F93UFdvAyL);
    return 0;
}

