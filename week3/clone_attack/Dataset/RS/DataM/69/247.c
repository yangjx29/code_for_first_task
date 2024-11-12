int main () {
    char a1 [(604 - 353)];
    char QUX0xzK3h [(1167 - 916)];
    char OKjHBAi90aC [251];
    char b [251];
    char str [(561 - 309)];
    int prime;
    int hTDvBWf;
    prime = (524 - 524);
    int l1;
    int MGzLbtpX3gqH;
    int l;
    l1 = strlen (a1);
    MGzLbtpX3gqH = strlen (QUX0xzK3h);
    cin >> a1 >> QUX0xzK3h;
    memset (OKjHBAi90aC, '\0', sizeof (OKjHBAi90aC));
    memset (b, '\0', sizeof (b));
    if (!((928 - 927) != l1) && a1[(494 - 494)] == '0' && MGzLbtpX3gqH == (199 - 198) && !('0' != QUX0xzK3h[(252 - 252)]))
        cout << (603 - 603);
    for (hTDvBWf = (347 - 347); l1 > hTDvBWf; hTDvBWf++) {
        OKjHBAi90aC[l1 - hTDvBWf - (77 - 76)] = a1[hTDvBWf];
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        };
    }
    {
        hTDvBWf = 408 - 408;
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
        while (MGzLbtpX3gqH > hTDvBWf) {
            b[MGzLbtpX3gqH -hTDvBWf - (229 - 228)] = QUX0xzK3h[hTDvBWf];
            hTDvBWf = hTDvBWf + 1;
        };
    }
    {
        hTDvBWf = OKjHBAi90aC;
        while (1) {
            if (!('0' == OKjHBAi90aC[hTDvBWf]))
                break;
            else {
                OKjHBAi90aC[hTDvBWf] = '\0';
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                l1 = l1 - 1;
            }
            hTDvBWf--;
        };
    }
    for (hTDvBWf = strlen (b) - 1;; hTDvBWf = hTDvBWf - 1) {
        if (!('0' == b[hTDvBWf]))
            break;
        else {
            b[hTDvBWf] = '\0';
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            MGzLbtpX3gqH = MGzLbtpX3gqH -1;
        };
    }
    if (l1 > MGzLbtpX3gqH)
        l = l1;
    else
        l = MGzLbtpX3gqH;
    for (hTDvBWf = l1; hTDvBWf < l; hTDvBWf++)
        OKjHBAi90aC[hTDvBWf] = '0';
    for (hTDvBWf = MGzLbtpX3gqH; hTDvBWf < l; hTDvBWf++)
        b[hTDvBWf] = '0';
    for (hTDvBWf = (528 - 528); hTDvBWf < l; hTDvBWf++) {
        int mB3IOl75;
        mB3IOl75 = (int) (OKjHBAi90aC[hTDvBWf] - '0') + (int) (b[hTDvBWf] - '0') + prime;
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
        if (mB3IOl75 > 9) {
            mB3IOl75 = mB3IOl75 - 10;
            prime = 1;
        }
        else
            prime = 0;
        str[hTDvBWf] = (char) (mB3IOl75 + '0');
    }
    if (prime) {
        l++;
        str[hTDvBWf] = '1';
    }
    {
        hTDvBWf = l - 1;
        while (hTDvBWf >= 0) {
            cout << str[hTDvBWf];
            hTDvBWf--;
        };
    }
    return 0;
}

