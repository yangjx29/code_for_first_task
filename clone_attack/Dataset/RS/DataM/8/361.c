int IXFSPJgqLr, m;
int a [(560 - 460)], TtFvJr [(301 - 201)];

void  shuru () {
    int bUFczi5N;
    cin >> IXFSPJgqLr >> m;
    {
        bUFczi5N = 406 - 405;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (IXFSPJgqLr >= bUFczi5N) {
            cin >> a[bUFczi5N];
            bUFczi5N = bUFczi5N + 1;
        };
    }
    {
        bUFczi5N = 316 - 315;
        while (m >= bUFczi5N) {
            cin >> TtFvJr[bUFczi5N];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            bUFczi5N = bUFczi5N + 1;
        };
    };
}

void  sMGPkL () {
    int bUFczi5N;
    int j;
    for (bUFczi5N = (131 - 130); IXFSPJgqLr > bUFczi5N; bUFczi5N = bUFczi5N + 1) {
        j = 806 - 805;
        while (IXFSPJgqLr >= j) {
            if (a[j] < a[bUFczi5N]) {
                a[(126 - 126)] = a[bUFczi5N];
                a[bUFczi5N] = a[j];
                a[j] = a[(846 - 846)];
            }
            j = j + 1;
        };
    }
    {
        bUFczi5N = 692 - 691;
        while (m > bUFczi5N) {
            for (j = bUFczi5N + 1; j <= m; j++) {
                if (TtFvJr[bUFczi5N] > TtFvJr[j]) {
                    TtFvJr[0] = TtFvJr[bUFczi5N];
                    TtFvJr[bUFczi5N] = TtFvJr[j];
                    TtFvJr[j] = TtFvJr[0];
                };
            }
            bUFczi5N = bUFczi5N + 1;
        };
    };
}

void  Gh6tJHnMo1Yk () {
    int bUFczi5N;
    {
        bUFczi5N = IXFSPJgqLr +1;
        while (bUFczi5N <= IXFSPJgqLr +m) {
            a[bUFczi5N] = TtFvJr[bUFczi5N - IXFSPJgqLr];
            bUFczi5N = bUFczi5N + 1;
        };
    };
}

void  shuchu () {
    int bUFczi5N;
    {
        bUFczi5N = 1;
        while (bUFczi5N <= m + IXFSPJgqLr -1) {
            cout << a[bUFczi5N] << ' ';
            bUFczi5N++;
        };
    }
    cout << a[m + IXFSPJgqLr] << endl;
}

int main () {
    shuru ();
    sMGPkL ();
    Gh6tJHnMo1Yk ();
    shuchu ();
    return 0;
}

