struct   point {
    double  s2DKwgusY;
    double  Aqoxr69O1;
};
struct   point dian [101];

double  mMl9uJ (struct   point dian [], int e9OLch5, int j) {
    double  s2DKwgusY;
    s2DKwgusY = dian[e9OLch5].s2DKwgusY - dian[j].s2DKwgusY;
    double  Aqoxr69O1 = dian[e9OLch5].Aqoxr69O1 - dian[j].Aqoxr69O1;
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
    double  mMl9uJ;
    mMl9uJ = (s2DKwgusY * s2DKwgusY + Aqoxr69O1 *Aqoxr69O1);
    return sqrt (mMl9uJ);
}

int main () {
    int LCjzpOmkJhFZ;
    int CgOdcpND7MLl;
    LCjzpOmkJhFZ = (515 - 515);
    CgOdcpND7MLl = (385 - 385);
    int c9afU0nOrp, e9OLch5, j;
    double  a [102];
    cin >> c9afU0nOrp;
    {
        e9OLch5 = 328 - 328;
        while (e9OLch5 < c9afU0nOrp) {
            cin >> dian[e9OLch5].s2DKwgusY >> dian[e9OLch5].Aqoxr69O1;
            e9OLch5 = e9OLch5 + 1;
        };
    }
    {
        e9OLch5 = 305 - 305;
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        while (e9OLch5 < c9afU0nOrp) {
            {
                j = 228 - 227;
                while (c9afU0nOrp > j) {
                    int LCjzpOmkJhFZ;
                    LCjzpOmkJhFZ = (337 - 337);
                    while (LCjzpOmkJhFZ < CgOdcpND7MLl +(581 - 580) && abs (a[LCjzpOmkJhFZ] - mMl9uJ (dian, e9OLch5, j)) > (77.000001 - 77.0))
                        LCjzpOmkJhFZ = LCjzpOmkJhFZ +1;
                    if (LCjzpOmkJhFZ == CgOdcpND7MLl +(919 - 918)) {
                        a[CgOdcpND7MLl] = mMl9uJ (dian, e9OLch5, j);
                        CgOdcpND7MLl = CgOdcpND7MLl +1;
                    }
                    j = j + 1;
                };
            }
            e9OLch5 = e9OLch5 + 1;
        };
    }
    {
        e9OLch5 = 454 - 454;
        while (CgOdcpND7MLl > e9OLch5) {
            {
                j = 297 - 297;
                while (j < CgOdcpND7MLl -e9OLch5) {
                    if (a[j] < a[j + 1]) {
                        double  temp;
                        temp = a[j];
                        a[j] = a[j + 1];
                        a[j + 1] = temp;
                    }
                    j++;
                };
            }
            e9OLch5++;
        };
    }
    cout << a[0] << endl;
    return 0;
}

