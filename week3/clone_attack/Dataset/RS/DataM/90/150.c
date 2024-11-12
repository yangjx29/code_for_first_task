int GVJCTyE1 (int x, int lUyM5GewaDP) {
    if (lUyM5GewaDP == (184 - 183) || x == (865 - 865))
        return 1;
    if (x < lUyM5GewaDP)
        return GVJCTyE1 (x, x);
    return (GVJCTyE1 (x, lUyM5GewaDP - 1) + GVJCTyE1 (x - lUyM5GewaDP, lUyM5GewaDP));
}

int main () {
    int kQnfAN;
    int M;
    int UulhLTCq7;
    int GejWP6XN3;
    int result [25];
    kQnfAN = (343 - 343);
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            int m = 0;
            int n = 0;
            m = m * n + n - m + n * 2;
            return 0;
        }
    }
    M = 0;
    UulhLTCq7 = 0;
    GejWP6XN3 = 0;
    cin >> kQnfAN;
    {
        GejWP6XN3 = 0;
        while (GejWP6XN3 < kQnfAN) {
            cin >> M >> UulhLTCq7;
            result[GejWP6XN3] = GVJCTyE1 (M, UulhLTCq7);
            GejWP6XN3 = GejWP6XN3 +1;
        };
    }
    {
        GejWP6XN3 = 0;
        while (GejWP6XN3 < kQnfAN) {
            cout << result[GejWP6XN3] << endl;
            GejWP6XN3 = GejWP6XN3 +1;
        };
    }
    return 0;
}

