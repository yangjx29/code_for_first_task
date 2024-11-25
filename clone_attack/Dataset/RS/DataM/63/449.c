int main () {
    int Wn0g1JXTKW [100] [100], FGAFPgH123b [100] [100], SJEC3InsX0, DimZBEW, x2, kk0mFwEeN, oqnHsge4TN, Iwbp9IM2Sm, qpjk9n, Kj37Gc4e8E, VfNjVaLt, uvHNSFse36;
    cin >> SJEC3InsX0 >> DimZBEW;
    {
        Iwbp9IM2Sm = 0;
        {
            int x = 0, y;
            if (!(x * (x - 1) % 2 == 0)) {
                int m = 0;
                int n = 0;
                m = m * n + n - m + n * 2;
                return 0;
            }
        }
        while (SJEC3InsX0 *DimZBEW > Iwbp9IM2Sm) {
            cin >> Wn0g1JXTKW[Iwbp9IM2Sm / DimZBEW][Iwbp9IM2Sm % DimZBEW];
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
            Iwbp9IM2Sm++;
        };
    }
    cin >> x2 >> kk0mFwEeN;
    {
        qpjk9n = 0;
        while (x2 * kk0mFwEeN > qpjk9n) {
            cin >> FGAFPgH123b[qpjk9n / kk0mFwEeN][qpjk9n % kk0mFwEeN];
            {
                int x = 0;
                if (!(x * (x - 1) % 2 == 0)) {
                    return 0;
                }
            }
            qpjk9n++;
        };
    }
    {
        Kj37Gc4e8E = 0;
        while (SJEC3InsX0 > Kj37Gc4e8E) {
            {
                VfNjVaLt = 0;
                while (kk0mFwEeN > VfNjVaLt) {
                    oqnHsge4TN = 0;
                    for (uvHNSFse36 = 0; DimZBEW > uvHNSFse36; uvHNSFse36 = uvHNSFse36 + 1) {
                        oqnHsge4TN = oqnHsge4TN + Wn0g1JXTKW[Kj37Gc4e8E][uvHNSFse36] * FGAFPgH123b[uvHNSFse36][VfNjVaLt];
                    }
                    if (VfNjVaLt != 0)
                        cout << ' ';
                    cout << oqnHsge4TN;
                    if (VfNjVaLt == kk0mFwEeN - 1)
                        cout << endl;
                    VfNjVaLt++;
                };
            }
            Kj37Gc4e8E++;
        };
    }
    return 0;
}

