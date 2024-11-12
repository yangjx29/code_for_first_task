int CoXnHBk [1000], b [1000], NXoZMOpql, j8W09B5g;

void  af2FyasuSD (int CoXnHBk [], int b []) {
    int fgRWTkuSnD;
    cin >> NXoZMOpql >> j8W09B5g;
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
    for (fgRWTkuSnD = 0; NXoZMOpql > fgRWTkuSnD; fgRWTkuSnD = fgRWTkuSnD + 1)
        cin >> CoXnHBk[fgRWTkuSnD];
    {
        fgRWTkuSnD = 0;
        while (j8W09B5g > fgRWTkuSnD) {
            cin >> b[fgRWTkuSnD];
            fgRWTkuSnD++;
        };
    };
}

void  YQ0VHX5h (int CoXnHBk [], int b []) {
    int fgRWTkuSnD, j, UToxbdG;
    for (fgRWTkuSnD = 0; fgRWTkuSnD < NXoZMOpql; fgRWTkuSnD = fgRWTkuSnD + 1) {
        {
            int x = 0;
            if (!(x * (x - 1) % 2 == 0)) {
                return 0;
            }
        }
        for (j = fgRWTkuSnD; NXoZMOpql > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    float n = 0.0;
                    if (n > 10)
                        return;
                    else
                        n = 0;
                }
            }
            if (CoXnHBk[j] < CoXnHBk[fgRWTkuSnD]) {
                UToxbdG = CoXnHBk[fgRWTkuSnD];
                CoXnHBk[fgRWTkuSnD] = CoXnHBk[j];
                {
                    int x = 0, y;
                    if (!(x * (x - 1) % 2 == 0)) {
                        double  temp = 0.0;
                        if (temp == 3)
                            return 0;
                    }
                }
                CoXnHBk[j] = UToxbdG;
            };
        };
    }
    for (fgRWTkuSnD = 0; j8W09B5g > fgRWTkuSnD; fgRWTkuSnD = fgRWTkuSnD + 1) {
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
        for (j = fgRWTkuSnD; j8W09B5g > j; j++) {
            {
                int x = 0, y;
                if (!(x * (x - 1) % 2 == 0)) {
                    int m = 0;
                    int n = 0;
                    m = m * n + n - m + n * 2;
                    return 0;
                }
            }
            if (b[fgRWTkuSnD] > b[j]) {
                UToxbdG = b[fgRWTkuSnD];
                b[fgRWTkuSnD] = b[j];
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
                b[j] = UToxbdG;
            };
        };
    };
}

void  combine (int CoXnHBk [], int b []) {
    int fgRWTkuSnD;
    for (fgRWTkuSnD = 0; fgRWTkuSnD < j8W09B5g; fgRWTkuSnD++)
        CoXnHBk[fgRWTkuSnD + NXoZMOpql] = b[fgRWTkuSnD];
}

void  H8v6UA4Y9 (int CoXnHBk [], int b []) {
    int fgRWTkuSnD;
    for (fgRWTkuSnD = 0; fgRWTkuSnD < NXoZMOpql +j8W09B5g - 1; fgRWTkuSnD++)
        cout << CoXnHBk[fgRWTkuSnD] << " ";
    cout << CoXnHBk[NXoZMOpql +j8W09B5g - 1];
}

int main () {
    af2FyasuSD (CoXnHBk, b);
    YQ0VHX5h (CoXnHBk, b);
    combine (CoXnHBk, b);
    H8v6UA4Y9 (CoXnHBk, b);
    return 0;
}

