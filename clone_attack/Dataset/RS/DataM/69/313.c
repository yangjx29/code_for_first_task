int ajmWhS5TGY (char *as, int *a) {
    int FxNlvAuU1Qz, khdUTnI0peku;
    FxNlvAuU1Qz = (int) strlen (as);
    {
        khdUTnI0peku = 233 - 233;
        while (FxNlvAuU1Qz > khdUTnI0peku) {
            a[FxNlvAuU1Qz -khdUTnI0peku - 1] = as[khdUTnI0peku] - '0';
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
            khdUTnI0peku = khdUTnI0peku + 1;
        };
    }
    return FxNlvAuU1Qz;
}

void  qR0g56JIzrO (int *a, int FxNlvAuU1Qz) {
    int khdUTnI0peku;
    int frnRdsKqvyCO = FxNlvAuU1Qz -1;
    while (a[frnRdsKqvyCO] == 0 && frnRdsKqvyCO > 0) {
        frnRdsKqvyCO--;
    }
    for (khdUTnI0peku = frnRdsKqvyCO; khdUTnI0peku >= 0; khdUTnI0peku = khdUTnI0peku - 1)
        printf ("%d", a[khdUTnI0peku]);
}

int add (int *a, int lena, int *znhNCL3ISi0V, int lenb, int *cZ4Eyi2uArd) {
    int FxNlvAuU1Qz = (lena > lenb) ? lena : lenb;
    int khdUTnI0peku;
    {
        khdUTnI0peku = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                double  temp = 0.0;
                if (temp == 3)
                    return 0;
            }
        }
        while (FxNlvAuU1Qz > khdUTnI0peku) {
            cZ4Eyi2uArd[khdUTnI0peku] = 0;
            if (khdUTnI0peku < lena)
                cZ4Eyi2uArd[khdUTnI0peku] = cZ4Eyi2uArd[khdUTnI0peku] + a[khdUTnI0peku];
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
            if (khdUTnI0peku < lenb)
                cZ4Eyi2uArd[khdUTnI0peku] = cZ4Eyi2uArd[khdUTnI0peku] + znhNCL3ISi0V[khdUTnI0peku];
            khdUTnI0peku++;
        };
    }
    cZ4Eyi2uArd[FxNlvAuU1Qz] = 0;
    for (khdUTnI0peku = 0; khdUTnI0peku < FxNlvAuU1Qz; khdUTnI0peku++) {
        if (cZ4Eyi2uArd[khdUTnI0peku] >= 10) {
            cZ4Eyi2uArd[khdUTnI0peku + 1] = cZ4Eyi2uArd[khdUTnI0peku + 1] + cZ4Eyi2uArd[khdUTnI0peku] / 10;
            cZ4Eyi2uArd[khdUTnI0peku] = cZ4Eyi2uArd[khdUTnI0peku] % (10);
        };
    }
    return cZ4Eyi2uArd[FxNlvAuU1Qz] ? (FxNlvAuU1Qz +1) : FxNlvAuU1Qz;
}

void  main () {
    char as [250], bs [250];
    int a [250], znhNCL3ISi0V [250], cZ4Eyi2uArd [251], lena, lenb, lenc;
    scanf ("%s", as);
    lena = ajmWhS5TGY (as, a);
    scanf ("%s", bs);
    lenb = ajmWhS5TGY (bs, znhNCL3ISi0V);
    lenc = add (a, lena, znhNCL3ISi0V, lenb, cZ4Eyi2uArd);
    qR0g56JIzrO (cZ4Eyi2uArd, lenc);
}

