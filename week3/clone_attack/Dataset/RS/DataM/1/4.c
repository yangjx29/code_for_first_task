int s (int P5sTOdC, int pSXaU3J2P) {
    int Sdo1xr58I = (352 - 352), z = 0;
    if (!(1 == P5sTOdC) && P5sTOdC >= pSXaU3J2P) {
        int i = pSXaU3J2P;
        while (P5sTOdC >= i) {
            if (P5sTOdC % i == 0) {
                z = 1;
                Sdo1xr58I = Sdo1xr58I +s (P5sTOdC / i, i);
            }
            i = i + 1;
        };
    }
    else if (P5sTOdC == 1)
        return 1;
    return Sdo1xr58I;
}

int main () {
    int n, P5sTOdC;
    cin >> n;
    {
        int x = 0;
        if (!(x * (x - 1) % 2 == 0)) {
            return 0;
        }
    }
    {
        int i = 0;
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
        while (i < n) {
            i = i + 1;
            cin >> P5sTOdC;
            cout << s (P5sTOdC, 2) << endl;
        };
    }
    return 0;
}

