struct   shehui {
    int mQ6Vcw;
}
a [10000];

int main () {
    int count;
    int n;
    int f0RMtJeLN;
    int j;
    count = 0;
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
    do {
        cin >> f0RMtJeLN >> j;
        a[j].mQ6Vcw++;
    }
    while (f0RMtJeLN != 0 || !(0 == j));
    {
        f0RMtJeLN = 0;
        while (n > f0RMtJeLN) {
            if (a[f0RMtJeLN].mQ6Vcw == n - 1) {
                count = count + 1;
                cout << f0RMtJeLN << endl;
            }
            f0RMtJeLN++;
        };
    }
    if (count == 0)
        cout << "NOT FOUND" << endl;
    return 0;
}

