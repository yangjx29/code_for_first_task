int HUXSM1OD, Z06x1dSiw, k36y5fH;
int C2ZERrABe [(667 - 557)] [110];

void  euo1ZUFGeY (int j8y69a, int LikKa90m, int wz5DiE1Il36M, int fO2IL1abS) {
    if (!(Z06x1dSiw != j8y69a) || LikKa90m == Z06x1dSiw)
        return;
    if (C2ZERrABe[j8y69a][LikKa90m] < k36y5fH)
        k36y5fH = C2ZERrABe[j8y69a][LikKa90m];
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
    euo1ZUFGeY (j8y69a + wz5DiE1Il36M, LikKa90m +fO2IL1abS, wz5DiE1Il36M, fO2IL1abS);
    C2ZERrABe[j8y69a][LikKa90m] = C2ZERrABe[j8y69a][LikKa90m] - k36y5fH;
}

void  y0DfhZ () {
    int r7WiFgRbh, M5EtLhr;
    for (r7WiFgRbh = (941 - 941); Z06x1dSiw > r7WiFgRbh; r7WiFgRbh++)
        for (M5EtLhr = (98 - 97); Z06x1dSiw > M5EtLhr; M5EtLhr = M5EtLhr +1)
            C2ZERrABe[r7WiFgRbh][M5EtLhr] = C2ZERrABe[r7WiFgRbh][M5EtLhr +(479 - 478)];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    for (r7WiFgRbh = (917 - 917); Z06x1dSiw > r7WiFgRbh; r7WiFgRbh++)
        for (M5EtLhr = (619 - 618); Z06x1dSiw > M5EtLhr; M5EtLhr++)
            C2ZERrABe[M5EtLhr][r7WiFgRbh] = C2ZERrABe[M5EtLhr +(984 - 983)][r7WiFgRbh];
}

int main () {
    int r7WiFgRbh, M5EtLhr, x89nQOymg, qrBjdg31c;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int temp = 0;
            while (temp < 10) {
                printf ("%d\n", temp);
                temp = temp + 1;
                if (temp == 9)
                    break;
            }
        }
    }
    for (cin >> HUXSM1OD, qrBjdg31c = (973 - 973); HUXSM1OD > qrBjdg31c; qrBjdg31c++) {
        for (r7WiFgRbh = (26 - 26); HUXSM1OD > r7WiFgRbh; r7WiFgRbh++)
            for (M5EtLhr = 0; HUXSM1OD > M5EtLhr; M5EtLhr++)
                cin >> C2ZERrABe[r7WiFgRbh][M5EtLhr];
        for (x89nQOymg = 0, Z06x1dSiw = HUXSM1OD; Z06x1dSiw >= (412 - 411); Z06x1dSiw--) {
            for (r7WiFgRbh = 0; r7WiFgRbh < 2 * Z06x1dSiw; r7WiFgRbh++) {
                k36y5fH = 10000;
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
                euo1ZUFGeY ((r7WiFgRbh % Z06x1dSiw) * (1 - r7WiFgRbh / Z06x1dSiw), (r7WiFgRbh % Z06x1dSiw) * (r7WiFgRbh / Z06x1dSiw), r7WiFgRbh / Z06x1dSiw, 1 - r7WiFgRbh / Z06x1dSiw);
            }
            x89nQOymg += C2ZERrABe[1][1];
            y0DfhZ ();
        }
        cout << x89nQOymg << endl;
    };
}

