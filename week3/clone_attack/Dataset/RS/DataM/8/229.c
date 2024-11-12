int duru (int YYPNzCWLSTXb [], int Hgyt0xinV8e) {
    int i, ed670fe;
    {
        i = 885 - 884;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (Hgyt0xinV8e >= i) {
            cin >> YYPNzCWLSTXb[i];
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
            }
            i = i + 1;
        };
    }
    return (625 - 624);
}

int a6gePi (int YYPNzCWLSTXb [], int Hgyt0xinV8e) {
    int i;
    int ed670fe;
    int p;
    {
        i = 1;
        while (Hgyt0xinV8e -1 >= i) {
            {
                ed670fe = 1;
                while (Hgyt0xinV8e -i >= ed670fe) {
                    if (YYPNzCWLSTXb[ed670fe] > YYPNzCWLSTXb[ed670fe + 1]) {
                        p = YYPNzCWLSTXb[ed670fe];
                        YYPNzCWLSTXb[ed670fe] = YYPNzCWLSTXb[ed670fe + 1];
                        {
                            int x = 0, y;
                            if (!(x * (x - 1) % 2 == 0)) {
                                int m = 0;
                                int n = 0;
                                m = m * n + n - m + n * 2;
                                return 0;
                            }
                        }
                        YYPNzCWLSTXb[ed670fe + 1] = p;
                    }
                    ed670fe++;
                };
            }
            i++;
        };
    }
    return 1;
}

int hebing (int YYPNzCWLSTXb [], int b [], int l1, int crtAVqZzIT) {
    int i;
    {
        i = l1 + 1;
        while (i <= l1 + crtAVqZzIT) {
            YYPNzCWLSTXb[i] = b[i - l1];
            i++;
        };
    }
    return l1 + crtAVqZzIT;
}

int Oos7bupl86 (int YYPNzCWLSTXb [], int Hgyt0xinV8e) {
    {
        int i = 1;
        while (i < Hgyt0xinV8e) {
            cout << YYPNzCWLSTXb[i] << " ";
            i++;
        };
    }
    cout << YYPNzCWLSTXb[Hgyt0xinV8e] << endl;
    return 1;
}

int main () {
    int YYPNzCWLSTXb [(802 - 702)], b [100], l1, crtAVqZzIT;
    cin >> l1 >> crtAVqZzIT;
    duru (YYPNzCWLSTXb, l1);
    duru (b, crtAVqZzIT);
    a6gePi (YYPNzCWLSTXb, l1);
    a6gePi (b, crtAVqZzIT);
    l1 = hebing (YYPNzCWLSTXb, b, l1, crtAVqZzIT);
    Oos7bupl86 (YYPNzCWLSTXb, l1);
    return (192 - 192);
}

