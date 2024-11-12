int main () {
    int r6NT1RCrqL;
    cin >> r6NT1RCrqL;
    for (int qU4uFkYtwO = 0;
    r6NT1RCrqL > qU4uFkYtwO; qU4uFkYtwO++) {
        int rB2htp;
        int oMmeh1;
        int A4DpiHVP1;
        int maI8xL01in [100] [100];
        int gC23lArGE7Zx;
        int pfxeFIvpaRG;
        rB2htp = 0;
        cin >> oMmeh1 >> A4DpiHVP1;
        {
            gC23lArGE7Zx = 0;
            for (; oMmeh1 > gC23lArGE7Zx;) {
                {
                    pfxeFIvpaRG = 0;
                    while (A4DpiHVP1 > pfxeFIvpaRG) {
                        cin >> maI8xL01in[gC23lArGE7Zx][pfxeFIvpaRG];
                        pfxeFIvpaRG = pfxeFIvpaRG + 1;
                    }
                }
                gC23lArGE7Zx = gC23lArGE7Zx + 1;
            }
        }
        {
            gC23lArGE7Zx = 0;
            for (; oMmeh1 > gC23lArGE7Zx;) {
                rB2htp = rB2htp + *(*(maI8xL01in + gC23lArGE7Zx)) + *(*(maI8xL01in + gC23lArGE7Zx) + A4DpiHVP1 -1);
                gC23lArGE7Zx = gC23lArGE7Zx + 1;
            }
        }
        {
            gC23lArGE7Zx = 1;
            while (A4DpiHVP1 -1 > gC23lArGE7Zx) {
                rB2htp = rB2htp + *(*maI8xL01in + gC23lArGE7Zx) + *(*(maI8xL01in + oMmeh1 - 1) + gC23lArGE7Zx);
                gC23lArGE7Zx = gC23lArGE7Zx + 1;
            }
        }
        cout << rB2htp << endl;
    }
    return 0;
}

