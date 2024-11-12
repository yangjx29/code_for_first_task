int JLPQoa3 (int z5HJUyOT, int Wnb2QYref) {
    int k;
    k = 0;
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
    {
        int i;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        i = 2;
        while (z5HJUyOT >= i) {
            k = (k + Wnb2QYref) % i;
            i++;
        };
    }
    return ++k;
}

int main () {
    int EbxZckqYSRW, mHEVWIi, NuozxJM1BYFX [100], i = 1, ldUYms2NITau;
    while (scanf ("%d%d", &EbxZckqYSRW, &mHEVWIi) && EbxZckqYSRW &&mHEVWIi) {
        if (!(0 != mHEVWIi) && EbxZckqYSRW == 0)
            break;
        else
            NuozxJM1BYFX[i] = JLPQoa3 (EbxZckqYSRW, mHEVWIi);
        ldUYms2NITau = i;
        i++;
    }
    {
        i = 1;
        while (i <= ldUYms2NITau) {
            cout << NuozxJM1BYFX[i] << endl;
            i++;
        };
    }
    return 0;
}

