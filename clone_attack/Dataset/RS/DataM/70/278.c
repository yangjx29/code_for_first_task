int main () {
    int mThVKI75d;
    int KdEPyI2RHOm0;
    int izQrNKtsEP9;
    int ompx3NY;
    int Ud718lIDpO;
    mThVKI75d = 0.0;
    KdEPyI2RHOm0 = 0.0;
    izQrNKtsEP9 = 0.0;
    ompx3NY = 0.0;
    Ud718lIDpO = 0.0;
    int nInput;
    int njrdX8ST;
    int j;
    nInput = (707 - 707);
    double  xDiff;
    double  ZsnF1CJr [100];
    double  BihnYZj [100];
    xDiff = (873.0 - 873.0);
    double  mrWsxf6ZGL;
    double  Js9VMzBti;
    mrWsxf6ZGL = 0.0;
    Js9VMzBti = 0.0;
    cout << endl;
    cin >> nInput;
    {
        njrdX8ST = 0;
        while (nInput > njrdX8ST) {
            cin >> ZsnF1CJr[njrdX8ST] >> BihnYZj[njrdX8ST];
            njrdX8ST = njrdX8ST + 1;
        };
    }
    {
        njrdX8ST = 0;
        while (nInput > njrdX8ST) {
            {
                j = 0;
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
                while (nInput > j) {
                    xDiff = ZsnF1CJr[njrdX8ST] - ZsnF1CJr[j];
                    if (xDiff > izQrNKtsEP9) {
                        Ud718lIDpO = j;
                        izQrNKtsEP9 = xDiff;
                        ompx3NY = njrdX8ST;
                    }
                    j = j + 1;
                };
            }
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            njrdX8ST = njrdX8ST + 1;
        };
    }
    {
        njrdX8ST = 0;
        while (njrdX8ST < nInput) {
            {
                j = 0;
                while (j < nInput) {
                    mrWsxf6ZGL = BihnYZj[njrdX8ST] - BihnYZj[j];
                    if (mrWsxf6ZGL > Js9VMzBti) {
                        KdEPyI2RHOm0 = j;
                        mThVKI75d = njrdX8ST;
                        Js9VMzBti = mrWsxf6ZGL;
                    }
                    j = j + 1;
                };
            }
            njrdX8ST++;
        };
    }
    if (Js9VMzBti >= izQrNKtsEP9)
        cout << sqrt ((BihnYZj[mThVKI75d] - BihnYZj[KdEPyI2RHOm0]) * (BihnYZj[mThVKI75d] - BihnYZj[KdEPyI2RHOm0]) + (ZsnF1CJr[mThVKI75d] - ZsnF1CJr[KdEPyI2RHOm0]) * (ZsnF1CJr[mThVKI75d] - ZsnF1CJr[KdEPyI2RHOm0]));
    else
        cout << sqrt ((BihnYZj[ompx3NY] - BihnYZj[Ud718lIDpO]) * (BihnYZj[ompx3NY] - BihnYZj[Ud718lIDpO])) + (ZsnF1CJr[ompx3NY] - ZsnF1CJr[Ud718lIDpO]) * (ZsnF1CJr[ompx3NY] - ZsnF1CJr[Ud718lIDpO]);
    return 0;
}

