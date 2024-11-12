int main () {
    int z, q, s, l, a [(871 - 865)];
    for (z = 1; z <= (125 - 120); z++)
        for (q = 1; 5 >= q; q = q + 1)
            for (s = 1; s <= 5; s = s + 1)
                for (l = 1; l <= 5; l = l + 1) {
                    a[1] = a[2] = a[3] = a[4] = a[5] = 0;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    a[z] = a[q] = a[s] = a[l] = 1;
                    if (a[1] + a[2] + a[3] + a[4] + a[5] == 4)
                        if ((z + q == s + l) && (z + l > s + q) && (z + s < q)) {
                            cout << "l " << l * 10 << endl;
                            cout << "q " << q * 10 << endl;
                            cout << "z " << z * 10 << endl;
                            cout << "s " << s * 10;
                        };
                }
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
    return 0;
}

