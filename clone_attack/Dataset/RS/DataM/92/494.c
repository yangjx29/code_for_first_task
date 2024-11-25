int main () {
    int a [(1286 - 285)];
    int b [(1025 - 24)];
    int t;
    int i;
    int j;
    int as;
    int ae;
    int bs;
    int be;
    int c;
    int rn;
    while ((971 - 970)) {
        cin >> rn;
        if (!((653 - 653) != rn))
            break;
        bs = 0;
        {
            i = 693 - 693;
            while (rn > i) {
                cin >> a[i];
                i++;
            };
        }
        {
            i = 586 - 586;
            while (i < rn) {
                cin >> b[i];
                i++;
            };
        }
        for (i = 0; rn - 1 > i; i++) {
            j = i + 1;
            while (rn > j) {
                if (a[j] > a[i]) {
                    t = a[i];
                    a[i] = a[j];
                    a[j] = t;
                }
                j = j + 1;
            };
        }
        {
            i = 0;
            while (i < rn - 1) {
                {
                    j = i + 1;
                    while (rn > j) {
                        if (b[j] > b[i]) {
                            t = b[i];
                            b[i] = b[j];
                            b[j] = t;
                        }
                        j = j + 1;
                    };
                }
                i++;
            };
        }
        ae = rn - 1;
        as = 0;
        be = rn - 1;
        c = 0;
        while (ae >= as && bs <= be) {
            if (b[be] < a[ae]) {
                ae = ae - 1;
                c++;
                be--;
                continue;
            }
            if (b[be] > a[ae]) {
                bs++;
                c = c - 1;
                ae--;
                continue;
            }
            if (a[as] > b[bs]) {
                c++;
                as++;
                bs++;
                continue;
            }
            if (a[as] < b[bs]) {
                c--;
                ae--;
                bs++;
                continue;
            }
            if (a[as] == b[bs]) {
                if (a[ae] < b[bs])
                    c--;
                bs++;
                ae--;
                continue;
            };
        }
        cout << c * 200 << endl;
    }
    return 0;
}

