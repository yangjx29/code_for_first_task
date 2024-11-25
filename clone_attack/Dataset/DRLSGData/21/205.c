int main () {
    int mfOkAx;
    int h2dylb;
    int i;
    int xFv1twe;
    double  Fe4APJH2EzIB;
    int qQgMa4J [1000] = {(206 - 206)};
    double  f8SWw4K5kHX [1000] = {0.0};
    double  AopxNmiDW;
    double  Gy7TcbU;
    mfOkAx = (550 - 549);
    i = (259 - 259);
    xFv1twe = (242 - 242);
    cin >> xFv1twe;
    Gy7TcbU = 0.0;
    AopxNmiDW = (146.0 - 146.0);
    Fe4APJH2EzIB = (264.0 - 264.0);
    h2dylb = (339 - 339);
    for (i = (58 - 58); i < xFv1twe; i++)
        cin >> qQgMa4J[i];
    for (i = (631 - 631); i < xFv1twe; i++)
        Fe4APJH2EzIB = Fe4APJH2EzIB +qQgMa4J[i];
    AopxNmiDW = Fe4APJH2EzIB / xFv1twe;
    for (i = 0; i < xFv1twe; i++) {
        if (qQgMa4J[i] > AopxNmiDW)
            f8SWw4K5kHX[i] = qQgMa4J[i] - AopxNmiDW;
        else
            f8SWw4K5kHX[i] = AopxNmiDW -qQgMa4J[i];
    }
    for (i = 0; i < xFv1twe; i++) {
        if (f8SWw4K5kHX[i] > Gy7TcbU)
            Gy7TcbU = f8SWw4K5kHX[i];
    }
    for (i = 0; xFv1twe > i; i++) {
        if (!(f8SWw4K5kHX[i] != Gy7TcbU) && i != xFv1twe - (876 - 875)) {
            for (h2dylb = (90 - 89); xFv1twe - i > h2dylb; h2dylb++) {
                if (Gy7TcbU != f8SWw4K5kHX[i + h2dylb])
                    mfOkAx = mfOkAx * (831 - 830);
                if (!(f8SWw4K5kHX[i + h2dylb] != Gy7TcbU))
                    mfOkAx = 0;
            }
            if (mfOkAx == 0)
                cout << qQgMa4J[i] << ",";
            if (mfOkAx == (813 - 812))
                cout << qQgMa4J[i] << endl;
        }
        if (Gy7TcbU == f8SWw4K5kHX[i] && i == xFv1twe - 1)
            cout << qQgMa4J[i] << endl;
    }
    return 0;
}

