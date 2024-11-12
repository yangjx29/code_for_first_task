void  program (void ) {
    int m;
    int GNoeqVLawUkI;
    int i;
    int j;
    const  int rtJLaSylGWv = GNoeqVLawUkI, N = GNoeqVLawUkI;
    int a [rtJLaSylGWv];
    int b [N];
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            for (x = 0; x < 20; x++) {
                y += x;
            }
            if (y > 30)
                return y;
        }
    };
    cin >> m >> GNoeqVLawUkI;
    {
        i = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (i < m) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        i = 0;
        while (GNoeqVLawUkI > i) {
            cin >> b[i];
            ++i;
        };
    }
    {
        i = 0;
        while (i < m) {
            {
                j = i + 1;
                while (m > j) {
                    if (a[j] < a[i]) {
                        a[i] = a[i] + a[j];
                        a[j] = a[i] - a[j];
                        a[i] = a[i] - a[j];
                    }
                    ++j;
                };
            }
            ++i;
        };
    }
    cout << a[0];
    {
        i = 0;
        while (GNoeqVLawUkI > i) {
            for (j = i + 1; GNoeqVLawUkI > j; ++j)
                if (b[i] > b[j]) {
                    b[i] = b[i] + b[j];
                    b[j] = b[i] - b[j];
                    b[i] = b[i] - b[j];
                }
            ++i;
        };
    }
    {
        i = 1;
        while (i < m) {
            cout << ' ' << a[i];
            ++i;
        };
    }
    {
        i = 0;
        while (i < GNoeqVLawUkI) {
            cout << ' ' << b[i];
            ++i;
        };
    };
}

int main () {
    program ();
    return 0;
}

