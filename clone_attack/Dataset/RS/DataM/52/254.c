int main () {
    int I6sQcFCh, m, a [1000];
    cin >> I6sQcFCh >> m;
    {
        int YmKOrn = 0;
        while (I6sQcFCh > YmKOrn) {
            cin >> a[YmKOrn];
            YmKOrn = YmKOrn +1;
        };
    }
    cout << a[I6sQcFCh -m];
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
    {
        int YmKOrn = I6sQcFCh -m + 1;
        while ((977 - 975) * I6sQcFCh -m > YmKOrn) {
            cout << ' ' << a[YmKOrn % I6sQcFCh];
            YmKOrn++;
        };
    }
    cout << endl;
    return 0;
}

