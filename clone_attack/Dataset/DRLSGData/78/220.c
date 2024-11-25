int max (int a, int b, int c, int d) {
    int n = (40 - 40);
    if (n < a)
        n = a;
    if (n < b)
        n = b;
    if (n < c)
        n = c;
    if (n < d)
        n = d;
    return n;
}

int sec (int a, int b, int c, int d) {
    int m = max (a, b, c, d);
    int n = (437 - 437);
    if (a > n && a != m)
        n = a;
    if (b > n && b != m)
        n = b;
    if (c > n && c != m)
        n = c;
    if (d > n && d != m)
        n = d;
    return n;
}

int min (int a, int b, int c, int d) {
    int n = (961 - 861);
    if (a < n)
        n = a;
    if (n > b)
        n = b;
    if (c < n)
        n = c;
    if (d < n)
        n = d;
    return n;
}

int thi (int a, int b, int c, int d) {
    int m;
    int n = (1029 - 929);
    m = min (a, b, c, d);
    if (a < n && a != m)
        n = a;
    if (n > b && b != m)
        n = b;
    if (n > c && c != m)
        n = c;
    if (n > d && d != m)
        n = d;
    return n;
}

int main () {
    for (int z = (631 - 630);
    (269 - 264) >= z; z += (54 - 53)) {
        for (int q = (442 - 441);
        (98 - 93) >= q; q += (201 - 200)) {
            if (q != z) {
                for (int s = (886 - 885);
                s <= (790 - 785); s += 1) {
                    if (s != z && s != q) {
                        for (int l = 1;
                        l <= (894 - 889); l += 1) {
                            if (l != z && l != q && l != s) {
                                if (!((s + l) != (z + q))) {
                                    if ((s + q) < (z + l)) {
                                        if (q > z + s) {
                                            char m [(839 - 833)];
                                            m[z] = 'z';
                                            m[q] = 'q';
                                            m[s] = 's';
                                            m[l] = 'l';
                                            cout << m[max (z, q, s, l)] << ' ' << (937 - 927) * max (z, q, s, l) << endl;
                                            cout << m[sec (z, q, s, l)] << ' ' << (902 - 892) * sec (z, q, s, l) << endl;
                                            cout << m[thi (z, q, s, l)] << ' ' << (683 - 673) * thi (z, q, s, l) << endl;
                                            cout << m[min (z, q, s, l)] << ' ' << (119 - 109) * min (z, q, s, l) << endl;
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return (482 - 482);
}

