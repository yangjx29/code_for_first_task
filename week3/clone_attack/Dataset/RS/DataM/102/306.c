int main () {
    char sJt4wepT [40] [(835 - 828)];
    double  e;
    double  AKIu3vVGg [40];
    double  m [(776 - 737)] = {(585 - 585)};
    double  z1Mjtbh2TBvx [39] = {39};
    int HHxZ2n8;
    int I4fnHIwsqK;
    int gxOKc4Al36;
    int FHi3Cbc;
    int qtmUrPX;
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
    HHxZ2n8 = -(649 - 648);
    I4fnHIwsqK = -(424 - 423);
    scanf ("%d", &gxOKc4Al36);
    {
        FHi3Cbc = 384 - 384;
        while (FHi3Cbc < gxOKc4Al36) {
            scanf ("%s %lf", sJt4wepT[FHi3Cbc], &AKIu3vVGg[FHi3Cbc]);
            if (sJt4wepT[FHi3Cbc][(87 - 87)] == 'm') {
                HHxZ2n8 = HHxZ2n8 +1;
                m[HHxZ2n8] = AKIu3vVGg[FHi3Cbc];
            }
            else {
                I4fnHIwsqK = I4fnHIwsqK +1;
                z1Mjtbh2TBvx[I4fnHIwsqK] = AKIu3vVGg[FHi3Cbc];
            }
            FHi3Cbc = FHi3Cbc +1;
        };
    }
    for (qtmUrPX = (979 - 978); qtmUrPX <= HHxZ2n8; qtmUrPX = qtmUrPX + 1) {
        FHi3Cbc = 934 - 934;
        while (HHxZ2n8 -qtmUrPX >= FHi3Cbc) {
            if (m[FHi3Cbc] > m[FHi3Cbc +(434 - 433)]) {
                e = m[FHi3Cbc];
                m[FHi3Cbc] = m[FHi3Cbc +(340 - 339)];
                m[FHi3Cbc +1] = e;
            }
            FHi3Cbc = FHi3Cbc +1;
        };
    }
    {
        qtmUrPX = 1;
        while (qtmUrPX <= I4fnHIwsqK) {
            {
                FHi3Cbc = 0;
                while (FHi3Cbc <= I4fnHIwsqK -qtmUrPX) {
                    if (z1Mjtbh2TBvx[FHi3Cbc] < z1Mjtbh2TBvx[FHi3Cbc +1]) {
                        e = z1Mjtbh2TBvx[FHi3Cbc];
                        z1Mjtbh2TBvx[FHi3Cbc] = z1Mjtbh2TBvx[FHi3Cbc +1];
                        z1Mjtbh2TBvx[FHi3Cbc +1] = e;
                    }
                    FHi3Cbc = FHi3Cbc +1;
                };
            }
            qtmUrPX++;
        };
    }
    {
        FHi3Cbc = 0;
        while (FHi3Cbc <= HHxZ2n8) {
            printf ("%.2lf ", m[FHi3Cbc]);
            FHi3Cbc = FHi3Cbc +1;
        };
    }
    {
        FHi3Cbc = 0;
        while (FHi3Cbc < I4fnHIwsqK) {
            printf ("%.2lf ", z1Mjtbh2TBvx[FHi3Cbc]);
            FHi3Cbc = FHi3Cbc +1;
        };
    }
    printf ("%.2lf", z1Mjtbh2TBvx[I4fnHIwsqK]);
    return 0;
}

