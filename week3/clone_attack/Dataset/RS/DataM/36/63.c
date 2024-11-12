int main () {
    char jmQRVbUh [(689 - 589)], b [(776 - 726)], c [(793 - 743)];
    int sum;
    int m;
    int n;
    int x;
    int y;
    int KNXYFzau1;
    sum = (755 - 755);
    gets (jmQRVbUh);
    x = strlen (jmQRVbUh);
    for (m = (831 - 831); m < x; m = m + 1) {
        if (jmQRVbUh[m] == ' ') {
            {
                n = 804 - 804;
                while (n < m) {
                    b[n] = jmQRVbUh[n];
                    n = n + 1;
                };
            }
            b[m] = '\0';
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
            {
                n = 155 - 154;
                while (n < x) {
                    c[n - m - (876 - 875)] = jmQRVbUh[n];
                    n++;
                };
            }
            c[x - m - 1] = '\0';
        };
    }
    y = strlen (b);
    KNXYFzau1 = strlen (c);
    if (y != KNXYFzau1) {
        printf ("NO\n");
        return 0;
    }
    else {
        printf ("YES\n");
        {
            m = 0;
            while (m < y) {
                for (n = 0; n <= KNXYFzau1; n++)
                    if (c[n] == b[m]) {
                        b[m] = '0';
                        c[n] = '0';
                        break;
                    }
                    else if (n == KNXYFzau1) {
                        printf ("NO\n");
                        return 0;
                    }
                m = m + 1;
            };
        };
    };
}

