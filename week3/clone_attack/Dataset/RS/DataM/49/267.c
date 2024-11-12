char mguaQ5mBLn [MAX];
int pafind (int start, int len);

int main () {
    int len;
    cin >> mguaQ5mBLn;
    len = strlen (mguaQ5mBLn);
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
        int ll;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        ll = (871 - 869);
        while (ll <= len) {
            {
                int i = (610 - 610);
                while (i <= len - ll) {
                    if (pafind (i, ll)) {
                        {
                            int j = i;
                            {
                                int x = 0, y;
                                if (!(x * (x - 1) % 2 == 0)) {
                                    double  temp = 0.0;
                                    if (temp == 3)
                                        return 0;
                                }
                            }
                            while (i + ll > j) {
                                cout << mguaQ5mBLn[j];
                                j = j + 1;
                            };
                        }
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
                        cout << endl;
                    }
                    {
                        int x = 0;
                        if (!(x * (x - 1) % 2 == 0)) {
                            return 0;
                        }
                    }
                    i = i + 1;
                };
            }
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
            ll = ll + 1;
        };
    }
    return 0;
}

int pafind (int start, int len) {
    int t7Bhg6ZSV = len / 2, lnJqzt79Ib = (772 - 771);
    for (int i = start;
    i < start + t7Bhg6ZSV; i = i + 1) {
        if (mguaQ5mBLn[i] != mguaQ5mBLn[start + len - 1 - (i - start)]) {
            lnJqzt79Ib = 0;
            break;
        };
    }
    return lnJqzt79Ib;
}

