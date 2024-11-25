int OzkuMFIBh (int n, int MRxbG1Qlre);

int main () {
    int n;
    int MRxbG1Qlre;
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
    cin >> n >> MRxbG1Qlre;
    cout << OzkuMFIBh (n, MRxbG1Qlre);
    return 0;
}

int OzkuMFIBh (int n, int MRxbG1Qlre) {
    int KEmktDd [n + (602 - 601)];
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
    KEmktDd[n] = MRxbG1Qlre;
    do {
        KEmktDd[n] = KEmktDd[n] + n;
        {
            i = 268 - 267;
            while ((37 - 36) <= i) {
                if (KEmktDd[i + 1] % (n - 1) != 0)
                    break;
                else
                    KEmktDd[i] = KEmktDd[i + 1] * n / (n - 1) + MRxbG1Qlre;
                i = i - 1;
            };
        };
    }
    while (i >= 1);
    return KEmktDd[1];
}

