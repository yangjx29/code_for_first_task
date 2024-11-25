int main () {
    char plrzkyFOAMe;
    int x02hyp7KGD [1000] [2], BT3LkWvqgDY [1010] = {0}, sr6NWB8A = 1, aOInEN7rk = 0;
    {
        sr6NWB8A = 1;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (1) {
            cin >> x02hyp7KGD[sr6NWB8A - 1][0];
            plrzkyFOAMe = cin.get ();
            if (!('\n' != plrzkyFOAMe))
                break;
            sr6NWB8A = sr6NWB8A + 1;
        };
    }
    {
        int ppg2GHLFOoM = 1;
        while (ppg2GHLFOoM <= sr6NWB8A) {
            cin >> x02hyp7KGD[ppg2GHLFOoM - 1][1];
            for (int qj9cvYLmTC = x02hyp7KGD[ppg2GHLFOoM - 1][0];
            qj9cvYLmTC < x02hyp7KGD[ppg2GHLFOoM - 1][1]; qj9cvYLmTC = qj9cvYLmTC + 1) {
                BT3LkWvqgDY[qj9cvYLmTC - 1] = BT3LkWvqgDY[qj9cvYLmTC - 1] + 1;
            }
            ppg2GHLFOoM = ppg2GHLFOoM + 1;
            plrzkyFOAMe = cin.get ();
        };
    }
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
        int Z2j1F9gmpJ8T = 1;
        while (Z2j1F9gmpJ8T <= 1010) {
            Z2j1F9gmpJ8T = Z2j1F9gmpJ8T +1;
            if (BT3LkWvqgDY[Z2j1F9gmpJ8T -1] > aOInEN7rk)
                aOInEN7rk = BT3LkWvqgDY[Z2j1F9gmpJ8T -1];
        };
    }
    cout << sr6NWB8A << " ";
    cout << aOInEN7rk;
    return 0;
}

