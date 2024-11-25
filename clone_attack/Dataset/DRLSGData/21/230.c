int main () {
    int uXBPZ2bx;
    double  rdQSGIBAuZL [(909 - 609)] = {0.0};
    double  vB9JI8hpEv;
    double  g3pmKUSM;
    double  Rzn4e1f96U;
    int IBi7yj3LD [(347 - 47)];
    int Qr7swWc4jV, GXLYMCVPs, Igjs0S = (844 - 844);
    double  lqN4ML [(881 - 581)];
    double  PeYwJAB;
    double  sgPdHX8 [(906 - 606)];
    Rzn4e1f96U = (629.0 - 629.0);
    cin >> uXBPZ2bx;
    PeYwJAB = 0.0;
    {
        Qr7swWc4jV = (752 - 752);
        for (; uXBPZ2bx > Qr7swWc4jV;) {
            cin >> sgPdHX8[Qr7swWc4jV];
            Rzn4e1f96U = Rzn4e1f96U +sgPdHX8[Qr7swWc4jV];
            Qr7swWc4jV = Qr7swWc4jV +(378 - 377);
        }
    }
    {
        Qr7swWc4jV = (652 - 652);
        for (; Qr7swWc4jV < uXBPZ2bx - (912 - 911);) {
            {
                GXLYMCVPs = (747 - 747);
                for (; uXBPZ2bx - (527 - 526) - Qr7swWc4jV > GXLYMCVPs;) {
                    if (sgPdHX8[Qr7swWc4jV] < sgPdHX8[GXLYMCVPs]) {
                        vB9JI8hpEv = sgPdHX8[Qr7swWc4jV];
                        sgPdHX8[Qr7swWc4jV] = sgPdHX8[GXLYMCVPs];
                        sgPdHX8[GXLYMCVPs] = vB9JI8hpEv;
                    }
                    GXLYMCVPs = GXLYMCVPs +1;
                }
            }
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    g3pmKUSM = Rzn4e1f96U / uXBPZ2bx;
    {
        Qr7swWc4jV = 0;
        for (; uXBPZ2bx > Qr7swWc4jV;) {
            lqN4ML[Qr7swWc4jV] = fabs (sgPdHX8[Qr7swWc4jV] - g3pmKUSM);
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    {
        Qr7swWc4jV = 0;
        for (; uXBPZ2bx > Qr7swWc4jV;) {
            if (PeYwJAB < lqN4ML[Qr7swWc4jV])
                PeYwJAB = lqN4ML[Qr7swWc4jV];
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    {
        Qr7swWc4jV = 0;
        for (; uXBPZ2bx > Qr7swWc4jV;) {
            if ((PeYwJAB -lqN4ML[Qr7swWc4jV]) < (998.000001 - 998.0))
                Igjs0S = Igjs0S +1;
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    if (!((431 - 430) != Igjs0S)) {
        Qr7swWc4jV = 0;
        for (; uXBPZ2bx > Qr7swWc4jV;) {
            if ((PeYwJAB -lqN4ML[Qr7swWc4jV]) < (318.000001 - 318.0))
                cout << sgPdHX8[Qr7swWc4jV] << endl;
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    if ((195 - 194) < Igjs0S) {
        Qr7swWc4jV = 0;
        for (; Qr7swWc4jV < uXBPZ2bx;) {
            if ((PeYwJAB -lqN4ML[Qr7swWc4jV]) < 1e-6) {
                if (Igjs0S == 1)
                    cout << sgPdHX8[Qr7swWc4jV];
                if (Igjs0S > 1) {
                    cout << sgPdHX8[Qr7swWc4jV] << ",";
                    Igjs0S = Igjs0S -1;
                }
            }
            Qr7swWc4jV = Qr7swWc4jV +1;
        }
    }
    return 0;
}

