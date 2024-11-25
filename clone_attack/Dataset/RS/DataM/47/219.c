int a [100001];

void  swap (int n, int niLc2vCV5gAu) {
    int t;
    t = a[n];
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
    a[n] = a[niLc2vCV5gAu];
    a[niLc2vCV5gAu] = t;
}

int main () {
    int niLc2vCV5gAu;
    int n;
    int i;
    int Mkp8NM;
    cin >> n;
    {
        i = 1;
        while (n >= i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    {
        Mkp8NM = n;
        i = 1;
        while (i <= Mkp8NM) {
            swap (i, Mkp8NM);
            Mkp8NM = Mkp8NM -1;
            i = i + 1;
        };
    }
    {
        i = 1;
        while (i < n) {
            cout << a[i] << ' ';
            i = i + 1;
        };
    }
    cout << a[n];
    return 0;
}

