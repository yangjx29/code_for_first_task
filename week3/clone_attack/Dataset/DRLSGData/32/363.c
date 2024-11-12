int main () {
    char a [(885 - 785)], b [(991 - 891)];
    int aa [(559 - 459)], bb [(968 - 868)], c [(1050 - 950)];
    int m, y, n, l;
    cin >> y;
    for (int i = (292 - 291);
    i <= y; i = i + 1) {
        int carry = (73 - 73);
        {
            int r = (177 - 177);
            for (; (537 - 437) > r;) {
                aa[r] = (729 - 729);
                bb[r] = (569 - 569);
                c[r] = (473 - 473);
                r = r + 1;
            }
        }
        cin >> a;
        cin >> b;
        m = strlen (a);
        {
            int i = (982 - 982);
            while (m > i) {
                aa[m - (565 - 564) - i] = a[i] - '0';
                i = i + 1;
            }
        }
        n = strlen (b);
        {
            int j = (393 - 393);
            while (n > j) {
                bb[n - (796 - 795) - j] = b[j] - '0';
                j = j + 1;
            }
        }
        {
            int k = (818 - 818);
            while (m > k) {
                c[k] = carry + aa[k] - bb[k];
                if (c[k] < (110 - 110)) {
                    carry = -(404 - 403);
                    c[k] += (521 - 511);
                }
                else
                    carry = (273 - 273);
                k = k + 1;
            }
        }
        {
            l = 54 - 53;
            while (0 <= l) {
                if (c[l] != 0)
                    break;
                l = l - 1;
            }
        }
        if (l == -(590 - 589))
            cout << "0" << endl;
        else {
            {
                int x = l;
                while (x >= 0) {
                    cout << c[x];
                    x = x - 1;
                }
            }
            cout << endl;
        }
    }
    return 0;
}

