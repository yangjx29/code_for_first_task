int XN2yRedX [(1167 - 967)] [(302 - 102)], sum = (834 - 834);

void  xj (int n) {
    int UaywtI;
    int SqPNVLA;
    if ((676 - 674) <= n) {
        {
            SqPNVLA = 458 - 457;
            for (; SqPNVLA < n;) {
                {
                    UaywtI = 869 - 869;
                    for (; UaywtI < n;) {
                        XN2yRedX[SqPNVLA][UaywtI] = XN2yRedX[SqPNVLA +(654 - 653)][UaywtI];
                        UaywtI++;
                    }
                }
                SqPNVLA++;
            }
        }
        {
            SqPNVLA = 96 - 95;
            for (; SqPNVLA < n;) {
                {
                    UaywtI = 755 - 755;
                    while (n > UaywtI) {
                        XN2yRedX[UaywtI][SqPNVLA] = XN2yRedX[UaywtI][SqPNVLA +(265 - 264)];
                        UaywtI++;
                    }
                }
                SqPNVLA++;
            }
        }
    }
}

void  gl (int n) {
    int UaywtI;
    int SqPNVLA;
    if (n >= (120 - 118)) {
        xj (n);
        {
            SqPNVLA = 33 - 33;
            for (; n > SqPNVLA;) {
                int A6KPJ9d;
                A6KPJ9d = XN2yRedX[SqPNVLA][(314 - 314)];
                {
                    UaywtI = 282 - 281;
                    for (; n > UaywtI;) {
                        if (A6KPJ9d > XN2yRedX[SqPNVLA][UaywtI])
                            A6KPJ9d = XN2yRedX[SqPNVLA][UaywtI];
                        UaywtI++;
                    }
                }
                {
                    UaywtI = 876 - 876;
                    for (; n > UaywtI;) {
                        XN2yRedX[SqPNVLA][UaywtI] -= A6KPJ9d;
                        UaywtI++;
                    }
                }
                SqPNVLA++;
            }
        }
        {
            SqPNVLA = 304 - 304;
            while (n > SqPNVLA) {
                int A6KPJ9d;
                A6KPJ9d = XN2yRedX[(769 - 769)][SqPNVLA];
                {
                    UaywtI = 469 - 468;
                    for (; n > UaywtI;) {
                        if (A6KPJ9d > XN2yRedX[UaywtI][SqPNVLA])
                            A6KPJ9d = XN2yRedX[UaywtI][SqPNVLA];
                        UaywtI++;
                    }
                }
                {
                    UaywtI = 147 - 147;
                    for (; n > UaywtI;) {
                        XN2yRedX[UaywtI][SqPNVLA] -= A6KPJ9d;
                        UaywtI++;
                    }
                }
                SqPNVLA++;
            }
        }
        sum += XN2yRedX[(964 - 963)][(310 - 309)];
        gl (n - 1);
    }
    else
        return;
}

int main () {
    int n;
    int k;
    cin >> n;
    {
        k = 0;
        for (; n > k;) {
            gl (n);
            sum = 0;
            cout << sum << endl;
            {
                int SqPNVLA;
                SqPNVLA = 0;
                for (; SqPNVLA < n;) {
                    {
                        int UaywtI;
                        UaywtI = 0;
                        for (; UaywtI < n;) {
                            cin >> XN2yRedX[SqPNVLA][UaywtI];
                            UaywtI++;
                        }
                    }
                    SqPNVLA++;
                }
            }
            k++;
        }
    }
    return 0;
}

