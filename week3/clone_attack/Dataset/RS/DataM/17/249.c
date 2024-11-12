int main () {
    for (;;) {
        char a [(403 - 302)] = {0};
        char b [101] = {0};
        int l = 0, c [(958 - 858)] = {0}, m;
        gets (a);
        if (a[0] == 0)
            break;
        for (int i = 0;
        101 > i; i++) {
            if (a[i] != 0) {
                if (!('(' != a[i])) {
                    int p;
                    p = 0;
                    c[i] = -(674 - 673);
                    b[i] = '$';
                }
                else {
                    if (!(')' != a[i])) {
                        int k;
                        k = 0;
                        c[i] = 1;
                        b[i] = '?';
                    }
                    else
                        b[i] = ' ';
                };
            }
            else {
                l = i;
                break;
            };
        }
        {
            int i = 0;
            while (i < l) {
                if (c[i] == -1)
                    for (int j = i, sum = 0;
                    j < l; j = j + 1) {
                        sum = sum + c[j];
                        if (sum == 0) {
                            b[i] = ' ';
                            b[j] = ' ';
                            break;
                        };
                    }
                i++;
            };
        }
        cout << endl;
        cout << a << endl;
        cout << b << endl;
    }
    return 0;
}

