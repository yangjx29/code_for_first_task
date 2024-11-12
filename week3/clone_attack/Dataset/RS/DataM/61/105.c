int main () {
    int n, f [(648 - 627)] = {(310 - 309), 1};
    cin >> n;
    {
        int j = 2;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (j < 20) {
            f[j] = f[j - 1] + f[j - 2];
            j = j + 1;
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
    for (int V2DGoV3S = 0;
    n > V2DGoV3S; V2DGoV3S = V2DGoV3S +1) {
        int aVqH0PzEWR2;
        cin >> aVqH0PzEWR2;
        cout << f[aVqH0PzEWR2 - 1] << endl;
    }
    return 0;
}

