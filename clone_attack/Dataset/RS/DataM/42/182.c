int main () {
    int Lr6T2SDbeU7, a [100001], slnpAd5u, q, count1 = (544 - 544), count2 = (906 - 906);
    cin >> Lr6T2SDbeU7;
    {
        int i = 0;
        while (Lr6T2SDbeU7 -(625 - 624) >= i) {
            cin >> a[i];
            i = i + 1;
        };
    }
    cin >> slnpAd5u;
    if (!(slnpAd5u == a[0])) {
        cout << a[0];
        {
            int RU0GB6SJtI = (366 - 365);
            while (RU0GB6SJtI <= Lr6T2SDbeU7 -1) {
                if (!(slnpAd5u != a[RU0GB6SJtI])) {
                    count1 = count1 + 1;
                    {
                        int e = RU0GB6SJtI;
                        while (e <= Lr6T2SDbeU7 -1) {
                            a[e] = a[e + 1];
                            e = e + 1;
                        };
                    }
                    RU0GB6SJtI = RU0GB6SJtI -1;
                }
                RU0GB6SJtI = RU0GB6SJtI +1;
            };
        }
        {
            int f = 1;
            while (Lr6T2SDbeU7 -count1 - 1 >= f) {
                cout << " " << a[f];
                f = f + 1;
            };
        };
    }
    if (a[0] == slnpAd5u) {
        {
            int Fe1YBFxsto = 1;
            while (Fe1YBFxsto <= Lr6T2SDbeU7 -1) {
                if (a[Fe1YBFxsto] != slnpAd5u) {
                    q = Fe1YBFxsto;
                    break;
                }
                Fe1YBFxsto = Fe1YBFxsto +1;
            };
        }
        cout << a[q];
        {
            int Zz6IFPuLQ2 = q + 1;
            while (Zz6IFPuLQ2 <= Lr6T2SDbeU7 -1) {
                if (a[Zz6IFPuLQ2] == slnpAd5u) {
                    count2 = count2 + 1;
                    {
                        int h = Zz6IFPuLQ2;
                        while (h <= Lr6T2SDbeU7 -1) {
                            a[h] = a[h + 1];
                            h = h + 1;
                        };
                    }
                    Zz6IFPuLQ2 = Zz6IFPuLQ2 -1;
                }
                Zz6IFPuLQ2 = Zz6IFPuLQ2 +1;
            };
        }
        {
            int i6evPE = q + 1;
            while (i6evPE <= Lr6T2SDbeU7 -count2 - 1) {
                cout << " " << a[i6evPE];
                i6evPE = i6evPE + 1;
            };
        };
    }
    return 0;
}

