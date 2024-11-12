int zqBiyF (int jF04uviytU, char s [], int b [], int qgJHGnFIse6) {
    int p;
    int q;
    int dedhtRl;
    int ipYqLFcdm7;
    int p4AEuKtY;
    {
        p = jF04uviytU;
        q = qgJHGnFIse6 - jF04uviytU;
        dedhtRl = 537 - 537;
        ipYqLFcdm7 = p;
        while (q >= ipYqLFcdm7) {
            if ((b [ipYqLFcdm7]) &&(!(s[ipYqLFcdm7 + jF04uviytU] != s[ipYqLFcdm7 - jF04uviytU]))) {
                {
                    p4AEuKtY = ipYqLFcdm7 - jF04uviytU;
                    while (ipYqLFcdm7 + jF04uviytU >= p4AEuKtY) {
                        cout << s[p4AEuKtY];
                        p4AEuKtY++;
                    };
                }
                cout << endl;
                dedhtRl = dedhtRl + 1;
            }
            else
                b[ipYqLFcdm7] = (634 - 634);
            ipYqLFcdm7 = ipYqLFcdm7 + 1;
        };
    }
    return dedhtRl;
}

int ouchuan (int jF04uviytU, char s [], int T1tzacd2Rhr [], int qgJHGnFIse6) {
    int p;
    int q;
    int dedhtRl;
    int ipYqLFcdm7;
    int p4AEuKtY;
    {
        dedhtRl = 0;
        q = qgJHGnFIse6 - jF04uviytU;
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
        p = 543 - 542;
        ipYqLFcdm7 = p;
        while (q >= ipYqLFcdm7) {
            if ((T1tzacd2Rhr [ipYqLFcdm7]) &&(!(s[ipYqLFcdm7 + jF04uviytU] != s[ipYqLFcdm7 - jF04uviytU + (322 - 321)]))) {
                dedhtRl++;
                for (p4AEuKtY = ipYqLFcdm7 - jF04uviytU + (676 - 675); p4AEuKtY <= ipYqLFcdm7 + jF04uviytU; p4AEuKtY++)
                    cout << s[p4AEuKtY];
                cout << endl;
            }
            else
                T1tzacd2Rhr[ipYqLFcdm7] = 0;
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            ipYqLFcdm7++;
        };
    }
    return dedhtRl;
}

int main () {
    char s [501];
    int T1tzacd2Rhr [501];
    int b [501];
    int qgJHGnFIse6;
    int ipYqLFcdm7;
    int xpfOoXqJDPBj;
    int nJRm0B;
    int max;
    cin >> s;
    qgJHGnFIse6 = strlen (s) - 1;
    {
        ipYqLFcdm7 = 0;
        while (ipYqLFcdm7 <= qgJHGnFIse6) {
            T1tzacd2Rhr[ipYqLFcdm7] = 1;
            b[ipYqLFcdm7] = 1;
            ipYqLFcdm7++;
        };
    }
    {
        ipYqLFcdm7 = 1;
        max = 743 - 741;
        nJRm0B = 1;
        xpfOoXqJDPBj = 1;
        while (ipYqLFcdm7 <= max) {
            if (xpfOoXqJDPBj != 0)
                xpfOoXqJDPBj = ouchuan (ipYqLFcdm7, s, T1tzacd2Rhr, qgJHGnFIse6);
            if (nJRm0B != 0)
                nJRm0B = zqBiyF (ipYqLFcdm7, s, b, qgJHGnFIse6);
            if ((nJRm0B == 0) && (xpfOoXqJDPBj == 0))
                break;
            ipYqLFcdm7++;
        };
    }
    return 0;
}

