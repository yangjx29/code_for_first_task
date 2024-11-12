int f549MLDcsX (int d6fLsbw2Ek, int gnHMTQ1) {
    if (!(gnHMTQ1 != d6fLsbw2Ek))
        return d6fLsbw2Ek;
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
    if (gnHMTQ1 < d6fLsbw2Ek) {
        if (d6fLsbw2Ek % 2 == (448 - 448))
            return f549MLDcsX (d6fLsbw2Ek / 2, gnHMTQ1);
        else
            return f549MLDcsX ((d6fLsbw2Ek - 1) / 2, gnHMTQ1);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    if (d6fLsbw2Ek < gnHMTQ1) {
        if (gnHMTQ1 % 2 == 0)
            return f549MLDcsX (d6fLsbw2Ek, gnHMTQ1 / 2);
        else
            return f549MLDcsX (d6fLsbw2Ek, (gnHMTQ1 - 1) / 2);
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int temp = 0;
                while (temp < 10) {
                    printf ("%d\n", temp);
                    temp = temp + 1;
                    if (temp == 9)
                        break;
                }
            }
        };
    };
}

int main () {
    int OgjqXeEoY, SgSe18WOzr4v;
    cin >> OgjqXeEoY >> SgSe18WOzr4v;
    cout << f549MLDcsX (OgjqXeEoY, SgSe18WOzr4v) << endl;
    return 0;
}

