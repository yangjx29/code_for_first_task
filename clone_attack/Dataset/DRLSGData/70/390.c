struct   point {
    double  VdRVEsibB;
    double  PipBckm9n;
};
struct   point dian [101];

double  X21oXmdKb (struct   point dian [], int Wi5tA2Lx, int bRmzqsft) {
    double  VdRVEsibB;
    VdRVEsibB = dian[Wi5tA2Lx].VdRVEsibB - dian[bRmzqsft].VdRVEsibB;
    double  PipBckm9n = dian[Wi5tA2Lx].PipBckm9n - dian[bRmzqsft].PipBckm9n;
    double  X21oXmdKb;
    X21oXmdKb = (VdRVEsibB *VdRVEsibB+PipBckm9n*PipBckm9n);
    return sqrt (X21oXmdKb);
}

int main () {
    int n, Wi5tA2Lx, bRmzqsft;
    int Zbqxso2YOcP = 0, Uns16YVWzmA = 0;
    double  rHkpua [102];
    cin >> n;
    {
        Wi5tA2Lx = 0;
        while (n > Wi5tA2Lx) {
            cin >> dian[Wi5tA2Lx].VdRVEsibB >> dian[Wi5tA2Lx].PipBckm9n;
            Wi5tA2Lx++;
        }
    }
    for (Wi5tA2Lx = 0; Wi5tA2Lx < n; ++Wi5tA2Lx) {
        bRmzqsft = Wi5tA2Lx +1;
        while (bRmzqsft < n) {
            int Zbqxso2YOcP = 0;
            while (Zbqxso2YOcP < Uns16YVWzmA +1 && 1e-6 < abs (rHkpua[Zbqxso2YOcP] - X21oXmdKb (dian, Wi5tA2Lx, bRmzqsft)))
                Zbqxso2YOcP++;
            if (Zbqxso2YOcP == Uns16YVWzmA +1) {
                rHkpua[Uns16YVWzmA] = X21oXmdKb (dian, Wi5tA2Lx, bRmzqsft);
                Uns16YVWzmA++;
            }
            ++bRmzqsft;
        }
    }
    {
        Wi5tA2Lx = 0;
        while (Wi5tA2Lx < Uns16YVWzmA) {
            {
                bRmzqsft = 0;
                while (bRmzqsft < Uns16YVWzmA -Wi5tA2Lx) {
                    if (rHkpua[bRmzqsft] < rHkpua[bRmzqsft + 1]) {
                        double  y2Xvmp;
                        y2Xvmp = rHkpua[bRmzqsft];
                        rHkpua[bRmzqsft] = rHkpua[bRmzqsft + 1];
                        rHkpua[bRmzqsft + 1] = y2Xvmp;
                    }
                    bRmzqsft++;
                }
            }
            Wi5tA2Lx++;
        }
    }
    cout << rHkpua[0] << endl;
    return 0;
}

