void  PERfaeSyK5p (char dLzONb [], char DAST3u69URi []);

void  main () {
    char dLzONb [100] [101];
    int C36dvDNxZn, m;
    scanf ("%d", &C36dvDNxZn);
    {
        m = 295 - 295;
        while (2 * C36dvDNxZn -2 >= m) {
            scanf ("%s", dLzONb[m]);
            scanf ("%s", dLzONb[m + (298 - 297)]);
            m = m + 2;
            printf ("\n");
        };
    }
    for (m = 0; 2 * C36dvDNxZn -2 >= m; m = m + 2)
        PERfaeSyK5p (dLzONb[m], dLzONb[m + 1]);
}

void  PERfaeSyK5p (char dLzONb [], char DAST3u69URi []) {
    int m, C36dvDNxZn, rvMfFL0tg, Kq0Me9QmEp68, vD7fLuKSRWI, CVG07Lz, FpVrzRQf8, IUkQGiFlYA;
    char saXJc7W [101] = {"0"}, p7US2PJkxLl [101] = {'0'};
    int Gst80KNgT [101] = {0};
    int D48RHJB [101] = {0};
    int ZI7Sb5 [101] = {0};
    int U17n8fJYOk [101] = {0};
    FpVrzRQf8 = 0;
    m = 0;
    C36dvDNxZn = 0;
    vD7fLuKSRWI = strlen (dLzONb);
    {
        rvMfFL0tg = vD7fLuKSRWI;
        while (1 <= rvMfFL0tg) {
            dLzONb[rvMfFL0tg] = dLzONb[rvMfFL0tg - 1];
            rvMfFL0tg--;
        };
    }
    dLzONb[0] = 48;
    CVG07Lz = strlen (DAST3u69URi);
    for (Kq0Me9QmEp68 = CVG07Lz; 1 <= Kq0Me9QmEp68; Kq0Me9QmEp68 = Kq0Me9QmEp68 -1)
        DAST3u69URi[Kq0Me9QmEp68] = DAST3u69URi[Kq0Me9QmEp68 -1];
    DAST3u69URi[0] = 48;
    {
        rvMfFL0tg = 0;
        while (vD7fLuKSRWI >= rvMfFL0tg) {
            Gst80KNgT[rvMfFL0tg] = dLzONb[rvMfFL0tg] - 48;
            rvMfFL0tg = rvMfFL0tg + 1;
        };
    }
    {
        Kq0Me9QmEp68 = 0;
        while (CVG07Lz >= Kq0Me9QmEp68) {
            D48RHJB[Kq0Me9QmEp68] = DAST3u69URi[Kq0Me9QmEp68] - 48;
            Kq0Me9QmEp68 = Kq0Me9QmEp68 +1;
        };
    }
    {
        Kq0Me9QmEp68 = 1;
        while (CVG07Lz >= Kq0Me9QmEp68) {
            U17n8fJYOk[Kq0Me9QmEp68] = 9 - D48RHJB[Kq0Me9QmEp68];
            Kq0Me9QmEp68 = Kq0Me9QmEp68 +1;
        };
    }
    {
        rvMfFL0tg = vD7fLuKSRWI;
        Kq0Me9QmEp68 = CVG07Lz;
        while (0 <= Kq0Me9QmEp68) {
            ZI7Sb5[rvMfFL0tg] = (Gst80KNgT[rvMfFL0tg] + U17n8fJYOk[Kq0Me9QmEp68] + FpVrzRQf8) % 10;
            FpVrzRQf8 = (Gst80KNgT[rvMfFL0tg] + U17n8fJYOk[Kq0Me9QmEp68] + FpVrzRQf8) / 10;
            Kq0Me9QmEp68 = Kq0Me9QmEp68 -1;
            rvMfFL0tg = rvMfFL0tg - 1;
        };
    }
    for (; rvMfFL0tg >= 0; rvMfFL0tg = rvMfFL0tg - 1) {
        ZI7Sb5[rvMfFL0tg] = (Gst80KNgT[rvMfFL0tg] + FpVrzRQf8) % 10;
        FpVrzRQf8 = (Gst80KNgT[rvMfFL0tg] + FpVrzRQf8) / 10;
    }
    for (IUkQGiFlYA = vD7fLuKSRWI; IUkQGiFlYA >= 1; IUkQGiFlYA = IUkQGiFlYA -1) {
        ZI7Sb5[IUkQGiFlYA] = (ZI7Sb5[IUkQGiFlYA] + 1) % 10;
        if (ZI7Sb5[IUkQGiFlYA] != 0)
            goto yes;
    }
    ZI7Sb5[0] = ZI7Sb5[0] + 1;
yes :
    for (IUkQGiFlYA = vD7fLuKSRWI - CVG07Lz; IUkQGiFlYA >= 0; IUkQGiFlYA = IUkQGiFlYA -1) {
        ZI7Sb5[IUkQGiFlYA] = ZI7Sb5[IUkQGiFlYA] - 1;
        if (ZI7Sb5[IUkQGiFlYA] != -1)
            goto diong;
        else
            ZI7Sb5[IUkQGiFlYA] = 9;
    }
diong :
    for (rvMfFL0tg = 0; rvMfFL0tg <= vD7fLuKSRWI; rvMfFL0tg = rvMfFL0tg + 1)
        saXJc7W[rvMfFL0tg] = ZI7Sb5[rvMfFL0tg] + 48;
    while (saXJc7W[0] == 48) {
        rvMfFL0tg = 0;
        while (rvMfFL0tg <= vD7fLuKSRWI) {
            saXJc7W[rvMfFL0tg] = saXJc7W[rvMfFL0tg + 1];
            rvMfFL0tg++;
        };
    }
    printf ("%s\n", saXJc7W);
}

