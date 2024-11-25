int main () {
    int Q9Ulj0;
    int j;
    int XEXtkiRUApoz;
    int ak1b6Jsmu;
    int uQZvPaHK8p;
    int a [111] [111];
    int bAaeuHUgBj1;
    int n;
    cin >> n;
    for (Q9Ulj0 = (126 - 125); n >= Q9Ulj0; Q9Ulj0++) {
        for (j = (267 - 266); n >= j; j++) {
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
            for (XEXtkiRUApoz = (650 - 649); n >= XEXtkiRUApoz; XEXtkiRUApoz = XEXtkiRUApoz +1) {
                cin >> a[j][XEXtkiRUApoz];
            };
        }
        bAaeuHUgBj1 = 0;
        {
            j = 670 - 669;
            while (j < n) {
                uQZvPaHK8p = 10000;
                for (ak1b6Jsmu = j + (275 - 274); ak1b6Jsmu <= n; ak1b6Jsmu = ak1b6Jsmu + 1) {
                    uQZvPaHK8p = min (uQZvPaHK8p, a[(907 - 906)][ak1b6Jsmu]);
                }
                uQZvPaHK8p = min (uQZvPaHK8p, a[1][1]);
                for (ak1b6Jsmu = j + 1; ak1b6Jsmu <= n; ak1b6Jsmu++)
                    a[1][ak1b6Jsmu] = a[1][ak1b6Jsmu] - uQZvPaHK8p;
                a[1][1] = a[1][1] - uQZvPaHK8p;
                for (XEXtkiRUApoz = j + 1; n >= XEXtkiRUApoz; XEXtkiRUApoz = XEXtkiRUApoz +1) {
                    uQZvPaHK8p = 10000;
                    {
                        ak1b6Jsmu = j + 1;
                        while (ak1b6Jsmu <= n) {
                            uQZvPaHK8p = min (uQZvPaHK8p, a[XEXtkiRUApoz][ak1b6Jsmu]);
                            ak1b6Jsmu = ak1b6Jsmu + 1;
                        };
                    }
                    uQZvPaHK8p = min (uQZvPaHK8p, a[XEXtkiRUApoz][1]);
                    for (ak1b6Jsmu = j + 1; ak1b6Jsmu <= n; ak1b6Jsmu++) {
                        a[XEXtkiRUApoz][ak1b6Jsmu] = a[XEXtkiRUApoz][ak1b6Jsmu] - uQZvPaHK8p;
                    }
                    a[XEXtkiRUApoz][1] = a[XEXtkiRUApoz][1] - uQZvPaHK8p;
                }
                uQZvPaHK8p = 10000;
                for (ak1b6Jsmu = j + 1; ak1b6Jsmu <= n; ak1b6Jsmu++) {
                    uQZvPaHK8p = min (uQZvPaHK8p, a[ak1b6Jsmu][1]);
                }
                uQZvPaHK8p = min (uQZvPaHK8p, a[1][1]);
                for (ak1b6Jsmu = j + 1; ak1b6Jsmu <= n; ak1b6Jsmu++) {
                    a[ak1b6Jsmu][1] = a[ak1b6Jsmu][1] - uQZvPaHK8p;
                }
                a[1][1] = a[1][1] - uQZvPaHK8p;
                for (XEXtkiRUApoz = j + 1; XEXtkiRUApoz <= n; XEXtkiRUApoz++) {
                    uQZvPaHK8p = 10000;
                    for (ak1b6Jsmu = j + 1; ak1b6Jsmu <= n; ak1b6Jsmu++) {
                        uQZvPaHK8p = min (uQZvPaHK8p, a[ak1b6Jsmu][XEXtkiRUApoz]);
                    }
                    uQZvPaHK8p = min (uQZvPaHK8p, a[1][XEXtkiRUApoz]);
                    {
                        ak1b6Jsmu = j + 1;
                        while (ak1b6Jsmu <= n) {
                            a[ak1b6Jsmu][XEXtkiRUApoz] = a[ak1b6Jsmu][XEXtkiRUApoz] - uQZvPaHK8p;
                            ak1b6Jsmu = ak1b6Jsmu + 1;
                        };
                    }
                    a[1][XEXtkiRUApoz] = a[1][XEXtkiRUApoz] - uQZvPaHK8p;
                }
                bAaeuHUgBj1 = bAaeuHUgBj1 + a[j + 1][j + 1];
                j = j + 1;
            };
        }
        cout << bAaeuHUgBj1 << endl;
    };
}

