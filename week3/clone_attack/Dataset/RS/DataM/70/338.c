int main () {
    double  n, MXYxvIs [(673 - 573)], SNBX93iZsJTO [(891 - 791)], mltYKf, max;
    int fEuhSi;
    int V5DylA0HYk;
    max = (746 - 746);
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
    cin >> n;
    {
        fEuhSi = 0;
        while (fEuhSi < n) {
            cin >> MXYxvIs[fEuhSi] >> SNBX93iZsJTO[fEuhSi];
            fEuhSi = fEuhSi + 1;
        };
    }
    for (fEuhSi = 0; fEuhSi < n;) {
        for (V5DylA0HYk = 0; V5DylA0HYk < n;) {
            mltYKf = sqrt ((MXYxvIs[fEuhSi] - MXYxvIs[V5DylA0HYk]) * (MXYxvIs[fEuhSi] - MXYxvIs[V5DylA0HYk]) + (SNBX93iZsJTO[fEuhSi] - SNBX93iZsJTO[V5DylA0HYk]) * (SNBX93iZsJTO[fEuhSi] - SNBX93iZsJTO[V5DylA0HYk]));
            V5DylA0HYk = V5DylA0HYk +1;
            if (mltYKf >= max)
                max = mltYKf;
        }
        fEuhSi = fEuhSi + 1;
    }
    printf ("%.4f\n", max);
    return 0;
}

