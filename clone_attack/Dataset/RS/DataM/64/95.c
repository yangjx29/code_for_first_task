struct   A {
    int low7E5, umXKVbZB3Y, DrLwe2a9;
}
a [10];

double  xEGh0xY (int a, int b, int TTiIQVB1Y, int fNHrP6oSs, int LrYSNPuzg, int DBlT8hFAC7o) {
    double  m;
    m = (double ) (a - fNHrP6oSs) * (a - fNHrP6oSs) + (b - LrYSNPuzg) * (b - LrYSNPuzg) + (TTiIQVB1Y -DBlT8hFAC7o) * (TTiIQVB1Y -DBlT8hFAC7o);
    m = sqrt (m);
    return m;
}

int oldZeK (const  void  *a, const  void  *b) {
    return ((*(double *) a - *(double *) b > 0) ? 1 : -1);
}

int main () {
    int sxZu5cmBsC, SqTN1RX7uok8, Dcn2mvbK5hV, k, l = 0, YCFl1Vw;
    double  b [50];
    for (; cin >> sxZu5cmBsC && sxZu5cmBsC;) {
        k = 0;
        {
            SqTN1RX7uok8 = 0;
            while (sxZu5cmBsC > SqTN1RX7uok8) {
                cin >> a[SqTN1RX7uok8].low7E5;
                cin >> a[SqTN1RX7uok8].umXKVbZB3Y;
                cin >> a[SqTN1RX7uok8].DrLwe2a9;
                SqTN1RX7uok8 = SqTN1RX7uok8 +1;
            };
        }
        {
            SqTN1RX7uok8 = 0;
            while (sxZu5cmBsC > SqTN1RX7uok8) {
                {
                    Dcn2mvbK5hV = SqTN1RX7uok8 +1;
                    {
                        int x = 0, y;
                        if (!(x * (x - 1) % 2 == 0)) {
                            int m = 0;
                            int n = 0;
                            m = m * n + n - m + n * 2;
                            return 0;
                        }
                    }
                    while (sxZu5cmBsC > Dcn2mvbK5hV) {
                        b[k++] = xEGh0xY (a[SqTN1RX7uok8].low7E5, a[SqTN1RX7uok8].umXKVbZB3Y, a[SqTN1RX7uok8].DrLwe2a9, a[Dcn2mvbK5hV].low7E5, a[Dcn2mvbK5hV].umXKVbZB3Y, a[Dcn2mvbK5hV].DrLwe2a9);
                        Dcn2mvbK5hV = Dcn2mvbK5hV +1;
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
                SqTN1RX7uok8++;
            };
        }
        qsort (b, sxZu5cmBsC * (sxZu5cmBsC - 1) / 2, sizeof (b [0]), oldZeK);
        l = sxZu5cmBsC * (sxZu5cmBsC - 1) / 2 - 1;
        YCFl1Vw = 0;
        while (0 <= l) {
            SqTN1RX7uok8 = 0;
            while (SqTN1RX7uok8 < sxZu5cmBsC) {
                {
                    Dcn2mvbK5hV = SqTN1RX7uok8 +1;
                    while (sxZu5cmBsC > Dcn2mvbK5hV) {
                        if (b[l] == xEGh0xY (a[SqTN1RX7uok8].low7E5, a[SqTN1RX7uok8].umXKVbZB3Y, a[SqTN1RX7uok8].DrLwe2a9, a[Dcn2mvbK5hV].low7E5, a[Dcn2mvbK5hV].umXKVbZB3Y, a[Dcn2mvbK5hV].DrLwe2a9)) {
                            cout << "(" << a[SqTN1RX7uok8].low7E5 << "," << a[SqTN1RX7uok8].umXKVbZB3Y << "," << a[SqTN1RX7uok8].DrLwe2a9 << ")" << "-" << "(" << a[Dcn2mvbK5hV].low7E5 << "," << a[Dcn2mvbK5hV].umXKVbZB3Y << "," << a[Dcn2mvbK5hV].DrLwe2a9 << ")" << "=" << fixed << setprecision (2) << b[l] << endl;
                            l = l - 1;
                            if (b[l] == b[l + 1])
                                continue;
                            else {
                                YCFl1Vw = 1;
                                break;
                            };
                        }
                        Dcn2mvbK5hV++;
                    };
                }
                if (YCFl1Vw == 1) {
                    YCFl1Vw = 0;
                    break;
                }
                SqTN1RX7uok8++;
            };
        };
    }
    return 0;
}

