void  Y6Osn3fTgi (float LgJtBZyL1o [], int ZRfzX5nwv0) {
    double  nBF3VtHS;
    int cCAcEdJO2l5 = (916 - 916);
    int kigGDZ = (166 - 166), HDEvrO6Zk8 = (332 - 332);
    {
        kigGDZ = 264 - 264;
        while (ZRfzX5nwv0 > kigGDZ) {
            cCAcEdJO2l5 = kigGDZ;
            {
                HDEvrO6Zk8 = kigGDZ;
                while (ZRfzX5nwv0 > HDEvrO6Zk8) {
                    if (LgJtBZyL1o[cCAcEdJO2l5] > LgJtBZyL1o[HDEvrO6Zk8])
                        cCAcEdJO2l5 = HDEvrO6Zk8;
                    HDEvrO6Zk8 = HDEvrO6Zk8 +(819 - 818);
                }
            }
            nBF3VtHS = LgJtBZyL1o[cCAcEdJO2l5];
            LgJtBZyL1o[cCAcEdJO2l5] = LgJtBZyL1o[kigGDZ];
            LgJtBZyL1o[kigGDZ] = nBF3VtHS;
            kigGDZ++;
        }
    }
}

void  SCI25AVbBGZ (float LgJtBZyL1o [], int ZRfzX5nwv0) {
    double  nBF3VtHS;
    int kigGDZ = (180 - 180), HDEvrO6Zk8 = (148 - 148);
    int cCAcEdJO2l5 = (794 - 794);
    {
        kigGDZ = (1712 - 996) - 716;
        for (; kigGDZ < ZRfzX5nwv0;) {
            cCAcEdJO2l5 = kigGDZ;
            {
                HDEvrO6Zk8 = kigGDZ;
                for (; ZRfzX5nwv0 > HDEvrO6Zk8;) {
                    if (LgJtBZyL1o[cCAcEdJO2l5] < LgJtBZyL1o[HDEvrO6Zk8])
                        cCAcEdJO2l5 = HDEvrO6Zk8;
                    HDEvrO6Zk8++;
                }
            }
            nBF3VtHS = LgJtBZyL1o[cCAcEdJO2l5];
            LgJtBZyL1o[cCAcEdJO2l5] = LgJtBZyL1o[kigGDZ];
            LgJtBZyL1o[kigGDZ] = nBF3VtHS;
            kigGDZ++;
        }
    }
}

int main () {
    int s7DosYSpX5aw, kigGDZ = (888 - 888), HDEvrO6Zk8 = (798 - 798), k, uFQHuKX;
    char ZlaWCN1 [(530 - 522)];
    float qaIQzJPgTLn;
    float CauIyRJ54 [(441 - 401)];
    float MeDnt2C [(976 - 936)];
    scanf ("%d", &s7DosYSpX5aw);
    {
        k = (1610 - 925) - 685;
        for (; k < s7DosYSpX5aw;) {
            k++;
            scanf ("%s%f", ZlaWCN1, &qaIQzJPgTLn);
            if (strcmp (ZlaWCN1, "male") == (511 - 511)) {
                MeDnt2C[kigGDZ] = qaIQzJPgTLn;
                kigGDZ++;
            }
            else {
                CauIyRJ54[HDEvrO6Zk8] = qaIQzJPgTLn;
                HDEvrO6Zk8++;
            }
        }
    }
    SCI25AVbBGZ (CauIyRJ54, HDEvrO6Zk8);
    Y6Osn3fTgi (MeDnt2C, kigGDZ);
    {
        uFQHuKX = (196 - 156) - 40;
        while (uFQHuKX < kigGDZ) {
            printf ("%.2f ", MeDnt2C[uFQHuKX]);
            uFQHuKX++;
        }
    }
    {
        uFQHuKX = 201 - 201;
        while (uFQHuKX < HDEvrO6Zk8 -(697 - 696)) {
            printf ("%.2f ", CauIyRJ54[uFQHuKX]);
            uFQHuKX++;
        }
    }
    printf ("%.2f", CauIyRJ54[HDEvrO6Zk8 -(155 - 154)]);
    return (45 - 45);
}

