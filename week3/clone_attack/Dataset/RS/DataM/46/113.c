int main () {
    int uCgmhZV5;
    int BiJX1RmO;
    int exdl0pmLB;
    int AhHGTK2qZSe;
    int FUny0hL;
    int RPVCel2zDj;
    int bAcb481noqV;
    int Lsn1dpr98u;
    int kz9swqiaYPu;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    int wfWbzEUdwi [100] [100];
    scanf ("%d%d", &uCgmhZV5, &BiJX1RmO);
    if (uCgmhZV5 > BiJX1RmO)
        kz9swqiaYPu = BiJX1RmO;
    else
        kz9swqiaYPu = uCgmhZV5;
    for (exdl0pmLB = 0; exdl0pmLB < uCgmhZV5; exdl0pmLB++) {
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        for (AhHGTK2qZSe = 0; AhHGTK2qZSe < BiJX1RmO; AhHGTK2qZSe++) {
            scanf ("%d", &wfWbzEUdwi[exdl0pmLB][AhHGTK2qZSe]);
        };
    }
    {
        FUny0hL = 0;
        while (((kz9swqiaYPu + 1) / 2) > FUny0hL) {
            {
                exdl0pmLB = FUny0hL;
                while (BiJX1RmO > exdl0pmLB) {
                    printf ("%d\n", wfWbzEUdwi[FUny0hL][exdl0pmLB]);
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            double  temp = 0.0;
                            if (temp == 3)
                                return 0;
                        }
                    }
                    exdl0pmLB = exdl0pmLB + 1;
                };
            }
            BiJX1RmO = BiJX1RmO -1;
            {
                AhHGTK2qZSe = FUny0hL +1;
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
                while (AhHGTK2qZSe < uCgmhZV5) {
                    printf ("%d\n", wfWbzEUdwi[AhHGTK2qZSe][BiJX1RmO]);
                    AhHGTK2qZSe = AhHGTK2qZSe +1;
                };
            }
            uCgmhZV5 -= 1;
            if (!(FUny0hL != uCgmhZV5))
                break;
            {
                Lsn1dpr98u = BiJX1RmO -1;
                while (Lsn1dpr98u >= FUny0hL) {
                    printf ("%d\n", wfWbzEUdwi[uCgmhZV5][Lsn1dpr98u]);
                    Lsn1dpr98u = Lsn1dpr98u -1;
                };
            }
            if (BiJX1RmO == FUny0hL)
                break;
            FUny0hL++;
            RPVCel2zDj = Lsn1dpr98u +1;
            {
                bAcb481noqV = uCgmhZV5 - 1;
                while (bAcb481noqV >= FUny0hL +1) {
                    printf ("%d\n", wfWbzEUdwi[bAcb481noqV][RPVCel2zDj]);
                    bAcb481noqV = bAcb481noqV - 1;
                };
            };
        };
    }
    return 0;
}

