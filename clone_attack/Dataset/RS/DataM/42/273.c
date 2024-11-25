int main () {
    int AJdXiDMb;
    int yVzAdsRkB [100000];
    int fl8wY2hzB;
    int S5eja8lB;
    int G2XV64G;
    S5eja8lB = 0;
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
    cin >> AJdXiDMb;
    for (G2XV64G = 0; AJdXiDMb > G2XV64G; G2XV64G = G2XV64G +1)
        cin >> yVzAdsRkB[G2XV64G];
    cin >> fl8wY2hzB;
    {
        G2XV64G = 0;
        while (AJdXiDMb > G2XV64G) {
            if (!(fl8wY2hzB == yVzAdsRkB[G2XV64G]))
                yVzAdsRkB[S5eja8lB++] = yVzAdsRkB[G2XV64G];
            G2XV64G = G2XV64G +1;
        };
    }
    for (G2XV64G = 0; S5eja8lB -1 > G2XV64G; G2XV64G++)
        cout << yVzAdsRkB[G2XV64G] << " ";
    if (S5eja8lB > 0)
        cout << yVzAdsRkB[S5eja8lB -1] << endl;
    return 0;
}

