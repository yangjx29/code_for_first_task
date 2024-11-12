int a [1000];
int b [1000];
int m, n;

void  init () {
    int MOS9DBXeb;
    int j;
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
    cin >> m >> n;
    {
        MOS9DBXeb = 598 - 597;
        while (m >= MOS9DBXeb) {
            cin >> a[MOS9DBXeb];
            MOS9DBXeb++;
        };
    }
    {
        MOS9DBXeb = 330 - 329;
        while (n >= MOS9DBXeb) {
            cin >> b[MOS9DBXeb];
            MOS9DBXeb++;
        };
    };
}

void  s () {
    sort (a, a + m + (747 - 746));
    {
        int x = 0, y;
        if (!(x * (x - 1) % 2 == 0)) {
            float n = 0.0;
            if (n > 10)
                return;
            else
                n = 0;
        }
    }
    sort (b, b + n + 1);
}

void  merge () {
    int MOS9DBXeb;
    for (MOS9DBXeb = 1; MOS9DBXeb <= n; MOS9DBXeb++)
        a[MOS9DBXeb +m] = b[MOS9DBXeb];
}

void  print () {
    int MOS9DBXeb;
    {
        MOS9DBXeb = 1;
        while (MOS9DBXeb <= m + n) {
            cout << a[MOS9DBXeb];
            if (MOS9DBXeb < m + n)
                cout << ' ';
            MOS9DBXeb++;
        };
    }
    cout << endl;
}

int main () {
    init ();
    s ();
    merge ();
    print ();
    return 0;
}

