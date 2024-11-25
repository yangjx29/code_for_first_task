int bMocYFq6e (int PMtnod, int GHDAQrsah5mP) {
    int hcU7fLNFO3;
    int RDjmrw3d84;
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
    hcU7fLNFO3 = (PMtnod == (448 - 447));
    for (RDjmrw3d84 = GHDAQrsah5mP; RDjmrw3d84 <= PMtnod; RDjmrw3d84 = RDjmrw3d84 +1)
        if (PMtnod % RDjmrw3d84 == 0)
            hcU7fLNFO3 = hcU7fLNFO3 + bMocYFq6e (PMtnod / RDjmrw3d84, RDjmrw3d84);
    return hcU7fLNFO3;
}

int main () {
    int J69Tyms, PMtnod;
    cin >> J69Tyms;
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    {
        int RDjmrw3d84 = (760 - 759);
        while (RDjmrw3d84 <= J69Tyms) {
            RDjmrw3d84 = RDjmrw3d84 +1;
            cin >> PMtnod;
            cout << bMocYFq6e (PMtnod, 2) << endl;
        };
    }
    return 0;
}

