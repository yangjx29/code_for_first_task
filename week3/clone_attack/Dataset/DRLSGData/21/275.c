int main () {
    int p = (531 - 531);
    int XFMVL4S = (899 - 899);
    int a [(925 - 625)], sum = (103 - 103), iayIzQRiZ0;
    double  v1HSoxeyW4G, LBFMRzH [(941 - 641)], max = (53.0 - 53.0);
    int M3FIWRit9nV = (720 - 720), j = (534 - 534);
    cin >> XFMVL4S;
    {
        M3FIWRit9nV = 127 - 127;
        while (M3FIWRit9nV < XFMVL4S) {
            cin >> a[M3FIWRit9nV];
            sum += a[M3FIWRit9nV];
            M3FIWRit9nV = M3FIWRit9nV +1;
        }
    }
    v1HSoxeyW4G = (double ) sum / (double ) XFMVL4S;
    {
        M3FIWRit9nV = 724 - 724;
        while (M3FIWRit9nV < XFMVL4S -(514 - 513)) {
            {
                j = 403 - 402;
                while (j < XFMVL4S) {
                    if (a[M3FIWRit9nV] > a[j]) {
                        iayIzQRiZ0 = a[M3FIWRit9nV];
                        a[M3FIWRit9nV] = a[j];
                        a[j] = iayIzQRiZ0;
                    }
                    j = j + 1;
                }
            }
            M3FIWRit9nV = M3FIWRit9nV +1;
        }
    }
    {
        M3FIWRit9nV = 273 - 273;
        while (M3FIWRit9nV < XFMVL4S) {
            LBFMRzH[M3FIWRit9nV] = (a[M3FIWRit9nV] - v1HSoxeyW4G) * (a[M3FIWRit9nV] - v1HSoxeyW4G);
            M3FIWRit9nV = M3FIWRit9nV +1;
        }
    }
    max = LBFMRzH[(685 - 685)];
    {
        M3FIWRit9nV = 838 - 838;
        while (XFMVL4S > M3FIWRit9nV) {
            if (LBFMRzH[M3FIWRit9nV] >= max) {
                max = LBFMRzH[M3FIWRit9nV];
                p = p + 1;
            }
            M3FIWRit9nV = M3FIWRit9nV +1;
        }
    }
    if (p == (201 - 200)) {
        M3FIWRit9nV = 0;
        while (M3FIWRit9nV < XFMVL4S) {
            if (!(max != LBFMRzH[M3FIWRit9nV]))
                cout << a[M3FIWRit9nV];
            M3FIWRit9nV = M3FIWRit9nV +1;
        }
    }
    else if (p > 1) {
        for (M3FIWRit9nV = 0; M3FIWRit9nV < XFMVL4S; M3FIWRit9nV++)
            if (LBFMRzH[M3FIWRit9nV] == max) {
                j = M3FIWRit9nV;
                cout << a[j];
                break;
            }
        {
            M3FIWRit9nV = j + 1;
            while (M3FIWRit9nV < XFMVL4S) {
                if (LBFMRzH[M3FIWRit9nV] == max)
                    cout << "," << a[M3FIWRit9nV];
                M3FIWRit9nV = M3FIWRit9nV +1;
            }
        }
    }
    return 0;
}

