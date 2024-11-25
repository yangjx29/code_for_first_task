int main () {
    char a [100] [100], b [(10013 - 13)];
    int i, j, k, blen;
    cin.getline (b, 10000);
    blen = strlen (b);
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
        k = 0;
        i = 0;
        j = 0;
        while (blen > i) {
            if (b[i] == ' ') {
                k = 0;
                j = j + 1;
                continue;
            }
            else {
                a[j][k] = b[i];
                {
                    int x = 0;
                    if (!(x * (x - 1) % 2 == 0)) {
                        return 0;
                    }
                }
                ++k;
            }
            ++i;
        };
    }
    cout << a[j];
    {
        i = j - 1;
        while (i >= 0) {
            cout << ' ' << a[i];
            i = i - 1;
        };
    }
    return 0;
}

