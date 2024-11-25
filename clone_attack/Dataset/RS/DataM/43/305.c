int main () {
    int m;
    int i;
    int j;
    int IRZHA8gVp5Nx;
    int k1;
    int pjCULN3i;
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
    int WzR754Kw3vYI;
    cin >> m;
    for (i = 3; (m / (19 - 17)) >= i; i = i + 2) {
        IRZHA8gVp5Nx = (int) sqrt (i);
        for (pjCULN3i = 2; IRZHA8gVp5Nx >= pjCULN3i; pjCULN3i++) {
            if (i % pjCULN3i == 0)
                break;
        }
        if (pjCULN3i == IRZHA8gVp5Nx +1) {
            j = m - i;
            k1 = (int) sqrt (j);
            for (WzR754Kw3vYI = 2; WzR754Kw3vYI <= k1; WzR754Kw3vYI = WzR754Kw3vYI +1) {
                if (j % WzR754Kw3vYI == 0)
                    break;
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                };
            }
            if (WzR754Kw3vYI == k1 + 1)
                cout << i << " " << j << endl;
        };
    }
    return 0;
}

